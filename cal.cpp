#include<iostream> 
using namespace std; 
class student 
{ 
	public:  	
	string name;	
	int regno,n1,n2;  	
	float avg; 	
	void input();
	void calculation();  

}; 
void student::input() 
{ 
	cout<<"\n\nENTER THE STUDENT NAME: ";  	
	cin>>name; 
	cout<<"\nENTER THE REGISTER NUMBER: ";  
		cin>>regno;  	
		cout<<"\nmarks in the first subject: ";  	
		cin>>n1;  	
		cout<<"\nmarks in the second subject: ";  	
		cin>>n2; 
} 
void student::calculation() 
{ 
	avg=(n1+n2)/2;
} 
int main() 
{ 
	int n;  	
	student s[20]; 
	cout<<"enter the no of students:";  	
	cin>>n; 
	for(int i=0;i<n;i++) 
	{ 
		s[i].input();  	
		s[i].calculation();
        }
}
