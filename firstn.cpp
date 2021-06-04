#include<iostream>
using namespace std;
void swap(int *a,int*b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int a=2;
	int b=6;
	swap(&a,&b);
	cout<<"the swap value is:"<<a<<" "<<b;
return 0;
}

    
