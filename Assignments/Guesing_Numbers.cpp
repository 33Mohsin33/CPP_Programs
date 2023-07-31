#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int score=0;
	for(int i=0;i<5;i++)
	{
	cout<<"\tTurn "<<i+1;	
	cout<<"\nGuess the Number Range(1-5): ";
	int num;
	cin>>num;
	int g_num=rand()%5;
	if(g_num==num)
	{
		cout<<"Correct Guess\n";
		score++;
	}
	else
	{
		cout<<"Worng Guess!\n";
		score--;
	}
	}
	cout<<"Total Score = "<<score;
}
