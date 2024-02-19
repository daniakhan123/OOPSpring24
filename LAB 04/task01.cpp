/*
name : Dania Khan
id : 23k-0072
*/
#include <iostream>
#include <string>
using namespace std;
class Book{
	string name;
	string author;
	string ISBN;
	int total_page;
	int page_read;
	public:
		Book() {
		name="Harry Potter";
	 	author="J.K.Rowling";
	 	ISBN="1";
        total_page=1000;
	    page_read=500;
		}
		
		
	Book(string Name,string Author,string ISBN,int total_pg,int page_read) {
		name=Name;
		author=Author;
 		ISBN=ISBN;
	 	total_page=total_page;
 		page_read=page_read;
	}
	
	void reading() {
		int no;
		cout<<endl<<"Have u read the book :"<<name<<" today(Enter 1 if u have )";
		cin>>no;
		if(no==1){
		cout<<"Please enter no of pages u read:";
		cin>>no;
		page_read+=no;
		cout<<"You have read total of "<<page_read<<" pages out of "<<total_page;
		if (page_read==total_page) cout<<"BOOK COMPLETELY READ"<<endl;
	}
		
		
	}
	void display (){
		cout<<"\n\nName : "<<name<<endl;
		cout<<"Author : "<<author<<endl;
		cout<<"ISBN : "<<ISBN<<endl;
		cout<<"Total pages: "<<total_page<<endl;
		cout<<"Pages read: "<<page_read<<endl;
	}
	
	
};
int main() {
	Book b1;
	b1.display();
	b1.reading();
	Book b2("The dark day","collen hoover",2,200,10);
	b2.display();
	b2.reading();
	
	return 0;
	
	
}
