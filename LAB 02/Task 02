// student name Dania Khan 
// Student Id 23k-0072
// description : library's Book inventory

#include <iostream>
#include <string>

using namespace std;

struct Library {
    string title;
    string author;
    string year;
    string genre;
};

void displayBook(const Library& lib) {
    cout <<"Title  :" << lib.title<<endl;
    cout <<"Author :" << lib.author<<endl;
    cout <<"Year   :" << lib.year<<endl;
    cout <<"Genre  :" << lib.genre<<endl;
}

void findBook(const Library lib[], int numBooks, const string& searchBook) {
    bool found = false;
    for (int i = 0; i<numBooks; i++) {
        if (lib[i].author == searchBook || lib[i].title == searchBook) {
            displayBook(lib[i]);
            found = true;
        }
    }
    if (!found) {
        cout << "Book not found."<<endl;
    }
}

int main() {
    int numBooks;
    cout << "Enter Number Of Books:";
    cin >> numBooks;
    cin.ignore();

    Library lib[numBooks];
    for (int i = 0; i < numBooks; i++) {
        cout << "Enter the Title of Book" <<i+1<< ": ";
        getline(cin, lib[i].title);
        cout << "Enter the Author of Book" <<i+1<< ": ";
        getline(cin, lib[i].author);
        cout << "Enter the Genre of Book" <<i+1<< ": ";
        getline(cin, lib[i].genre);
        cout << "Enter the Year of Book" <<i+1<< ": ";
        getline(cin, lib[i].year);
    }

        cout << "--------------------------" <<endl;
        cout << " Displaying Books Data! " <<endl;
        cout << "--------------------------" <<endl;
    for (int i = 0; i < numBooks; i++) {
        cout<<"\n Displaying Data Of Book Number"<<i+1<<endl;
        cout<<"-----------------------------------------"<<endl;
        displayBook(lib[i]);
    }

    string searchBook;
    cout << "Enter the Title or Author of the Book you want to find: ";
    getline( cin,searchBook);
    findBook( lib,numBooks, searchBook);

    return 0;
}
