#include <iostream>
using namespace std;
void Bubble_sort(int Arr[],int size)
{
	for(int i=0;i<size;i++)
	 for(int j=0;j<size;j++)
	  {
	  	if(Arr[j]>Arr[j+1])
	  	 swap(Arr[j],Arr[j+1]);
	  }
	for(int i=0;i<size;i++)
	{
		cout<<Arr[i]<<" ";
	}
}
int main() 
{

	int Arr[100];
	
	cout<<"Enter Size of your Array: ";
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>Arr[i];
	}
	Bubble_sort(Arr,n);
}

