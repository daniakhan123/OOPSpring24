
/*
name Dania Khan
id 23k-0072
*/

#include<iostream>
using namespace std;

class Smartphone{
    string Brand;
    string model;
    int display_resolution;
    int RAM;
    int ROM;
    int Storage;
	bool isConnectedToWifi;
    
    public:
        // making Setter functions
        void setBrand(const string& brand){
            Brand = brand;
        }
        
        void setModel(const string& model){
            this->model = model;
        }
        
        void setDisplayResolution(int resolution){
            display_resolution = resolution;
        }
        
        void setRAM(int ram){
            RAM = ram;
        }
        
        void setROM(int rom){
            ROM = rom;
        }
    
        void setStorage(int storage){
            Storage = storage;
        }
        
        // making Getter functions
        
        string getBrand(){
            return Brand;
        }
        
        string getModel(){
            return model;
        }
        
        int getDisplayResolution(){
            return display_resolution;
        }
        
        int getRAM(){
            return RAM;
        }
        
        int getROM(){
            return ROM;
        }
        
        int getStorage(){
            return Storage;
        }
        
        // function to make a call
        
        void makeCall(const string& name, double number){
            cout << "Calling " << name << " at " << number << endl;
        }
        
        //function to send a message
        void sendMsg(const string& name, double number){
            cout << "Sending message to " << name << " at " << number << endl;
        }
        
        // function to connect wifi
     void connectWifi(int fun){
    if(fun == 1){
        cout << "Connecting to Wi-Fi" << endl;
        isConnectedToWifi = true;
        string web;
        cin.ignore();
        cout << "\nEnter the name of website: ";
        getline(cin, web); 
        browseInternet(web);
    }
    else{
        cout << "Not connecting to Wi-Fi" << endl;
        isConnectedToWifi = false;
    }
}
        // function for browsing
	void browseInternet(const string& web){
    if (isConnectedToWifi) {
        cout << "Browsing " << web << endl;
    } else {
        cout << "Cannot browse the internet. Please connect to Wi-Fi first." << endl;
    }
}
};

int main(){
    Smartphone mob;
    //taking inputs
    
    cout << "Enter the Brand: ";
    string brand;
    getline(cin, brand);
    mob.setBrand(brand);
    
    cout << "\nEnter the Model: ";
    string model;
    getline(cin, model);
    mob.setModel(model);
    
    cout << "\nEnter the Display Resolution: ";
    int resolution;
    cin >> resolution;
    mob.setDisplayResolution(resolution);
    
    cout << "\nEnter the ROM: ";
    int rom;
    cin >> rom;
    mob.setROM(rom);
    
    cout << "\nEnter the RAM: ";
    int ram;
    cin >> ram;
    mob.setRAM(ram);
    
    cout << "\nEnter the Storage: ";
    int storage;
    cin >> storage;
    mob.setStorage(storage);
    
    string name;
    double number;
    cout << "Enter the name of the person you want to call: ";
    getline(cin, name);
    getline(cin, name);
    cout << "\nEnter the phone number: ";
    cin >> number;
    
    int fun;
    cout << "\nConnect to Wifi? (1 for YES and 0 for NO): ";
    cin >> fun;
    
    //calling functions
    mob.makeCall(name, number);
    mob.sendMsg(name, number);
    mob.connectWifi(fun);
    
    
    return 0;
}//end main
