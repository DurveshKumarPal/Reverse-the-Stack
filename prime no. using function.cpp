#include<iostream>
using namespace std;
fun_prime(int x,int y)
{
	for(int i=x;i<y;i++)
	{
		if(!(n%i)==0)
		{
			cout<<"the is prime";
			break;
		}
		else
		cout<<"the is not prime";
	}
}
int main()
{
	int a,b;
	cin>>a>>b;
	fun_prime(a,b);
	
	
}
