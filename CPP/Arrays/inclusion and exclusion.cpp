#include<iostream>
#include<cstdlib>
using namespace std;

class sport
{
	public:
		int hockey[20],cricket[20],football[20];
		int n1,n2,n3,count,count1,count2,count3,intersection;
		void get_set1_info();
		void get_set2_info();
		void get_set3_info();
		
		void display(int arr[]);
		void intersection_2_teams();
		void intersection_3_teams();
		void union_2_teams();
		void union_3_teams();
		
};

void sport::get_set1_info()
{
	cout<<"\nEnter total no of players in Hockey team : ";
	cin>>n1;
	cout<<"\nEnter jersey no : \n";
	for(int i=0;i<n1;i++)
	{
		cin>>hockey[i];
		cout<<"\t";
		
	}
}

void sport::get_set2_info()
{
	cout<<"\nEnter total no of players in Cricket team : ";
	cin>>n2;
	cout<<"\nEnter jersey no :\n ";
	for(int i=0;i<n2;i++)
	{
		cin>>cricket[i];
		cout<<"\t";
		
	}
}

void sport::get_set3_info()
{
	cout<<"\nEnter total no of players in Football team : ";
	cin>>n3;
	cout<<"\nEnter jersey no : \n";
	for(int i=0;i<n3;i++)
	{
		cin>>football[i];
		cout<<"\t";
		
	}
}


void sport::display(int arr[])
{
	
	for(int i=0;i<n1;i++)
	{
		cout<<arr[i]<<"\t";
		
	}
}



void sport::intersection_2_teams()
{
	count=0;
	if(n1>n2)
	{
		for(int i=0;i<n1;i++)
		{
			for(int j=0;j<n2;j++)
			{
				if(hockey[i]==cricket[j])
				{
					count++;
					
				}
			}
		}
	}
	else
	{
		for(int i=0;i<n2;i++)
		{
			for(int j=0;j<n1;j++)
			{
				if(cricket[i]==hockey[j])
				{
					count++;
					
				}
			}
		}
		
	}
	cout<<"\n";
	cout<<"\nIntersection : "<<count<<endl;
	
}

void sport::union_2_teams()
{
	int total = n1+n2-count;
	cout<<"\nUnion : "<<total<<endl;
	
}
void sport::intersection_3_teams()
{
	count1=0;
	// players who can play both hockey and cricket
	if(n1>n2)
	{
		for(int i=0;i<n1;i++)
		{
			for(int j=0;j<n2;j++)
			{
				if(hockey[i]==cricket[j])
				{
					count1++;
					
				}
			}
		}
	}
	else
	{
		for(int i=0;i<n2;i++)
		{
			for(int j=0;j<n1;j++)
			{
				if(cricket[i]==hockey[j])
				{
					count1++;
					
				}
			}
		}
		
	}
	
	// players who can play both cricket and football
	count2=0;
	if(n2>n3)
	{
		for(int i=0;i<n2;i++)
		{
			for(int j=0;j<n3;j++)
			{
				if(cricket[i]==football[j])
				{
					count2++;
					
				}
			}
		}
	}
	else
	{
		for(int i=0;i<n3;i++)
		{
			for(int j=0;j<n2;j++)
			{
				if(football[i]==cricket[j])
				{
					count2++;
					
				}
			}
		}
		
	}
	
	// players who can play both hockey and football
	count3=0;
	if(n1>n3)
	{
		for(int i=0;i<n1;i++)
		{
			for(int j=0;j<n3;j++)
			{
				if(hockey[i]==football[j])
				{
					count3++;
					
				}
			}
		}
	}
	else
	{
		for(int i=0;i<n3;i++)
		{
			for(int j=0;j<n1;j++)
			{
				if(football[i]==hockey[j])
				{
					count3++;
					
				}
			}
		}
		
	}
	
	intersection  = abs(count1-count2-count3);
	cout<<"\nPlayer who  play all three sports  : "<<intersection<<endl;
}

void sport::union_3_teams()
{
	
	cout<<"\n\n";
	int total = (n1+n2+n3)-count1-count2-count3+intersection;
	cout<<"\nUnion for 3 teams : "<<total<<endl;
	
}
int main()
{
	sport s;
	s.get_set1_info();
	s.get_set2_info();
	s.get_set3_info();
	cout<<"\n\n_________________ Hockey Team ______________\n\n";
	s.display(s.hockey);
	cout<<"\n\n_________________ Cricket Team ______________\n\n";
	s.display(s.cricket);
	cout<<"\n\n_________________ Football Team ______________\n\n";
	s.display(s.football);
	//s.intersection_2_teams();
	//s.union_2_teams();
	s.intersection_3_teams();
	s.union_3_teams();
	
	return 0;
}
