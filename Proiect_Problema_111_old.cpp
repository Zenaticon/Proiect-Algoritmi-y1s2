#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class complex{
    public:
        double a,b;
        //int i=1;
        void read_nr(int x);
        double operations();
}nr1,nr2,operation;

double complex::operations(){
    string op;
    double z;
    cout<<"Choose the operation (+,-,*,/): ";
    cin>>op;
    if(op == "+"){
        a = nr1.a + nr2.a;
        b = nr1.b + nr2.b;
        //cout<<"Real part: "<<a<<endl;
        //cout<<"Imaginary part: "<<b<<endl;
        if(b<0)
            cout<<"z = "<<a<<b<<"i"<<endl;
        else
            cout<<"z = "<<a<<"+"<<b<<"i"<<endl;
        //z = a+b*i;
        //cout<<"z: ";
        // return z;
    }else if(op == "-"){
        a = nr1.a - nr2.a;
        b = nr1.b - nr2.b;
        if(b<0)
            cout<<"z = "<<a<<b<<"i"<<endl;
        else
            cout<<"z = "<<a<<"+"<<b<<"i"<<endl;
    }else if(op == "*"){
        a = (nr1.a * nr2.a)-(nr1.b * nr2.b);
        b = (nr1.a * nr2.b)+(nr1.b * nr2.a);
        if(b<0)
            cout<<"z = "<<a<<b<<"i"<<endl;
        else
            cout<<"z = "<<a<<"+"<<b<<"i"<<endl;
    }else if(op == "/"){
        a = (nr1.a*nr2.a+nr1.b*nr2.b)/(pow(nr2.a,2)+pow(nr2.b,2));
        b = (-nr1.a*nr2.b+nr2.a*nr1.b)/(pow(nr2.a,2)+pow(nr2.b,2));
        if(b<0)
            cout<<"z = "<<a<<b<<"i"<<endl;
        else
            cout<<"z = "<<a<<"+"<<b<<"i"<<endl;
    }else{
        cout<<"Operation incorrect. Please try again!"<<endl;
        operations();
    }
    return 0;
}

void complex::read_nr(int x){
    cout<<"z"<<x<<" (a): "; cin>>a;
    cout<<"z"<<x<<" (b): "; cin>>b;
    //cout<<"z"<<x<<" (i): "; cin>>i;
}

int app(){
    nr1.read_nr(1);
    nr2.read_nr(2);
    operation.operations();
    app();
}

int main(){
    app();
    return 0;
}