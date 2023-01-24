#include<iostream>
using namespace std;
int main()
{
    int n1=0,n2=1,n3,num;
    cout<<"enter the number";
    cin>>num;
    for(int i=2;i<num;i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        cout<<"n1="<<n1<<"n2="<<n2;
    }
    return 0;
}