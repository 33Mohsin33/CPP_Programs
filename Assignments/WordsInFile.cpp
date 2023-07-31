#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream File;
	int count=0;
	char a;
	File.open("my_file.txt",ios::in);
	while(!File.eof())
	{
		File>>a;
		count++;
	}
	cout<<"No of Words = "<<count-1;
}
