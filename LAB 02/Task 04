//student ID : 23k0072 
// name :Dania khan
// descp:using nested structure for the registration of student



#include <iostream>
#include <string>

using namespace std;

//defining struct register

typedef struct Register{
	string courseId;
	string courseName;
	
}Register;

// defining struct student 
typedef struct student{
	struct Register registration;
	string studentId;
	string firstName;
	string lastName;
	long long int cellNum;
	string email;
		
}student;



int main(){
	
	student std[2];
	//taking information of student as an input 
	for(int i = 0 ; i<2 ; i++){
		cout<<"Enter course ID of student "<<i+1 <<endl;
		getline(cin, std[i].registration.courseId);
		cout<<"Enter course Name of student "<<i+1<< endl;
		getline(cin, std[i].registration.courseName);
		cout<<"Enter Student ID of student "<<i+1 <<endl;
		getline(cin, std[i].studentId);
		cout<<"Enter  First Name of student "<<i+1<< endl;
		getline(cin, std[i].firstName);
		cout<<"Enter Last Name of student "<<i+1<< endl;
		getline(cin, std[i].lastName);
		cout<<"Enter email of student "<<i+1<< endl;
		getline(cin, std[i].email);
		cout<<"Enter Cell Number of student "<<i+1<< endl;
		cin>>std[i].cellNum;
		cin.ignore(); 


}

	for(int i = 0 ; i<2 ; i++){
		//showing the output 
		cout<<"Course ID of student "<<i+1<<" : " <<std[i].registration.courseId <<endl;
		cout<<"Course Name of student "<<i+1<<" : "<<std[i].registration.courseName<< endl;
		cout<<"Student ID of student "<<i+1<<" : "<<std[i].studentId<< endl;
		cout<<"First Name of student "<<i+1<<" : "<<std[i].firstName<< endl; 
		cout<<"Last Name of student "<<i+1<<" : "<<std[i].lastName<< endl; 
		cout<<"Enter email of student "<<i+1<<" : "<<std[i].email<< endl; 
		cout<<"Cell Number of student "<<i+1<<" : "<<std[i].cellNum<< endl;
	}
	
	
	return 0;
}
