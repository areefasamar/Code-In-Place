#include<iostream>
using namespace std;
void swap (int &a, int &b);
int main()
{
	int num1, num2;
	
	cout<<"Enter two numbers: ";
	cin>>num1>>num2;
	
	swap(num1, num2);
	
		cout<<"After swap: "<<num1<<" "<<num2<<endl;
	
	return 0;
}

void swap (int &a, int &b)
{
	int c;
	
	c=a;
	a=b;
	b=c;

}