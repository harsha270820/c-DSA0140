#include<iostream>
using namespace std;
int main()
{
	int p,y,c,a;
	cout<<"enter amount = ";
	cin>>p;
	cout<<"\n enter years:";
	cin>>y;
	cout<<"\n1.senior citizen\n2.not senior ciitizen";
	cout<<"\n enter choice :";
	cin>>c;
	switch(c)
	{
		case 1:
			a=p*y*12/100;
			cout<<"\n interest for senior citizen is:"<<a;
			break;
		case 2:
			a=p*y*10/100;
			cout<<"\n interest for not a senior citizen is:"<<a;
			break;
        }
}