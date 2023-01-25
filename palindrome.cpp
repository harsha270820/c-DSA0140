#include<iostream>
using namespace std;
int main(){
    int digit,rev=0,num,n;
    cout<<"enter a positive number";
    cin>>num;
    n=num;
    do{
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
    }while(num!=0);
    cout<<"the reverse of the number is"<<rev;
    if(n==rev){
        cout<<"\nit is a palindrome";
    }
    else{
        cout<<"\nit is not a palindrome";
    }
    return 0;

}