#include <iostream>
#include <string>
#include <curl/curl.h>
#include "json.hpp"

using json = nlohmann::json;
using namespace std;

struct Level {
    int id;
    string name;
    string author;
    string difficulty;
};

size_t WriteCallback(void* contents, size_t size, size_t nmemb, string* output) {
    output->append((char*)contents, size * nmemb);
    return size * nmemb;
}

Level fetchLevel(int levelID) {

    string url =
        "https://api.gdvn.net/levels/"
        + to_string(levelID)
        + "?fromGD=1";

    CURL* curl;
    CURLcode res;

    string response;

    curl = curl_easy_init();

    if(curl) {

        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());

        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);

        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

        res = curl_easy_perform(curl);

        curl_easy_cleanup(curl);
    }

    json data = json::parse(response);

    Level lv;

    lv.id = data["id"];
    lv.name = data["name"];
    lv.author = data["author"];
    lv.difficulty = data["difficulty"];

    return lv;
}

int main() {

    int id;

    cout << "Nhap level ID: ";
    cin >> id;

    try {

        Level lv = fetchLevel(id);

        cout << "\n=== LEVEL INFO ===\n";

        cout << "Name: "
             << lv.name << endl;

        cout << "Author: "
             << lv.author << endl;

        cout << "Difficulty: "
             << lv.difficulty << endl;
    }

    catch(exception& e) {

        cout << e.what() << endl;
    }

    return 0;
}