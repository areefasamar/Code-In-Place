#include<iostream>
using namespace std;
bool isPowerofTwo (int n);
int main()
{
	int num;
	cout<<"Enter the Number:";
	cin>>num;
	if (isPowerofTwo(num))
	{
		cout<<"TRUE: It is a power of two."<<endl;
	}
	else
	{
		cout<<"FALSE: It is not a power of two."<<endl;
	}
	return 0;
	
}

bool isPowerofTwo (int n)
{
	if (n>0 && (n&(n-1))==0)
	{
		return true;
	}
	return false;
}

