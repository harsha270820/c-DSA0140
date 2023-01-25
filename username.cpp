#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string a,b;
    cout<<"enter any username";
    cin>>a;
    cout<<"re- enter username";
    cin>>b;
    if(a==b){
        cout<<"username is correct";
    }
    else{
        cout<<"invalid username";
    }
}