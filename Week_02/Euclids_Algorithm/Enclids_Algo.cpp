#include<iostream>

using namespace std;

int gcd(int m,int n)
{
	int r;
	while(n!=0)
	{
		r = m%n;
		m = n;
		n = r;
	}
	return m;
}

int main()
{
	int a;
	int b;
	
	cout<<"Enter the first number :- ";
	cin>>a;
	
	cout<<endl;
	
	cout<<"Enter the second number :- ";
	cin>>b;
	
	cout<<"GCD of "<<a<<" and "<<b<<" is :-  ";
	cout<<gcd(a,b);
	
	
	return 0;
}
