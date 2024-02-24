/*
name :Dania khan
ID 23k-0072
*/
#include <iostream>
using namespace std;
class Office
{
private:
    string location;
    int seatingCapacity;
    string furniture[3];

public:
    Office()
    {
        string location = "";
        int seatingCapacity = 0;
        string furniture[3] = {"", "", ""};
    }
    Office(string loc, int Capacity, string furn[3]) : location(loc), seatingCapacity(Capacity)
    {
        for (int i = 0; i < 3; i++)
        {
            furniture[i] = furn[i];
        }
    }

    void display()
    {

        cout << "LOCATION :" << location << endl;
        cout << "SEATING CAPACITY :" << seatingCapacity << endl;
        cout << "FURNITURE"<<endl;
        for (int i = 0; i < 3; i++)
        {
            cout <<"\n"<<i+1<<" : " << furniture[i];
        }
    }
};

int main()
{

   

    string loc;
    int Capacity;
    string furn[3];

    cout << "ENTER LOCATION : ";
    getline(cin, loc);
    cout << "ENTER SEATING CAPACITY ";
    cin >> Capacity;
    cin.ignore();
    for (int i = 0; i < 3; i++)
    {
        cout << "ENTER FURNITURE"  << i + 1 << " : ";
        getline(cin, furn[i]);
    }
     Office myoffice(loc , Capacity , furn);

    myoffice.display();

    return 0;
}
