#include<iostream>
using namespace std;
int main(){
    int a; //declaration of variable
    a=12; //initialisation

    cout<<"size of int "<<sizeof(a)<<endl;

    float b;
    cout<<"size of float "<<sizeof(b)<<endl;

    char c;
    cout<<"size of char "<<sizeof(c)<<endl;
    
    bool d;
    cout<<"size of boolean "<<sizeof(d)<<endl;

    short int si;
    long int li;
    cout<<"size of short "<<sizeof(si)<<endl;
    cout<<"size of long "<<sizeof(li)<<endl;
}