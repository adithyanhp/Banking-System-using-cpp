#include<iostream>
#include<stdlib.h>
using namespace std;
class bank
{
	char name[20],type[20];
	int id;
	long int b;
	public:
		void details()
		{
			b=0;
			cout<<"Bank Details"<<endl;
			cout<<"Enter the Name of the Depositor :";
			cin>>name;
			cout<<endl<<"Enter the type of Account :";
			cin>>type;
			cout<<endl<<"Enter the ID :";
			cin>>id;
		}
		
		void deposit()
		{
			float a;
			cout<<endl<<"Enter the Amount to be Deposited :";
			cin>>a;
			b+=a;
			cout<<endl<<"Current Balance : "<<b;
		}
		
		void withdraw()
		{
			float c;
			cout<<endl<<"Balance is : "<<b;
			cout<<endl<<"Enter the Amount to be withdraw :";
			cin>>c;
			b-=c;
			cout<<endl<<"Current Balance : "<<b;
		}
		
		void display()
		{
			cout<<"Name \t\t ID \t\t Type \t\t Amount \n";
			cout<<name<<"\t"<<id<<"\t\t"<<type<<"\t\t"<<b<<"\n";
		}
};

int main()
{
	int ch;
	char c;
	bank a;
	a.details();
	do
	{
		cout<<endl<<"Available Service";
		cout<<endl<<"1. Deposit to Account";
		cout<<endl<<"2. Withdraw from Account";
		cout<<endl<<"3. Check your Balance";
		cout<<endl<<"4. Exit";
		cout<<endl<<"Enter your Choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1: a.deposit();
				break;
			case 2: a.withdraw();
				break;
			case 3: a.display();
				break;
			case 4: exit(0);
				break;
		}
		cout<<endl<<"Do you want to Continue ? (Y/N) : ";
		cin>>c;
	}
	while(c=='y');
	return 0;
}
