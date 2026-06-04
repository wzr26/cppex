#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

struct Student {
    int id;
    string name;
    int age;
};

int main() {

    vector<Student> students;

    Student s;

    cout << "ID: ";
    cin >> s.id;

    cin.ignore();
    
    cout << "Name: ";
    getline(cin, s.name);

    cout << "Age: ";
    cin >> s.age;

    students.push_back(s);

    cout << "\n--- Student List ---\n";

    for (int i = 0; i < students.size(); i++) {
        cout << "ID: " << students[i].id << "\n";
        cout << "Name: " << students[i].name << "\n";
        cout << "Age: " << students[i].age << "\n";
    }

    ofstream file("students.txt");

    for(int i = 0; i < students.size(); i++){
        file << students[i].id
             << "|"
             << students[i].name
             << "|"
             << students[i].age
             << "\n";

    }
    return 0;
}