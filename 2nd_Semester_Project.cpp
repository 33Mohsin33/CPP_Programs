#include<iostream>
#include<fstream>
#include<ctime>
#include<conio.h>
#include<stack>
using namespace std;



	void gamec()
{

system ("CLS");
  

system ("COLOR B");
  
 
cout << "\n\n";
  
cout <<
    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
  
cout << "\t\t\t  ||             Game Choice            ||\n";
  
cout <<
    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
  
 
cout <<
    "\n\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
cout << "\t\t\t\t||1.Guess Number             ||";
  
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
 
cout << "\t\t\t\t||2.Push Pop                 ||";
  cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";

}




void pushpop()

{
	system ("CLS");
  

system ("COLOR B");
  
 
cout << "\n\n";
  
cout <<
    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
  
cout << "\t\t\t  ||             Push & Pop             ||\n";
  
cout <<
    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
  
 
cout <<
    "\n\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
cout << "\t\t\t\t||1.Push                     ||";
  
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
 
cout << "\t\t\t\t||2.Pop                      ||";
  cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";

cout << "\t\t\t\t||0.Close                     ||";
  
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  

cout << "\n\t\t \t<< Enter : \n\t\t\t\t";

	stack<string> stck2;
	stack<string>stck;
	int i=0,l;
	line:
		cout<<"\n\t\t\t\t";
	cin>>i;
	if(i==1)
	stck.push("\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd*\xcd\xcd\xcd\xcd\xcd\xcd||");
	if(i==2)
	stck.pop();
	if(i==0)
	goto ii;
	while(!stck.empty())
	{
		stck2.push(stck.top());
		cout<<stck.top()<<endl;
		stck.pop();
		
	}
	while(!stck2.empty())
	{
		stck.push(stck2.top());
		stck2.pop();
		
	}
	
	goto line;
	ii:
int ui=0;
}
	void set()
{

system ("CLS");
  

system ("COLOR B");
  
 
cout << "\n\n";
  
cout <<
    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
  
cout << "\t\t\t  ||              Guessing No             ||\n";
  
cout <<
    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
  
 
cout <<
    "\n\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
cout << "\t\t\t\t||Guess Num Between 1 and 9  ||";
  
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  

}


void game2()
{
int y=0,o=0;

 for(int p=5;p>0;p--)
{
set();
cout<<"\n\n\t\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
            cout<<"\n\t\t\t\t||  "   <<p<<" turns Left  ||\n";
cout<<"\t\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
cout << "\n\t\t \t<< Enter : \n\t\t\t\t";
int k;
cin>>k;
if(k==rand()%10)
{
cout<<"\t\t\t\t"<<k <<" is Correct score +10";

y=y+10;
}else 

{
cout<<"\t\t\t\t\t"<<k<<" is False ";
}

if(p==1)
break;
cout<<"\n\n\t\t\t\t";
system("PAUSE");
 
 o=11;
}
cout<<"\n\t\t\t\t\tNow View Score\n\n\t\t\t\t";
system("PAUSE");
set();
cout<<"\n\n\t\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
            cout<<"\n\t\t\t\t||   Score Is "<<y<<"   ||\n";
cout<<"\t\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
}

	



void
entry (string loo) 
{
  
system ("CLS");
  
cout << "\n\n";
  
cout <<
    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
  
cout << "\t\t\t  ||               Enter " << loo << "             \n";
  
cout <<
    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
  
 
cout <<
    "\n\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
cout << "\n\t\t\t\t||Enter : ";

 
} 
void

flights (string k) 
{
  
system ("CLS");
  
system ("COLOR B");
  
 
cout << "\n\n";
  
cout <<
    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
  
cout << "\t\t\t  ||             " << k << "           ||\n";
  
cout <<
    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
  
 
cout << "\n\n";
  
cout <<
    "\n\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
cout << "\t\t\t\t||1.Afghanistan              ||";
  
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
 
 
cout << "\t\t\t\t||2.Qatr                     ||";
  
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
 
cout << "\t\t\t\t||3.England                  ||";
  
 
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
cout << "\t\t\t\t||4.Australia                ||";
  
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
 
cout << "\t\t\t\t||5.Gulf                     ||";
  
 
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
cout << "\t\t\t\t||6.Brazil                   ||";
  
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
cout << "\t\t\t\t||7.Srilanka                 ||";
  
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
cout << "\t\t\t\t||8.Malta                    ||";
  
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
cout << "\t\t\t\t||9.Hungr                    ||";
  
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
 
cout << "\t\t\t\t||10.Switzerland             ||";
  
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
 
cout << "\n\t\t \t<< Enter: \n\t\t\t\t";

} 
void

m2_1 () 
{
  
system ("CLS");
  
system ("COLOR B");
  
 
cout << "\n\n";
  
cout <<
    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
  
cout << "\t\t\t  ||             MANAGER MODE             ||\n";
  
cout <<
    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
  
 
cout <<
    "\n\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
cout << "\t\t\t\t||Make Selection :           ||";
  
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
 
cout << "\t\t\t\t||1.ON                       ||";
  
 
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
cout << "\t\t\t\t||2.Off                      ||";
  
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
 
 
cout << "\n\t\t \t<< Enter: \n\t\t\t\t";

} 
 
void

wrong () 
{
  
system ("CLS");
  
system ("COLOR B");
  
 
cout << "\n\n";
  
cout <<
    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
  
cout << "\t\t\t  ||            DEVELOPER ALTERING        ||\n";
  
cout <<
    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
  
cout << "\n\t\t\t<< Wrong Entry !!!\n\n\t\t\t";
  
 
system ("PAUSE");

} 
void

m1_1_1_a_a (string p) 
{
  
system ("CLS");
  
system ("COLOR B");
  
 
cout << "\n\n";
  
cout <<
    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
  
cout << "\t\t\t  ||            DEVELOPER ALTERING        ||\n";
  
cout <<
    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
  
cout << "\n\n\t\t\t<< Current Name  :        " << p;
  
 
 
cout << "\n\n\t\t \t<< Enter New Name:        ";

} 
void

m1_1_1_a () 
{
  
system ("CLS");
  
system ("COLOR B");
  
 
cout << "\n\n";
  
cout <<
    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
  
cout << "\t\t\t  ||            DEVELOPER ALTERING        ||\n";
  
cout <<
    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
  
 
cout <<
    "\n\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
cout << "\t\t\t\t||1.Plane Name               ||";
  
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
 
cout << "\t\t\t\t||2.Company Name             ||";
  
 
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
cout << "\t\t\t\t||3.Pilot Name               ||";
  
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
 
cout << "\t\t\t\t||4.Co_Pilot Name            ||";
  
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
 
 
cout << "\n\t\t \t<< Enter: \n\t\t\t\t";

} 
void

m1_1_1 () 
{
  
system ("CLS");
  
system ("COLOR B");
  
 
cout << "\n\n";
  
cout <<
    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
  
cout << "\t\t\t  ||             DEVELOPER MODE           ||\n";
  
cout <<
    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
  
 
 
 
cout << "\n\n\t\t \t<< Enter Plane ID: ";

} 
void

m1_3 () 
{
  
system ("CLS");
  
system ("COLOR B");
  
 
cout << "\n\n";
  
cout <<
    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
  
cout << "\t\t\t  ||            PASSENGER MODE            ||\n";
  
cout <<
    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
  
 
cout <<
    "\n\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
cout << "\t\t\t\t||1.New Booking              ||";
  
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
 
cout << "\t\t\t\t||2.Print Ticket             ||";
  
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
 cout << "\t\t\t\t||3.Feeling Bored            ||";
  
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
 
 
cout << "\n\t\t \t<< Enter: \n\t\t\t\t";

} 
void

m1_2 () 
{
  
system ("CLS");
  
system ("COLOR B");
  
 
cout << "\n\n";
  
cout <<
    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
  
cout << "\t\t\t  ||             MANAGER MODE             ||\n";
  
cout <<
    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
  
 
cout <<
    "\n\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
cout << "\t\t\t\t||1.Entries ON/OFF           ||";
  
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
 
cout << "\t\t\t\t||2.Available Planes         ||";
  
 
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
cout << "\t\t\t\t||3.Change Location          ||";
  
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
 
cout << "\t\t\t\t||4.Change Destination       ||";
  
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
 
cout << "\t\t\t\t||5.Reset Passenger's Data   ||";
  
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
 
 
cout << "\n\t\t \t<< Enter: \n\t\t\t\t";

} 
void

m1_1 () 
{
  
system ("CLS");
  
system ("COLOR B");
  
 
 
 
 
 
cout << "\n\n";
  
cout <<
    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
  
cout << "\t\t\t  ||             DEVELOPER MODE           ||\n";
  
cout <<
    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
  
 
cout <<
    "\n\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
cout << "\t\t\t\t||1.Change in Data           ||";
  
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
 
cout << "\t\t\t\t||2.View Planes              ||";
  
 
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
 
 
 
cout << "\t\t\t\t||3.Reset Psngr Data         ||";
  
 
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
 
 
cout << "\n\t\t \t<< Enter: \n\t\t\t\t";

} 
void

menu1 () 
{
  
system ("CLS");
  
system ("COLOR E");
  
 
 
cout << "\n\n";
  
cout <<
    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
  
cout << "\t\t\t  ||       AIR_PLANE MANAGEMENT SYSTEM    ||\n";
  
cout <<
    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
  
 
cout <<
    "\n\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
cout << "\t\t\t\t||1.Developer                ||";
  
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
 
cout << "\t\t\t\t||2.Manager                  ||";
  
 
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
cout << "\t\t\t\t||3.Passenger                ||";
  
cout <<
    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
  
 
 
cout << "\n\t\t \t<< Enter: \n\t\t\t\t";

} 
 
void

on_off (string p) 
{
  
 
 
 
 
 
fstream file;
  
file.open ("on_off.txt", ios::out);
  
if (p == "on" || p == "ON" || p == "On")
    
    {
      
 
      {
	
system ("CLS");
	
system ("COLOR B");
	
 
cout << "\n\n";
	
cout <<
	  "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
	
cout << "\t\t\t  ||             MANAGER MODE             ||\n";
	
cout <<
	  "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
	
 
cout <<
	  "\n\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
	
cout << "\t\t\t\t||New Entries opened  !!    ||";
	
cout <<
	  "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n\n\t\t\t\t";
      
 
}
      
 
 
 
file << "on";
    
}
  
if (p == "Off" || p == "off" || p == "OFF")
    
    {
      
system ("CLS");
      
system ("COLOR B");
      
 
cout << "\n\n";
      
cout <<
	"\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
      
cout << "\t\t\t  ||             MANAGER MODE             ||\n";
      
cout <<
	"\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
      
 
cout <<
	"\n\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
      
cout << "\t\t\t\t||New Entries Closed  !!    ||";
      
cout <<
	"\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n\n\t\t\t\t";
    
 
}
  
file << "off";
  
file.close ();

}


void
viewa () 
{
  
 
string l = "0";
  
fstream file;
  
file.open ("Ultinate.txt", ios::in);
  
while (!file.eof ())
    
    {
      
getline (file, l);
      
cout << l;
    
 
 
}
  
file.close ();

}


void
view1 (int id) 
{
  
string l = "0";
  
int k = 0;
  
fstream file;
  
file.open ("plane.txt", ios::out);
  
fstream file1;
  
file1.open ("plane1.txt", ios::in);
  
while (!file1.eof ())
    
    {
      
getline (file1, l);
      
 
k = k + 1;
      
if (id == k - 1)
	
cout << l;
    
 
 
}
  
file.close ();
  
file1.close ();

}


class claspsngr 
{

public:
int Economy = 0, Business = 0;

};


class classes 
{

public:
int Economy[40] = { 0 }, Business[10] =
  {
  0};

};


 
class passenger 
{

public:
string pass = "0";
  
string Destination = "0";
  
long long int Phone = 0;
  
string name = "0";
  
string sname = "0";
  
long long int ID = 0;
  
string District = "0";
  
string Gender = "0";
  
int age = 0;
  
claspsngr psngr;

 
 
};


class Pilot_names 
{

public:
 
string pilot_name = "0", co_pilot_name = "0";
  
pilot () 
  {
    
cout << pilot_name;
  
} 
co_pilot () 
  {
    
cout << co_pilot_name;

} 
 
 
 
};


struct Airplane 
{
  
string Destination = "0";
  
passenger psng[50];
  
string location = "0";
  
string name = "0", company_name = "0";
  

classes plane;
  
Pilot_names P_names;


};

 
int
main () 

{
	
	
  
 
int temp = 0, bus = 0, eco = 0, temp0 = 0, lo = 0;
  
int arp[100] = { 0 };
  
int flight = 0;
  
 
 
string tmp1, temp2, tmp3_tmp4;
  
Airplane arpln[100];
  
 
fstream file;
  
file.open ("Names.txt", ios::in);
  
for (int il = 0; il < 100; il++)
    
    {
      
getline (file, arpln[il].name);
    
 
 
} 
 
file.close ();
  
file.open ("Pilot_Names.txt", ios::in);
  
for (int il = 0; il < 100; il++)
    
    {
      
getline (file, arpln[il].P_names.pilot_name);
    
 
} 
file.close ();
  
file.open ("co_pilot_names.txt", ios::in);
  
for (int il = 0; il < 100; il++)
    
    {
      
getline (file, arpln[il].P_names.co_pilot_name);
    
 
} 
 
file.close ();
  
file.open ("company_names.txt", ios::in);
  
for (int il = 0; il < 100; il++)
    
    {
      
getline (file, arpln[il].company_name);
    
 
} 
 
 
file.close ();
  
file.open ("location.txt", ios::in);
  
for (int il = 0; il < 100; il++)
    
    {
      
file >> arpln[il].location;
    
 
} 
 
 
file.close ();
  
file.open ("Passenger_Names.txt", ios::in);
  
for (int y = 0; y < 100; y++)
    
    {
      
 
for (int il = 0; il < 50; il++)
	
	{
	  
getline (file, arpln[y].psng[il].name);
    
 
} 
} 
 
file.close ();
  
file.open ("Passenger_ID.txt", ios::in);
  
for (int y = 0; y < 100; y++)
    
    {
      
 
for (int il = 0; il < 50; il++)
	
	{
	  
file >> arpln[y].psng[il].ID;
    
 
 
} 
} 
 
 
file.close ();
  
file.open ("Passenger_Ages.txt", ios::in);
  
for (int y = 0; y < 100; y++)
    
    {
      
 
for (int il = 0; il < 50; il++)
	
	{
	  
file >> arpln[y].psng[il].age;
    
 
} 
} 
file.close ();
  
 
file.open ("DesP.txt", ios::in);
  
for (int k = 0; k < 100; k++)
    
    {
      
file >> arpln[k].Destination;
    
 
 
 
} 
 
 
file.close ();
  
 
 
 
 
 
file.open ("Districts.txt", ios::in);
  
for (int y = 0; y < 100; y++)
    
    {
      
 
for (int il = 0; il < 50; il++)
	
	{
	  
file >> arpln[y].psng[il].District;
    
 
} 
} 
file.close ();
  
string a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11;
  
fstream file1, file2, file3, file4, file5, file6, file7, file8, file9,
    file10, file11;
  
file1.open ("ultimate.txt", ios::out);
  
file3.open ("DesP.txt", ios::in);
  
file7.open ("location.txt", ios::in);
  
file8.open ("company_names.txt", ios::in);
  
file9.open ("co_pilot_names.txt", ios::in);
  
file10.open ("Pilot_Names.txt", ios::in);
  
file11.open ("Names.txt", ios::in);
  
 
 
 
while (!file11.eof ())
    
    {
      
 
file3 >> a3;
      
file4 >> a4;
      
file5 >> a5;
      
file6 >> a6;
      
file7 >> a7;
      
file8 >> a8;
      
file9 >> a9;
      
file10 >> a10;
      
file11 >> a11;
      
file1 << "Name         : " << a11 << endl;
      
file1 << "Company      : " << a8 << endl;
      
file1 << "Pilot        : " << a10 << endl;
      
file1 << "Co_Pilot     : " << a9 << endl;
      
file1 << "Location     : " << a10 << endl;
      
file1 << "Destination  : " << a3 << endl;
      
file1 << "____________________________\n";
    
}
  
 
file1.close ();
  
 
 
 
 
 
 
fstream fil1, fil2, fil3, fil4, fil5, fil6, fil7, fil8, fil9,
    fil10, fil11;
  
fil1.open ("Pd.txt", ios::in);
  
fil2.open ("Pname.txt", ios::in);
  
fil3.open ("Psname.txt", ios::in);
  
fil4.open ("Pdis.txt", ios::in);
  
fil5.open ("Pid.txt", ios::in);
  
fil6.open ("Ptt.txt", ios::in);
  
fil7.open ("Pphone.txt", ios::in);
  
fil8.open ("Pgender.txt", ios::in);
  
fil9.open ("Page.txt", ios::in);
  
fil10.open ("Ppass.txt", ios::in);
  
fil11.open ("Pdes.txt", ios::in);
  
for (int ii = 0; ii < 100; ii++)
    
for (int ll = 0; ll < 50; ll++)
      
      {
	
 
fil1 >> arpln[ii].psng[ll].name;
	
fil2 >> arpln[ii].psng[ll].sname;
	
fil3 >> arpln[ii].psng[ll].District;
	
fil4 >> arpln[ii].psng[ll].ID;
	
fil5 >> arpln[ii].psng[ll].psngr.Business;
	
fil6 >> arpln[ii].psng[ll].psngr.Economy;
	
fil7 >> arpln[ii].psng[ll].Phone;
	
fil8 >> arpln[ii].psng[ll].Gender;
	
fil9 >> arpln[ii].psng[ll].age;
	
fil10 >> arpln[ii].psng[ll].pass;
	
fil11 >> arpln[ii].psng[ll].Destination;
      
 
 
} 
fil1.close ();
  
fil2.close ();
  
fil3.close ();
  
fil4.close ();
  
fil5.close ();
  
fil6.close ();
  
fil7.close ();
  
fil8.close ();
  
fil9.close ();
  
fil10.close ();
  
fil11.close ();

 
 
 
 
 
 
 
lineX:
menu1 ();
  
 
 
 
 
 
fil1.open ("Pd.txt", ios::out);
  
fil2.open ("Pname.txt", ios::out);
  
fil3.open ("Psname.txt", ios::out);
  
fil4.open ("Pdis.txt", ios::out);
  
fil5.open ("Pid.txt", ios::out);
  
fil6.open ("Ptt.txt", ios::out);
  
fil7.open ("Pphone.txt", ios::out);
  
fil8.open ("Pgender.txt", ios::out);
  
fil9.open ("Page.txt", ios::out);
  
fil10.open ("Ppass.txt", ios::out);
  
fil11.open ("Pdes.txt", ios::out);
  
for (int ii = 0; ii < 100; ii++)
    
for (int ll = 0; ll < 50; ll++)
      
      {
	
 
fil1 << arpln[ii].psng[ll].name << endl;
	
fil2 << arpln[ii].psng[ll].sname << endl;
	
fil3 << arpln[ii].psng[ll].District << endl;
	
fil4 << arpln[ii].psng[ll].ID << endl;
	
fil5 << arpln[ii].psng[ll].psngr.Business << endl;
	
fil6 << arpln[ii].psng[ll].psngr.Economy << endl;
	
fil7 << arpln[ii].psng[ll].Phone << endl;
	
fil8 << arpln[ii].psng[ll].Gender << endl;
	
fil9 << arpln[ii].psng[ll].age << endl;
	
fil10 << arpln[ii].psng[ll].pass << endl;
	
fil11 << arpln[ii].psng[ll].Destination << endl;
      
 
 
} 
 
 
fil1.close ();
  
fil2.close ();
  
fil3.close ();
  
fil4.close ();
  
fil5.close ();
  
fil6.close ();
  
fil7.close ();
  
fil8.close ();
  
fil9.close ();
  
fil10.close ();
  
fil11.close ();
  
 
int s1;
  
cin >> s1;

line82:
if (s1 == 1)
    
    {
      
 
system ("CLS");
      
system ("COLOR B");
      
 
cout << "\n\n";
      
cout <<
	"\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
      
cout << "\t\t\t  ||                Security              ||\n";
      
cout <<
	"\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
      
 
cout <<
	"\n\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
      
cout << "\t\t\t\t||Enter Password             ||";
      
cout <<
	"\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n\n\t\t\t\t";
      
 
cout << "\n\t\t \t<< Enter: \n\t\t\t\t";
      
string io;
      
cin >> io;
      
if (io != "123")
	
	{
	  
 
wrong ();
	  
goto lineX;
	
}
      
 
m1_1 ();
      
int s11;
      
cin >> s11;
      
 
switch (s11)
	
	{
	
case 1:
	  
	  {
	    
m1_1_1 ();
	    
int pln_id;
	    
cin >> pln_id;
	    
m1_1_1_a ();
	    
int choice;
	    
cin >> choice;
	    
 
switch (choice)
	      
	      {
	      
 
case 1:
		
		{
		  
 
m1_1_1_a_a (arpln[pln_id].name);
		  
 
cin >> arpln[pln_id].name;
		  
cout << "\t\t\t";
		  
cout << "\n\t\t\tOperation Done \n\n\t\t\t";
		  
system ("PAUSE");
		
}
		
break;
	      
case 2:
		
		{
		  
 
m1_1_1_a_a (arpln[pln_id].company_name);
		  
cin >> arpln[pln_id].company_name;
		  
cout << "\t\t\t";
		  
cout << "\n\t\t\tOperation Done \n\n\t\t\t";
		  
system ("PAUSE");
		
}
		
break;
	      
 
case 3:
		
		{
		  
 
m1_1_1_a_a (arpln[pln_id].P_names.pilot_name);
		  
cin >> arpln[pln_id].P_names.pilot_name;
		  
cout << "\t\t\t";
		  
cout << "\n\t\t\tOperation Done \n\n\t\t\t";
		  
system ("PAUSE");
		
}
		
break;
	      
case 4:
		
		{
		  
 
 
m1_1_1_a_a (arpln[pln_id].P_names.co_pilot_name);
		  
 
cin >> arpln[pln_id].P_names.co_pilot_name;
		  
cout << "\t\t\t";
		  
cout << "\n\t\t\tOperation Done \n\n\t\t\t";
		  
system ("PAUSE");
		
}
		
break;
	      
 
 
default:
		
 
		{
		  
wrong ();
		  
goto lineX;
		
}
	      
}
	    
 
goto lineX;
	  
}
	  
break;
	
 
 
case 2:
	  
	  {
	    
system ("CLS");
	    
 
 
cout << "\n\n";
	    
cout <<
	      "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
	    
cout << "\t\t\t  ||            DEVELOPER ALTERING        ||\n";
	    
cout <<
	      "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
	  
 
 
 
line172:
char c1[100], c2[100], c3[100], c4[100], c5[100], c6[100],
	      c7[100];
	    
file1.open ("ultimate.txt");
	    
while (!file1.eof ())
	      
	      {
		
file1.getline (c1, 100);
		
file1.getline (c2, 100);
		
file1.getline (c3, 100);
		
file1.getline (c4, 100);
		
file1.getline (c5, 100);
		
file1.getline (c6, 100);
		
file1.getline (c7, 100);
		
 
if (file1.eof () != 0)
		  
break;
		
lo++;
		
cout << "\n\n\t\t\t\t                    \n";
		
cout << "\t\t\t\t        ID     :   " << lo - 1;
		
 
 
cout <<
		  "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
		
cout << "\t\t\t\t||" << c1;
		
cout <<
		  "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
		
 
cout << "\t\t\t\t||" << c2;
		
 
cout <<
		  "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
		
cout << "\t\t\t\t||" << c3;
		
cout <<
		  "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
		
 
cout << "\t\t\t\t||" << c4;
		
cout <<
		  "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
		
 
 
cout << "\t\t\t\t||" << c5;
		
 
cout <<
		  "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
		
cout << "\t\t\t\t||" << c6;
		
cout <<
		  "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
	      
 
 
 
 
 
 
}
	  
 
}
	  
cout << "\n\t\t\t\t";
	  
system ("PAUSE");
	  
goto lineX;
	  
 
break;
	
 
case 3:
	  {
	    
 
system ("CLS");
	    
cout << "\n\n";
	    
cout <<
	      "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
	    
cout << "\t\t\t  ||             RESETTING  DATA           ||\n";
	    
cout <<
	      "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
	    
 
 
cout <<
	      "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
	    
 
cout << "\t\t\t\t||Plane ID is:              ||";
	    
 
cout <<
	      "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
	    
 
 
 
cout << "\n\t\t \t<< Enter: \n\t\t\t\t";
	    
 
int lop;
	    
cin >> lop;
	    
for (int ik = 0; ik < 50; ik++)
	      
	      {
		
 
arpln[lop].psng[ik].age = 0;
		
arpln[lop].psng[ik].Destination = "0";
		
arpln[lop].psng[ik].District = "0";
		
arpln[lop].psng[ik].Gender = "0";
		
arpln[lop].psng[ik].ID = 0;
		
arpln[lop].psng[ik].name = "0";
		
arpln[lop].psng[ik].pass = "0";
		
arpln[lop].psng[ik].Phone = 0;
		
arpln[lop].psng[ik].psngr.Business = 0;
		
arpln[lop].psng[ik].psngr.Economy = 0;
		
arpln[lop].psng[ik].sname = "0";
	      
 
} 
 
cout <<
	      "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
	    
 
cout << "\t\t\t\t||Data Successfully Reset    ||";
	    
 
cout <<
	      "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
	    
 
 
cout << "\n\t\t\t\t";
	    
system ("PAUSE");
	    
goto lineX;
	    
 
break;
	  }
	
 
default:
	  
	  {
	    
wrong ();
	    
goto line82;
	  
}
	
}
    
}
  
 
if (s1 == 2)
    
    {
      
 
system ("CLS");
      
system ("COLOR B");
      
 
cout << "\n\n";
      
cout <<
	"\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
      
cout << "\t\t\t  ||                Security              ||\n";
      
cout <<
	"\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
      
 
cout <<
	"\n\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
      
cout << "\t\t\t\t||Enter Password             ||";
      
cout <<
	"\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n\n\t\t\t\t";
      
 
cout << "\n\t\t \t<< Enter: \n\t\t\t\t";
      
string io;
      
cin >> io;
      
if (io != "111")
	
	{
	  
 
wrong ();
	  
goto lineX;
	
}
      
 
m1_2 ();
      
int s21;
      
cin >> s21;
      
if (s21 == 1)
	
	{
	  
m2_1 ();
	  
int s221;
	  
cin >> s221;
	  
if (s221 == 1)
	    
	    {
	      
 
 
system ("CLS");
	      
system ("COLOR B");
	      
 
 
on_off ("on");
	    
}
	  
if (s221 == 2)
	    
 
	    {
	      
cout << "Booking Off !!\n";
	      
on_off ("off");
	    
}
	  
system ("PAUSE");
	  
goto lineX;
	
}
      
if (s21 == 2)
	
	{
	  
int kop;
	  
string d1;
	  
flights (" MANAGER MODE ");
	  
cin >> kop;
	  
switch (kop)
	    
	    {
	    
case 1:
	      d1 = "Afghanistan";
	      
break;
	    
case 2:
	      d1 = "Qatar";
	      
break;
	    
case 3:
	      d1 = "England";
	      
break;
	    
case 4:
	      d1 = "Australia";
	      
break;
	    
case 5:
	      d1 = "Gulf";
	      
break;
	    
case 6:
	      d1 = "Brazil";
	      
break;
	    
case 7:
	      d1 = "Srilanka";
	      
break;
	    
case 8:
	      d1 = "Hungr";
	      
break;
	    
case 9:
	      d1 = "Malta";
	      
break;
	    
case 10:
	      d1 = "Switzerland";
	      
break;
	    
default:
	      
wrong ();
	      
goto lineX;
	      
break;
	    
 
 
}
	  
system ("CLS");
	  
 
cout << "\n\n";
	  
cout <<
	    "\t\t\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
	  
cout << "\t\t\t  These Flights Are Available For " << d1 << "\n";
	  
cout <<
	    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
	  
 
 
cout << "\n\n\t\t\t\t                    \n";
	  
for (int i = 0; i < 100; i++)
	    
	    {
	      
 
 
if (arpln[i].location == "Pakistan"
		       && arpln[i].Destination == d1)
		
		{
		  
 
 
 
 
 
 
 
 
cout << "\t\t\t\t          ID     :  " <<
		    i;
		  
cout <<
		    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
		
 
}
	    
 
}
	  
 
cout << "\n\t\t\t\t";
	  
system ("PAUSE");
	  
goto lineX;
	
}
      
if (s21 == 3)
	
	{
	  
for (int i = 0; i < 100; i++)
	    
	    {
	      
cout << "\t\tID       : " << i << "\t\tLocation : " <<
		arpln[i].
		location << endl << endl <<
		"\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n";
	    
} 
 
 
 
cout << "\n\n";
	  
 
cout << "\n\t\t \t<< Enter Plane ID : \n\t\t\t\t";
	  
 
int id;
	  
cin >> id;
	  
 
 
system ("CLS");
	  
system ("COLOR B");
	  
 
cout << "\n\n";
	  
cout <<
	    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
	  
cout <<
	    "\t\t\t  ||                 Changing location                ||\n";
	  
cout <<
	    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
	  
 
 
cout <<
	    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
	  
cout << "\t\t\t\t|| Recent Location :" << arpln[id].location;
	  
cout <<
	    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
	  
 
 
 
 
cout << "\n\t\t \t\t<< Enter New: \n\t\t\t\t";
	  
 
cin >> arpln[id].location;
	  
 
 
cout <<
	    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
	  
cout << "\t\t\t\t|| Operation Done !!";
	  
cout <<
	    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
	  
 
cout << "\n\t\t\t\t";
	  
system ("PAUSE");
	  
goto lineX;
	
}
      
if (s21 == 4)
	
	{
	  
 
 
 
 
 
 
	  {
	    
for (int i = 0; i < 100; i++)
	      
	      {
		
cout << "\t\tID       : " << i << "\t\tDestination : " <<
		  arpln[i].
		  Destination << endl << endl <<
		  "\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n";
	      
} 
 
 
 
cout << "\n\n";
	    
 
cout << "\n\t\t \t<< Enter Plane ID : \n\t\t\t\t";
	    
 
int id;
	    
cin >> id;
	    
 
 
system ("CLS");
	    
system ("COLOR B");
	    
 
cout << "\n\n";
	    
cout <<
	      "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
	    
cout <<
	      "\t\t\t  ||                  Changing Destination             ||\n";
	    
cout <<
	      "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
	    
 
 
cout <<
	      "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
	    
cout << "\t\t\t\t|| Recent Destination :" << arpln[id].
	      Destination;
	    
cout <<
	      "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
	    
 
 
 
 
cout << "\n\t\t \t\t<< Enter New: \n\t\t\t\t";
	    
 
cin >> arpln[id].location;
	    
 
 
cout <<
	      "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
	    
cout << "\t\t\t\t|| Operation Done !!";
	    
cout <<
	      "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
	    
 
cout << "\n\t\t\t\t";
	    
system ("PAUSE");
	    
goto lineX;
	  
}
	
 
 
}
      
if (s21 == 5)
	
	{
	  
system ("CLS");
	  
cout << "\n\n";
	  
cout <<
	    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
	  
cout << "\t\t\t  ||             RESETTING  DATA           ||\n";
	  
cout <<
	    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
	  
 
 
cout <<
	    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
	  
 
cout << "\t\t\t\t||Plane ID is:              ||";
	  
 
cout <<
	    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
	  
 
 
 
cout << "\n\t\t \t<< Enter: \n\t\t\t\t";
	  
 
int popi;
	  
cin >> popi;
	  
 
system ("CLS");
	  
 
cout << "\n\n";
	  
cout <<
	    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
	  
cout << "\t\t\t  ||             RESETTING  DATA           ||\n";
	  
cout <<
	    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
	  
 
 
cout <<
	    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
	  
 
cout << "\t\t\t\t||Passenger ID is:          ||";
	  
 
cout <<
	    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
	  
 
 
 
cout << "\n\t\t \t<< Enter: \n\t\t\t\t";
	  
 
int popi2;
	  
cin >> popi2;
	  
 
 
arpln[popi].psng[popi2].age = 0;
	  
arpln[popi].psng[popi2].Destination = "0";
	  
arpln[popi].psng[popi2].District = "0";
	  
arpln[popi].psng[popi2].Gender = "0";
	  
arpln[popi].psng[popi2].ID = 0;
	  
arpln[popi].psng[popi2].name = "0";
	  
arpln[popi].psng[popi2].pass = "0";
	  
arpln[popi].psng[popi2].Phone = 0;
	  
arpln[popi].psng[popi2].psngr.Business = 0;
	  
arpln[popi].psng[popi2].psngr.Economy = 0;
	  
arpln[popi].psng[popi2].sname = "0";
	  
 
 
 
 
 
system ("CLS");
	  
 
cout << "\n\n";
	  
cout <<
	    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
	  
cout << "\t\t\t  ||             RESETTING  DATA           ||\n";
	  
cout <<
	    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
	  
 
 
 
cout <<
	    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
	  
 
cout << "\t\t\t\t||Data Successfully Reset    ||";
	  
 
cout <<
	    "\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
	  
cout << "\n\t\t\t\t";
	  
system ("PAUSE");
	  
goto lineX;
	
}
    
 
}
  
if (s1 == 3)
    
    {
      
string kl;
      
ifstream file ("on_off.txt");
      
file >> kl;
      
if (kl == "off")
	
	{
	  
 
 
 
 
system ("CLS");
	  
system ("COLOR B");
	  
 
cout << "\n\n";
	  
cout <<
	    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
	  
cout << "\t\t\t  ||             BOOKING                  ||\n";
	  
cout <<
	    "\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
	  
 
 
 
cout << "\n\t\t\t\t";
	  
system ("PAUSE");
	  
 
 
 
 
goto lineX;
	
}
      
      else
	
	{
	  
 
m1_3 ();
	  
int pb;
	  
cin >> pb;
	  
if (pb == 1)
	    
 
	    {
	      
string d;
	      
flights ("Book Ur Flight");
	      
int kaa;
	      
cin >> kaa;
	      
switch (kaa)
		
		{
		
case 1:
		  d = "Afghanistan";
		  
break;
		
case 2:
		  d = "Qatar";
		  
break;
		
case 3:
		  d = "England";
		  
break;
		
case 4:
		  d = "Australia";
		  
break;
		
case 5:
		  d = "Gulf";
		  
break;
		
case 6:
		  d = "Brazil";
		  
break;
		
case 7:
		  d = "Srilanka";
		  
break;
		
case 8:
		  d = "Hungr";
		  
break;
		
case 9:
		  d = "Malta";
		  
break;
		
case 10:
		  d = "Switzerland";
		  
break;
		
default:
		  cout << "__Wrong Entry Try again__";
		  
system ("PAUSE");
		  
goto lineX;
		  
break;
		
 
 
}
	      
 
for (int i1 = 0; i1 < 100; i1++)
		
if (arpln[i1].Destination == d
		     && arpln[i1].location == "Pakistan")
		  
 
 
 
 
 
		  {
		    
 
 
		    {
		      
 
cout << "\n\n";
		      
system ("CLS");
		      
cout <<
			"\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
		      
cout << "\t\t\t  ||             Plane ID \"" << i1 <<
			"\" Is Selected         ||\n";
		      
cout <<
			"\t\t\t  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
		      
cout << "\n\t\t\t\t";
		      
 
 
cout << "\n\n";
		      
 
 
 
cout <<
			"\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
		      
 
cout << "\t\t\t\t||1.Business                 ||";
		      
 
cout <<
			"\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
		      
 
cout << "\t\t\t\t||2.Economy                  ||";
		      
 
cout <<
			"\n\t\t\t\t||\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd||\n";
		      
 
 
 
cout << "\n\t\t\t\t";
		      
cout << "<<Enter Choice : ";
		      
 
int choicee;
		      
cin >> choicee;
		      
switch (choicee)
			
			{
			
case 1:
			  
			  {
			    
for (int l = 0; l < 10; l++)
			      
			      {
				
if (arpln[i1].plane.Business[l] == 0)
				  
				  {
				    
for (int l = 0; l < 50; l++)
				      
if (arpln[i1].psng[l].ID == 0)
					
					{
					  
arpln[i1].psng[l].Destination = d;
					  
arpln[i1].psng[l].psngr.Business =
					    1;
					  
arpln[i1].psng[l].psngr.Economy =
					    0;
					  
entry ("Name    ");
					  
 
 
cin >> arpln[i1].psng[l].name;
					  
entry ("2nd Name");
					  
cin >> arpln[i1].psng[l].sname;
					
line397:
entry
					    ("ID        ");
					  
long long int ID = 0;
					  
cin >> ID;
					  
for (int p = 0; p < 100; p++)
					    
					    {
					      
for (int o = 0; o < 50; o++)
						
						{
						  
if (arpln[p].psng[o].ID ==
						       ID)
						    
						    {
						      
 
entry
							("Already Exist ");
						      
system ("PAUSE");
						      
goto line397;
						    
}
						
 
}
					    
 
}
					  
 
arpln[i1].psng[l].ID = ID;
					  
entry (" Age   ");
					  
cin >> arpln[i1].psng[l].age;
					  
entry ("Gender");
					  
cin >> arpln[i1].psng[l].Gender;
					  
entry ("District");
					  
cin >> arpln[i1].psng[l].District;
					  
entry ("Phone NO");
					  
cin >> arpln[i1].psng[l].Phone;
					  
 
arpln[i1].psng[l].psngr.
					    Business = 1;
					  
arpln[i1].psng[l].psngr.Economy =
					    0;
					  
 
 
 
entry ("Pass_Word");
					  
cin >> arpln[i1].psng[l].pass;
					  
 
cout <<
					    "\n\n\t\t\t\tYour Information is saved with US \n\n\t\t\t\t";
					  
 
system ("PAUSE");
					  
goto lineX;
					
}
				  
 
}
			      
 
}
			    
 
entry ("Class Full!!");
			    
cout << "\n\t\t\t\t";
			    
system ("PAUSE");
			    
goto lineX;
			  
}
			  
break;
			
case 2:
			  
			  {
			    
for (int l = 0; l < 10; l++)
			      
			      {
				
if (arpln[i1].plane.Economy[l] == 0)
				  
				  {
				    
for (int l = 0; l < 50; l++)
				      
if (arpln[i1].psng[l].ID == 0)
					
					{
					  
arpln[i1].psng[l].psngr.Business =
					    0;
					  
arpln[i1].psng[l].psngr.Economy =
					    1;
					  
arpln[i1].plane.Economy[l] = 1;
					  
entry ("First Name");
					  
cin >> arpln[i1].psng[l].name;
					  
entry ("Second Name");
					  
cin >> arpln[i1].psng[l].sname;
					
line493:
entry
					    ("ID       ");
					  
long long int ID = 0;
					  
cin >> ID;
					  
for (int p = 0; p < 100; p++)
					    
					    {
					      
for (int o = 0; o < 50; o++)
						
						{
						  
if (arpln[p].psng[o].ID ==
						       ID)
						    
						    {
						      
cout <<
							"\n\n\t\t\t\tID already Exists!! \n\n";
						      
cout <<
							"\tEnter ID again ";
						      
system ("PAUSE");
						      
system ("CLS");
						      
goto line493;
						    
}
						
 
}
					    
 
}
					  
 
arpln[i1].psng[l].ID = ID;
					  
entry ("AGE    ");
					  
cin >> arpln[i1].psng[l].age;
					  
entry ("Gender      ");
					  
cin >> arpln[i1].psng[l].Gender;
					  
entry ("District  ");
					  
cin >> arpln[i1].psng[l].District;
					  
entry ("Phone No ");
					  cin >> arpln[i1].psng[l].Phone;
					
line522:
 
arpln[i1].psng[l].psngr.
					    Business =
					    0;
					  
arpln[i1].psng[l].psngr.Economy =
					    1;
					  
entry ("Pass_Word");
					  
cin >> arpln[i1].psng[l].pass;
					  
cout <<
					    "\n\n\t\t\t\tYour Information is saved with us \n\n\t\t\t\t";
					  
 
system ("PAUSE");
					  
goto lineX;
					
}
				  
 
}
			      
 
}
			    
 
entry ("Class Full");
			    
system ("PAUSE");
			    
goto lineX;
			  
}
			
}
		    
 
 
}
		    
 
system ("PAUSE");
		    
goto lineX;
		  
}
	      
entry ("No Planes Are Available  ");
	      
system ("PAUSE");
	      
goto lineX;
	    
 
}
	  
 
if (pb == 2)
	    
	    {
	      
 
cout << "\n\t\t \t<< Enter: \n\t\t\t\t";
	      
	      {
		
string pass;
		
 
entry ("Passenger ID : ");
		
int k;
		
cin >> k;
		
entry ("Pass_Word    : ");
		
cin >> pass;
		
 
for (int i = 0; i < 100; i++)
		  
		  {
		    
for (int j = 0; j < 50; j++)
		      
		      {
			
if (arpln[i].psng[j].ID == k
			     && arpln[i].psng[j].pass == pass)
			  
			  {
			    
 
 
fstream file1;
			    
file1.open ("Ticket.txt", ios::out);
			    
file1 <<
			      "\n______________Plane & Staff ________________\n\n";
			    
file1 << "Plane ID    : " << i;
			    
file1 << "\nPlane       : " << arpln[i].name;
			    
file1 << "\nPilot       : " << arpln[i].P_names.
			      pilot_name;
			    
file1 << "\nCo-Pilot    : " << arpln[i].P_names.
			      co_pilot_name;
			    
file1 <<
			      "\n_______________Passenger Data_______________\n\n";
			    
file1 << "Name        : " << arpln[i].psng[j].
			      name << " " << arpln[i].psng[j].sname << endl;
			    
file1 << "ID          : " << arpln[i].psng[j].
			      ID << endl;
			    
file1 << "Age         : " << arpln[i].psng[j].
			      age << endl;
			    
file1 << "District    : " << arpln[i].psng[j].
			      District << endl;
			    
file1 << "Gender      : " << arpln[i].psng[j].
			      Gender << endl;
			    
file1 << "Destination : " << arpln[i].psng[j].
			      Destination;
			    
 
if (arpln[i].psng[j].psngr.Business == 1);
			    
file1 <<
			      "\nClass       : Business\nCharges     : 175000";
			    
if (arpln[i].psng[j].psngr.Economy == 1);
			    
file1 <<
			      "\nClass       : Economy\nCharges     : 100000";
			    
time_t now = time (0);
			    
char *dt = ctime (&now);
			    
file1 << "\ntime        : " << dt;
			    
 
cout <<
			      "\n\n\t\t\t\tTicket Printed Collect it ..\n";
			    
cout << "\n\t\t\t\t";
			    
system ("PAUSE");
			    
 
goto lineX;
			  
}
		      
}
		  
 
 
 
}
		
wrong ();
		
system ("PAUSE");
		
 
goto lineX;
	      
 
}
	    
}
lX:
try{

if (pb == 3)
{
	gamec();
	int y;
	cout << "\n\t\t \t<< Enter : \n\t\t\t\t";
	cin>>y;
	if (y==1)
	{
	
	game2();
	cout<<"\n\n\t\t\t\t";
	system("PAUSE");
	goto lineX;
}
if(y==2)
{
	pushpop();
	goto lineX;
}
}
}
catch(string l){
	cout<<"\n\n\t\t\t\tWrong Entry \n";
	cout<<"\t\t\t\t";
	system("PAUSE");
	goto lX;
}
    
 
}
}
cout<<"\n\n\t\t\t\tSorry Wrong Entry Kindly Try Again \n\t\t\t\t";
system("pAUSE");
goto lineX;
}
 

 
 
 
 
 

