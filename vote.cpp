#include<iostream>
using namespace std;
int main()
{
int age;
cout<<"enter the age of a person:";
cin>>age;
if(age>=18)
{
cout<<"person is eligible to vote";
}
else{
cout<<"person is not eligible to vote, after"<<18-age<<"years he/she eligible voting";
}
return 0;
}