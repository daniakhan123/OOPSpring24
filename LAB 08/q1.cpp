#include <iostream>
#include <string>
using namespace std;

class Book {
protected:
    string title;
    string author;
    string publisher;

public:
    Book(const string& t, const string& a, const string& p)
        : title(t), author(a), publisher(p) {}

    void display() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publisher: " << publisher << endl;
    }
};

class FictionBook : public Book {
private:
    string genre;
    string protagonist;

public:
    FictionBook(const string& t, const string& a, const string& p, const string& g, const string& pro)
        : Book(t, a, p), genre(g), protagonist(pro) {}

    void display() const {
        Book::display();
        cout << "Genre: " << genre << endl;
        cout << "Protagonist: " << protagonist << endl;
    }
};

int main() {
    FictionBook fiction("The Great Gatsby", "Scott Fitzgerald", "Scribner", "Novel", "Jay Gatsby");
    fiction.display();
    return 0;
}
