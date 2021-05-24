#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    cout<<"Write all the three numbers";
    cin>>a>>b>>c;


    if(a>b){
        if(a>c){
            cout<<"A is greatest\n";
        }
        else{
            cout<<"C is greatest"<<endl;
        }
    }
    else{
        if(b>c){
            cout<<"B is Greatest";
        }
        else{
            cout<<"C is greatest";
        }
    }
    return 0;
}