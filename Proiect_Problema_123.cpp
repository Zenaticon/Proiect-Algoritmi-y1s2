#include <iostream>
using namespace std;
int main(){
    int nr1,nr2;
    cout<<"nr1: "; cin>>nr1;
    cout<<"nr2: "; cin>>nr2;
    int i;
    while(nr2>0){
        nr2 -= nr1;
        i++;
    }
    if(nr2<0){
        cout<<"catul: "<<i-1<<endl;
        cout<<"restul: "<<nr2+nr1<<endl;
    }
    else{
        cout<<"catul: "<<i<<endl;
        cout<<"restul: "<<nr2<<endl;
    }
    return 0;
}