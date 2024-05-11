#include<iostream>

using namespace std;
class Account{
    protected:
    int accountnum;
    double balance;

    public:

    Account(int num ,double bal) : accountnum(num) , balance(bal){}

    virtual double deposit(double amount) = 0;
    virtual double withdraw(double amount) = 0;
    virtual double calculateInterest() = 0;
    int getaccountnum(){
        return accountnum;
    }
    int getbalance(){
        return balance;
    }

};

class savingAccount : public Account{
    double interestRate;

    public:

    savingAccount(int num ,double bal , double rate) : Account(num , bal) , interestRate(rate){}

    double deposit(double amount) override{
        balance = amount + balance;
        return balance;
    }

    double withdraw(double amount) override{
        if(balance - amount > 0){
            balance = balance - amount;
            cout<<"$ "<< balance<<" has been withdrawn "<<endl;
            return amount;
        }
        else{
            cout<<"Insufficient balance"<<endl;
        }
    }

    double calculateInterest() override{
        return balance * interestRate / 100;
    }
};

class CurrentAccount : public Account{
  double overdraftlimit ;

  public:

      CurrentAccount(int num ,double bal , double limit) : Account(num , bal) , overdraftlimit(limit) {}


    double deposit(double amount) override{
            balance = balance + amount;
            return balance;
    }

    double withdraw(double amount) override{
            if (balance - amount >= -overdraftlimit) {
            balance -= amount;
            cout<<"$ "<< balance<<" has been withdrawn "<<endl;            
            return amount;
    }
            cout << "Exceeds overdraft limit" << endl;
        return 0;
    }
    double calculateInterest() override{
        cout<<"Current account has no interest"<<endl;
        return 0;
    }

};

int main(){

    savingAccount save(1972 , 1000,4);
    CurrentAccount current(2197 , 5000 , 1000);


    cout<<"--------------------Saving Account--------------------"<<endl;

    cout<<"Deposited Balance : "<<save.deposit(300)<<endl;
    cout<<"Withdrawn Money : "<<save.withdraw(45)<<endl;
    cout<<"Interest  : " <<save.calculateInterest()<<endl;


    cout<<"--------------------Current Account --------------------"<<endl;
    cout<<"Deposited Balance : "<<current.deposit(3200)<<endl;
    cout<<"Withdrawn Money : "<< current.withdraw(78)<<endl;

   

    return 0;
}
