#include <iostream>
#include <string>
#include <math.h>

#include <iomanip>
#include <sstream>

using namespace std;

string op;
double x,y;

struct complex{
    public:
        double a,b;
        void read_nr(int x);
}nr1,nr2;

string afisare(){
    stringstream stream_x,stream_y;
    stream_x << fixed << setprecision(2) << x;
    string sx = stream_x.str();
    stream_y << fixed << setprecision(2) << y;
    string sy = stream_y.str();
    if(y<0)
        return sx+sy+"i";
    else
        return sx+"+"+sy+"i";
}

string addition(){
    x = nr1.a + nr2.a;
    y = nr1.b + nr2.b;
    return afisare();
}

string substract(){
    x = nr1.a - nr2.a;
    y = nr1.b - nr2.b;
    return afisare();
}

string multiply(){
    x = (nr1.a * nr2.a)-(nr1.b * nr2.b);
    y = (nr1.a * nr2.b)+(nr1.b * nr2.a);
    return afisare();
}

string divide(){
    x = (nr1.a*nr2.a+nr1.b*nr2.b)/(pow(nr2.a,2)+pow(nr2.b,2));
    y = (-nr1.a*nr2.b+nr2.a*nr1.b)/(pow(nr2.a,2)+pow(nr2.b,2));
    return afisare();
}

string operations(){
    if(op == "+"){
        return addition();    
    }else if(op == "-"){
        return substract();
    }else if(op == "*"){
        return multiply();
    }else if(op == "/"){
        return divide();
    }
}

void complex::read_nr(int x){
    cout<<"z"<<x<<" (a): "; cin>>a;
    cout<<"z"<<x<<" (b): "; cin>>b;
}

void read_op(){
    cout<<"Choose the operation (+,-,*,/): ";
    cin>>op;
    if(!((op == "+")||(op == "-")||(op == "*")||(op == "/"))){
        cout<<"The operation is incorrect. Please try again!"<<endl;
        read_op();
    }
}

int main(){
    nr1.read_nr(1);
    nr2.read_nr(2);
    read_op();
    cout<<"z = "<<operations();
    return 0;
}