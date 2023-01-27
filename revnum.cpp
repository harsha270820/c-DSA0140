#include<iostream>
using namespace std;
int reversenum(int n)
{
	int rev,digit;
	while(n!=0)
	{
		digit=n%10;
		rev=rev*10+digit;
		n=n/10;
	}
	return rev;
}
int main()
{
	int num,i;
	cout<<"enter the number to reverse=";
	cin>>num;
	i=reversenum(num);
	cout<<"the reversed number is:"<<i;
}