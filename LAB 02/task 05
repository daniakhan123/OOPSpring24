// student Name : Dania khan
// student id : 23k-0072
// description :  product management system for an online store

#include<iostream>
#include<string>

using namespace std;


typedef struct Product{
    string productId;
    string productName;
    float productPrice;
    int productQuantity;

}Product;
//FUNCTION #1
//making a function to add a new product 
void addProduct(Product info[] , int numNewProducts){
    for (int i = 0; i < numNewProducts ; i++)
    {
          cout<<"Enter the ID of New product"<< i+1<<": ";
          getline(cin, info[i].productId);
          cout<<"Enter the Name of New product"<< i+1<<": ";
          getline(cin, info[i].productName);
          cout<<"Enter the price of New product"<< i+1<<": ";
         cin>>info[i].productPrice;
          cout<<"Enter the Quantity of New product"<< i+1<<": ";
         cin>>info[i].productQuantity;
          cin.ignore();

    }
    
  
}
//FUNCTION # 2
// displaying the infromation of the product which is searched by the user 
void displayID(const Product info[],  const string& searchID ,  int numOfProduct){
    bool found = false;
    for ( int i = 0; i < numOfProduct; i++)
    {
        if(info[i].productId == searchID){
            cout<<"PRODUCT ID :"<<info[i].productId<<endl;
            cout<<"NAME :"<<info[i].productName<<endl;
            cout<<"PRICE :"<<info[i].productPrice<<endl;
            cout<<"QUANTITY :"<<info[i].productQuantity<<endl;
            found = true;
            break;
        }
    }

        if (!found) {
        cout << "Product not found." << endl;
    }
    
}
//FUNCTION # 3
// updating and printing the info of the specific product 
void UpdateProduct(Product info[] , string& updateid , int numOfProduct){
    for (int i = 0; i < numOfProduct; i++) {
        if (info[i].productId == updateid) {
            cout << "Enter new price for product: ";
            cin >> info[i].productPrice;
            cout << "Enter new quantity for product: ";
            cin >> info[i].productQuantity;
            cout << "Product information updated." << endl;
            return;
        }
    }
    cout << "Product not found." << endl;
}



int main(){
    int numOfProduct;
    cout<<" enter the number of products : ";
    cin>>numOfProduct;
    cin.ignore();

    Product info[numOfProduct];
//TAKING INPUT OF THE INFORMATION OF THE PRODUCT
    for (int i = 0; i < numOfProduct; i++)
    {        
        cout<<"Enter the ID of product "<< i+1 <<": ";
        getline(cin, info[i].productId);

        cout<<"Enter the Name of product "<< i+1 <<": ";
        getline(cin, info[i].productName);

        cout<<"Enter the Price of product "<< i+1 <<": ";
        cin>>info[i].productPrice;

        cout<<"Enter the Quantity of product "<< i+1 <<": ";
        cin >>info[i].productQuantity;

        cin.ignore();
    }
     
     int numNewProducts;

     cout<<"enter number of New Product : ";
     cin>>numNewProducts;
    addProduct(info , numNewProducts);// xalling the function to add a product

    // printing the new added product

     for (int i = 0; i < numOfProduct + numNewProducts; i++) {
        cout<<"Product " <<i+1 <<":\n";
        cout<<"ID: " << info[i].productId<<endl;
        cout<<"Name: " << info[i].productName<<endl;
        cout<<"Price: " << info[i].productPrice<<endl;
        cout<<"Quantity: " << info[i].productQuantity<< endl;
        cout<<endl;
    }

    string searchID;

    cout<<"Enter the product Id you wanted the deatils of : "<<endl;
    getline(cin , searchID);

    displayID(info , searchID , numOfProduct);


     string updateID;
    cout << "Enter the product ID to update information: ";
    getline(cin, updateID);
    UpdateProduct(info,  updateID ,numOfProduct);//calling function for the updated product



    return 0;
}//end main
