#include<iostream>
using namespace std;
int *big(int &x,int &y)
{
	if(x>y)
	return(&x);
	else
	return(&y);
}
int main()
{
	int a,b,*c;
	cout<<"enter the two no: ";
	cin>>a>>b;
	c=big(a,b);
	cout<<"the bigest value is: "<<*c<<endl;
	
}
