#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,sum=0,temp,r;
    cout<<"enter the number";
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    cout<<sum;
    if(temp==sum){
        cout<<"it is a armstrong";
    }
    else {
        cout<<"it is not a armstrong number";
    }

}

