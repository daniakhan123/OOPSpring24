// dania khan
// 23k-0072

#include <iostream>
#include <string>
using namespace std;

class Book{
    string name;
    string author;
    int ISBN;
    int total_page;
    int page_read;

public:
    Book() : total_page(1000), page_read(0) {
        name = "";
        author = "";
        ISBN = 0;
    }

    void setname(string name){
        this->name = name;    
    }

    void setauthor(string author){
        this->author = author;    
    }

    void setISBN(int ISBN){
        this->ISBN = ISBN;    
    }

    void settotalpage(int totalpage){
        total_page = totalpage;    
    }

    void setpage_read(int page_read){
        this->page_read = page_read;    
    }

    string getname(){
        return name;
    }

    string getauthor(){
        return author;
    }
    
    int getISBN(){
        return ISBN ;    
    }

    int gettotal_page(){
        return total_page;
    }

    int getpage_read(){
        return page_read;    
    }

    void reading() {
        int no;
        cout << endl << "Have you read the book: " << name << " (Enter 1 if you have): ";
        cin >> no;
        if(no == 1){
            cout << "Please enter the number of pages you have read so far: ";
            cin >> no;
            page_read += no;
            cout << "You have read a total of " << page_read << " pages out of " << total_page << ".";
            if (page_read == total_page)
                cout << " BOOK COMPLETELY READ" << endl;
        }   
    }

    void showbookinfo(){
        cout << "\n\nName: " << name << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Total pages: " << total_page << endl;
        cout << "Pages read: " << page_read << endl;
    }
};

int main() {
    Book b1;
    b1.showbookinfo();
    b1.setname("The Silent Patient");
    b1.setauthor("Alex Michaelides");
    b1.setISBN(12345);
    b1.reading();
    b1.showbookinfo();

    return 0;
}
