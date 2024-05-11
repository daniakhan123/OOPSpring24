
#include<iostream>

using namespace std;
class convert{
    protected:
    int val1 ;
    double val2;

    public:
    convert(int v1 , double v2): val1(v1) , val2(v2){}

    virtual void compute() = 0;

};

class l_to_g : public convert {

    public:
    l_to_g(int v1 , double v2) : convert(v1 , v2){}

    void compute() override{
        val2 = val1 * 0.2641;

        cout<<val1<< " liters = "<<val2<<" gallons"<<endl;
    }

}; 

class f_to_c : public convert {

    public:
    f_to_c(int v1 , int v2) : convert(v1 , v2){}

    void compute() override{
        val2 = (val1 - 32) * 5 / 9;
        cout<<val1<<" F = "<<val2<<" C "<<endl;

    }

};

int main(){
    
    l_to_g conversion1(4 , 0.0);
    f_to_c conversion2(70 , 0.0);

    convert * p = &conversion1;
    convert * p1 = &conversion2;

    p->compute();
    p1->compute();



    return 0;
}

