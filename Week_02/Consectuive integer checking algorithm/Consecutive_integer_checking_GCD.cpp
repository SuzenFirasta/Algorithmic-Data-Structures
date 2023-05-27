#include<iostream>

using namespace std;

int gcd_cica(int m , int n)
{
	
	int i;
	for(i = min(m,n) ; i>=1;  i--)
	{
		if(m%i== 0 && n%i==0)
		{
			return i;
		}
	}
	return 1;
	
}

int main()
{
	int m;
	int n;
	
	cout<<"Enter the first number :- ";
	cin>>m;
	
	cout<<endl;
	
	cout<<"Enter the second number :- ";
	cin>>n;
	
	cout<<endl;
	
	cout<<"GCD through Consecutive Interger Checking Algorithm of "<<m<<" and "<<n<<" is :- ";
	cout<<gcd_cica(m,n);
	
	return 0;
}
