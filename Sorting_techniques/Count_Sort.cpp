#include<iostream>
#include<vector>
using namespace std;
int Max(int Arr[],int size) 
{
	int temp;
	for(int i=0;i<size;i++)
	 if(temp<Arr[i])
	  temp=Arr[i];
	  return temp;	  
}
void count_sort(int Arr[],int size)
{
	int  max=(Max(Arr,size));
	int B[100]={0},C[100]={0};
	for(int i=0;i<size;i++)
	{
		B[Arr[i]]++;
	}
	for(int i=0;i<max;i++)
	{
		B[i]=B[i]+B[i-1];
	}
	for(int j=size;j>0;j--)
	{
		C[B[Arr[j]]]=Arr[j];
		B[Arr[j]]--;
	}
	for(int i=1;i<size;i++)
	{
		cout<<C[i]<<" ";
	}
}
int main()
{
	int Arr[100];
	
	cout<<"Enter Size of your Array: ";
	int n;
	cin>>n;
	cout<<"(Each Value must be less than 100)\n";
	for(int i=0;i<n;i++)
	{
		cin>>Arr[i];
	}
	count_sort(Arr,n);
	
}
