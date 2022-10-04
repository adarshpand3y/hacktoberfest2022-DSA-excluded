//Deatils using Array of objects
#include<iostream>

using namespace std;

class student
{
	public:
	
	char name[50];
	int rno;
	int prn;
	
	
		
	void read()
	{
		cout<<"\nEnter Student name:";
	    cin>>name;
	
	    cout<<"Enter Student Roll_No:";
	    cin>>rno;
	
	    cout<<"Enter Student PRN:";
	    cin>>prn;
	}
	
	void display()
	{
		cout<<"\nName of student:"<<name<<endl;
	    cout<<"Roll No:"<<rno<<endl;
	    cout<<"PRN:"<<prn<<endl;
	}
	
	
	
	
};

int main()
{
	student s[3];
	int i,n;
	
	cout<<"\nEnter number of details you want:";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
	    s[i].read();
	}
	
	cout<<"\nDetails of student is as follows:"<<endl;
	
	for(i=0;i<n;i++)
	{
		s[i].display();
	}
	
	
	
	
	return 0;
}
