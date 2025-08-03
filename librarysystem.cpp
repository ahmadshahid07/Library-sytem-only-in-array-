#include <iostream>
using namespace std;

int main() {
    string books[100];
    int count = 0, choice;
    string name;

    do {
        cout << "\n1. Add Book\n2. Show Books\n3. Exit\nChoose: ";
        cin >> choice;
        cin.ignore();
        if (choice == 1) {
            cout << "Enter book name: ";
            getline(cin, books[count++]);
        } else if (choice == 2) {
            cout << "Books List:\n";
            for (int i = 0; i < count; i++)
                cout << i+1 << ". " << books[i] << endl;
        }
    } while (choice != 3);

    return 0;
}
