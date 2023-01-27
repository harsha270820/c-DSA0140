#include<iostream>
using namespace std; 
class employee 
{ 
	public: 
	string Empname, Mailid, Address,Empid,Mobileno;  	
	double BP,GP,NP,DA,HRA,PF,CF; 
 	void input() 
	{ 
		cout<<"\n\nEnter Name of the Employee : ";
		cin>>Empname; 
	    cout<<"\nEnter Address of the Employee : "; 
		cin>>Address;
		cout<<"\nEnter ID of the Employee : "; 
		cin>>Empid;
		cout<<"\nEnter Mobile Number : ";
		cin>>Mobileno; 
		cout<<"\nEnter E-Mail ID of the Employee : "; 
		cin>>Mailid;
	} 
	void display() 
	{ 
		cout<<"\nNAME => "<<Empname;
		cout<<"\nADDRESS => "<<Address;
		cout<<"\nEMPLOYEE ID => "<<Empid;
		cout<<"\nMOBILE NUMBER => "<<Mobileno;
	    cout<<"\nMAIL ID => "<<Mailid<<"\n"; 
	} 
	void calculation() 
	{ 
		DA=BP*0.97;
		HRA=BP*0.10;
		PF=BP*0.12;
		CF=BP*0.01;
		GP=BP+DA+HRA+PF;
		NP=GP-PF-CF;	
	} 
	void basicpaydisplay() 
	{ 
		cout<<"\nBASIC PAY => "<<BP;
		cout<<"\nDEARNESS ALLOWANCE => "<<DA;
		cout<<"\nHOUSE RENT ALLOWENCE => "<<HRA;
		cout<<"\nPROVIDENT FUND => "<<PF;
		cout<<"\nCLUB FUND => "<<CF;  		
        cout<<"\nGROSS PAY => "<<GP;  		
        cout<<"\nNET PAY => "<<NP; 
	} 
}; 
class programmer: public employee 
{ 
	public: 
    double bp1; 	 
    void proginput() 
{ 
	cout<<"\nENTER THE BASIC PAY OF THE PROGRAMMER =>";
	cin>>BP;
    cout<<"\n=====================\nPROGRAMMER	PAYMENTSLIP\n=====================\n";
	} 	
}; 
class assistantprof: public employee 
{ 
	public: 
	void assprofinput() 
	{ 
		cout<<"\nENTER THE BASIC PAY OF THE ASSISTANT PROFESSOR =>"; 
		cin>>BP;
		cout<<"\n================================\nASSISTANT PROFESSOR PAYMENT SLIP\n================================\n";
	} 	
}; 
class assosciateprof:public employee 
{ 
	public: 
	void assoprofinput() 
	{ 
		cout<<"\nENTER THE BASIC PAY OF THE ASSOCIATE PROFESSOR =>"; 
		cin>>BP;
		cout<<"\n===========================\nASSOCIATE PROFESSOR PAYMENT SLIP\n====================\n";
	} 	
};
class professor:public employee 
{ 
	public: 
	void profinput() 
	{ 
		cout<<"\nENTER THE BASIC PAY OF THE PROFESSOR =>";
		cin>>BP;
		cout<<"\n======================\nPROFESSOR	PAYMENT SLIP\n======================\n";
	} 	
};
int main() 
{ 
	programmer p1;
	p1.input();
	p1.display();  
	p1.proginput();
	p1.calculation();
	p1.basicpaydisplay();  	
	assistantprof a1;
	a1.input();
	a1.display();
	a1.assprofinput();
	a1.calculation();
	a1.basicpaydisplay();
	assosciateprof a2;
	a2.input();
	a2.display();
	a2.assoprofinput();
	a2.calculation();
	a2.basicpaydisplay();
	professor p2;
    p2.input(); 
	p2.display();  
	p2.profinput();
	p2.calculation();
    p2.basicpaydisplay();  
}