#include<iostream>
using namespace std;
int main()
{
	int num;
	
	cout<<"How many numbers? ";
	cin>>num;
	
	int *arr = new int[num];
	
	int sum=0;
	
	cout<<"Enter numbers: ";
	
	for ( int i=0 ; i<num ; i++)
	{
		cin>>*(arr+i);
	}
	
	for ( int i=0 ; i<num ; i++)
	{
		sum += *(arr+i);
	}
	
	cout<<"Sum= "<<sum<<endl;
	
	delete[] arr;
	
	return 0;
}