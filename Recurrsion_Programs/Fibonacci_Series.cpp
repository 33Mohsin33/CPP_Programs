#include<iostream>
using namespace std;
int Fibonacci(int n)
{
	if(n==1||n==0)
	return n;
	else
	{
		return Fibonacci(n-1)+Fibonacci(n-2);
	}
}
int main()
{
	cout<<"Enter Number: ";
	int n;
	cin>>n;
	cout<<"Fibonacci: "<<Fibonacci(n);
}
