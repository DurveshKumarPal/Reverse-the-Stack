#include <iostream>
using namespace std;

int main() {
	// your code goes here
	for(int i=1;i<=5;i++)
	{
	    for(int j=1;j<5-1;j++)
	    {
	        cout<<" ";
	    }
	    for(int j=1;j<=i;j++)
	    {
	        cout<<"*";
	    }
	    cout<<endl;
	}
	
	return 0;
}
