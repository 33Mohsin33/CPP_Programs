#include<iostream>
using namespace std;
bool pal(string str,int Start,int End)
{

    if(Start >= End)
    {
        return true;
    }
    if(str[Start]!=str[End])
    return false;
    
    return pal(str,Start+1,End-1);
    
}
int main()
{
	cout<<"Enter String : ";
	string str2;
	cin>>str2;
	cout<<pal(str2,0,str2.length()-1);
}
