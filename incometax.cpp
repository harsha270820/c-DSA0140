#include<iostream>
using namespace std;
int main()
{
	int income,tax;
	cout<<"enter the income=";
	cin>>income;
	if(income<=60000)
	cout<<"no tax";
	if(income>60000&&income<=150000)
	tax=income*0.05;
	if(income>150000&&income<=500000)
	tax=income*0.1;
	if(income>500000)
	tax=income*0.15;
	cout<<"the tax for the income is:"<<tax;
	return 0;
	
	
}