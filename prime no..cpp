#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=2;i<n;i++)
	{
		if(!(n%i)==0)
		{
			cout<<"The no is prime";
			break;
		}
		else
		cout<<"number is not a prime";
	}
}
