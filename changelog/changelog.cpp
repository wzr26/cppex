#include <iostream>
#include <vector>
using namespace std;

struct NewLevel {
    string name;
    string link;
    int placement;
    string below;
    string above;
};
int main() {

    int n;

    cout << "Nhập số level: ";
    cin >> n;
    cin.ignore();

    string date;

    cout << "Nhập ngày (dd/mm/yyyy): ";
    cin >> date;
    cin.ignore();

    vector<NewLevel> level(n);
     for(int i = 0; i < n; i++) {

        cout << "\nLevel " << i + 1 << "\n";

        cout << "Tên level: ";
        getline(cin, level[i].name);

        cout << "Link level: ";
        getline(cin, level[i].link);

        cout << "Vị trí level: ";
        cin >> level[i].placement;

        cin.ignore();

        cout << "Dưới level (Placement ~ = ko): ";
        getline(cin, level[i].below);
        if(level[i].below != "ko"){
        cout << "Trên level: ";
        getline(cin, level[i].above);
}
    }
    cout << "**Changelog Classic List " << date << "**\n\n"
    << "***Level mới***\n";
    for(int i = 0; i < n; i++) {
if(level[i].below != "ko"){
        cout << i + 1 << ". "
             "**["<< level[i].name << "]("
             << level[i].link << ")** được đặt ở vị trí **#"
             << level[i].placement << "**, dưới "
             << level[i].below << " và trên "
             << level[i].above
             << ".\n";
    }
    else{       
        cout << i + 1 << ". "
             "**["<< level[i].name << "]("
             << level[i].link << ")** được đặt ở vị trí **#~"
             << level[i].placement
             << "**.\n";
    }
}
    return 0;
}
