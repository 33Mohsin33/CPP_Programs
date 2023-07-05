#include<iostream>
#include<fstream>
#include<iomanip>
#include<string.h>
#include<ctime>
using namespace std;
struct Node
{
 char Name[20];
 int Reg_No;
 Node *Next=NULL;
 float GPA[8]={0};
 float CGPA=0;
 char Grades[8];
 char C_Grade;
 char grade_calc(float val)
 {
 	if(val==4)
 	return 'A';
 	else if(val<4&&val>=3.5)
 	return 'B';
 	else if(val<3.5&&val>=3.0)
 	return 'C';
 	else if(val<3.0&&val>=2.5)
 	return 'D';
 	else if(val<2.5)
 	return 'F';
 	else
 	return 'X';
 }
 void calc()
 {
 	for(int i=0;i<8;i++)
	 {
	 Grades[i]=grade_calc(GPA[i]);
	 CGPA=CGPA+GPA[i];	
	  }
	  CGPA=CGPA/8;
	  C_Grade=grade_calc(CGPA);
	
}	
}*prevv=NULL,*Curr=NULL,*temp2=NULL,*Head=NULL,*Tail=NULL,*Curr2=NULL;
struct Node_F
{
 char Name[20];
 int Reg_No;
 float GPA[8]={0};
 float CGPA=0;
 char Grades[8];
 char C_Grade;
}obj;
int b=0;
void stop(int tm);
void done(Node *rRoot)
{
	cout<<"\n\t\t\t\t\tDeleting : \n\t\t\t\t\tName     : "<<rRoot->Name<<"\n\t\t\t\t\tReg No   : "<<rRoot->Reg_No<<"\n\t\t\t\t\t";
	stop(3);
}
void line()
{
	cout<<"\n\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
}
void Wrong()
{
	system("COLOR 4");
    cout<<"\n\n\t\t\t\t\tWrong Entry  ( 0^0 )\n\t\t\t\t\t\a";
    stop(2);
}
void stop(int tm)
{
	int t1=time(NULL);
	while(time(NULL)!=t1+tm)
	continue;
}
void Heading(string tv)
{
	system("CLS");
	cout<<"\n\n\t\t\t\t\t<<<<\xcd\xcd\xcd\xcd[ "<<tv<<" ]\xcd\xcd\xcd\xcd\xcd>>>>\n\n";
}
void ListEntry(struct Node_F NodeL)
{
	Curr=new Node;
	if(Curr==NULL)
	{
		cout<<"\n\t\t\t\t\tNo Space in Memory Left";
		return;
	}
	for(int i=0;i<8;i++)
	Curr->GPA[i]=NodeL.GPA[i];
	for(int i=0;i<8;i++)
	Curr->Grades[i]=NodeL.Grades[i];
	strcpy(Curr->Name,NodeL.Name);
	Curr->Reg_No=NodeL.Reg_No;
	Curr->CGPA=NodeL.CGPA;
	Curr->C_Grade=NodeL.C_Grade;
	if(Head==NULL)
	Tail=Head=Curr;
	else
	{
		Tail->Next=Curr;
		Tail=Tail->Next;
	}
}
void EntryL()
{
    Heading("Entry");
	Curr=new (Node);
	system("COLOR 2");
	if(Curr==NULL)
	{
		system("COLOR 4");
		cout<<"\n\t\t\t\t\tMemory is Full (0^0) \n\t\t\t\t\tReturning....";
		stop(3);
		return;
	}
	
	cout<<"\t\t\t\t\tEnter Name        : ";
	cin.ignore();
	cin.getline(Curr->Name,20);
	cout<<"\t\t\t\t\tEnter Reg #       : ";
	cin>>Curr->Reg_No;
	for(temp2=Head;temp2!=NULL;temp2=temp2->Next)
	{
		if(temp2->Reg_No==Curr->Reg_No)
		{
		cout<<"\n\t\t\t\t\tRecord Already Exist \n\t\t\t\t\tReturning.....";stop(2);return;
		}
		}
	for(int i=0;i<8;i++)
	{
	cout<<"\t\t\t\t\tEnter Smstr "<<i+1<<" GPA : ";
	cin>>Curr->GPA[i];
	}
	Curr->calc();
	if(Head==NULL)
	Head=Tail=Curr;
	else if(Curr->Reg_No<Head->Reg_No)
	{
	Curr->Next=Head;
	Head=Curr;	
	}
	else if(Curr->Reg_No>Tail->Reg_No)
	{
		Tail->Next=Curr;
		Tail=Curr;
	}
	else
	{
	for(temp2=Head;temp2!=NULL;temp2=temp2->Next)
	{
		if(temp2->Reg_No>Curr->Reg_No)
		{
			prevv->Next=Curr;
			Curr->Next=temp2;	
		}
		prevv=temp2;
		}	
	}
	cout<<"\n\t\t\t\t\tOperation Success (Returning)......";
	stop(1);
	}
void DeleteL(int val)
{

	Heading("Deleting");
	system("COLOR 4");
	if(Head==NULL)
	{
	cout<<"\n\t\t\t\t\tNo Data To Delete (Returning).....";
	stop(2);
	return;
	}
	else if(Head->Reg_No==val)
	{
		cout<<"\n\t\t\t\t\tStudent's Data Is Deleted : "<<Head->Name;
		stop(3);
		temp2=Head;
		Head=Head->Next;
		;
		delete(temp2);
		return;
	}
	else if(Tail->Reg_No==val)
	{
	for(temp2=Head;temp2!=NULL;temp2=temp2->Next)
	{
	if(temp2->Reg_No==val)
	{
	break;
	}
	prevv=temp2;
    }
    if(temp2==NULL)
    {
    cout<<"\t\t\t\t\tNo Data Found .....\n\n\t\t\t\t\tReturning.....";
	stop(2);
	return;
	}
	else
	{
	Tail=prevv;
	cout<<"\n\t\t\t\t\tThis Student's Data Is Deleted : "<<temp2->Name;
	delete(temp2);
	stop(2);
	return;
	}
    }
	else
	{
	for(temp2=Head;temp2!=NULL;temp2=temp2->Next)
	{
	if(temp2->Reg_No==val)
	{
	prevv->Next=temp2->Next;
	break;
	}
	prevv=temp2;
    }
    if(temp2==NULL)
    {
    cout<<"\t\t\t\t\tNo Data Found .....\n\n\t\t\t\t\tReturning.....";
	stop(2);
	return;
	}
	else
	{
	cout<<"\n\t\t\t\t\tThis Student's Data Is Deleted : "<<temp2->Name;
	delete(temp2);
	stop(2);
	return;
	}
    }
	
}
void Display_Q_L()
{
	int n=0;
	Heading("Displaying Menu");
	system("COLOR 6");
	if(Head==NULL)
	{
		cout<<"\n\t\t\t\t\tNoThing To Display (Returning).....";
		stop(2);
		return;
	}
	line();
	cout<<"\t  "<<"(Rec: [1-6])  ||      ID      | "<<"Name              | "<<"CGPA             "<<" | Grade ||\n\t\t\t||..............................................................||\n";
	for(temp2=Head;temp2!=NULL;temp2=temp2->Next)
	{   b++;
	if(b%6==0)
	{
		n=n+6;
	cout<<"\t\t\t||"<<setw(64)<<right<<"||";
	line();	
	cout<<"\n\n\t\t\t\t";
	system("PAUSE");
	Heading("Displaying Menu");
	line();
	cout<<"\t"<<"(Rec: ["<<setw(2)<<right<<n<<"-"<<setw(2)<<left<<n+6<<"])  ||      ID      | "<<"Name              | "<<"CGPA             "<<" | Grade ||\n\t\t\t||..............................................................||\n";
	}
	 cout<<"\t\t\t||\t"<<setw(8)<<left<<temp2->Reg_No<<"| "<<setw(18)<<left<<temp2->Name<<"| "<<setw(17)<<left<<temp2->CGPA
	 <<left<<" | "<<setw(6)<<left<<temp2->C_Grade<<"||"<<endl<<"\t\t\t||"<<"              |                   |                   |       || "<<endl;
	}
	cout<<"\t\t\t||"<<setw(64)<<right<<"||";
	line();	
	cout<<"\n\n\t\t\t\t";
	system("PAUSE");
	n=b=0;
}
void Search(int val)
{
	Heading("Search Results");
	for(temp2=Head;temp2!=NULL;temp2=temp2->Next)
	{
		if(temp2->Reg_No==val)
		break;
	}
	if(temp2==NULL)
	{
		cout<<"\t\tNo Record Found....\n\n\t\tReturning...(*v * )";
		stop(2);
		return;
	}
	line();
	cout<<"\t\t\t||               Name : "<<setw(15)<<left<<temp2->Name<<"\tReg # : "<<setw(5)<<left<<temp2->Reg_No<<"          || ";
	line();
	cout<<"\t\t\t||\t\t\t\t\t\t\t       ||";
	for(int i=0;i<8;i++)
	{
	cout<<"\n\t\t\t||       Semester "<<i+1<<" --->> ";
	cout<<" \tGPA    : "<<setw(5)<<left<<temp2->GPA[i];
	cout<<"    Grade  : "<<setw(3)<<left<<temp2->Grades[i]<<" ||";
    }
    cout<<"\n\t\t\t||\t\t\t\t\t\t\t       ||";
    line();
    cout<<"\t\t\t[->             CGPA  : "<<setw(5)<<left<<temp2->CGPA<<"\tFinal GRADE : "<<setw(15)<<left<<temp2->C_Grade<<"<-]"<<endl;
    line();
    cout<<"\n\t\t\t\t";
    system("PAUSE");
}
void Save()
{
	if(Head==NULL)
	{
	remove("Data.MOHSIN");
    return;
	}
	ofstream File;
	File.open("Data.MOHSIN",ios::out);
	for(temp2=Head;temp2!=NULL;temp2=temp2->Next)
	{
		obj.CGPA=temp2->CGPA;
		obj.C_Grade=temp2->C_Grade;
		for(int i =0;i<8;i++)
		obj.GPA[i]=temp2->GPA[i];
		for(int i =0;i<8;i++)
		obj.Grades[i]=temp2->Grades[i];
		strcpy(obj.Name,temp2->Name);
		obj.Reg_No=temp2->Reg_No;
		File.write((char*)&obj,sizeof(obj));
	}
	File.close();
}
void Load()
{
	ifstream File;
	File.open("Data.MOHSIN",ios::binary);
	File.read((char*)&obj,sizeof(obj));
	if(obj.Reg_No==0)
    File.read((char*)&obj,sizeof(obj));
	if(File)
	{
	while(File)
	{
		ListEntry(obj);
		File.read((char*)&obj,sizeof(obj));
	}
	File.close();
    }
}
void Update(int reg)
{
	for(temp2=Head;temp2!=NULL;temp2=temp2->Next)
	{
		if(temp2->Reg_No==reg)
		{
			Heading("Altering Info");
			cout<<"\t\t\t\t\tChanging Data For Reg # "<<reg;
			cout<<"\n\n\t\t\t\t\tEnter Name        : ";
	cin.ignore();
	cin.getline(temp2->Name,20);
	for(int i=0;i<8;i++)
	{
	cout<<"\t\t\t\t\tEnter Smstr "<<i+1<<" GPA : ";
	cin>>temp2->GPA[i];
	}
	temp2->calc();
	cout<<"\n\t\t\t\t\tAltering Success.......";stop(2);
	return;
		 }   
	}
	if(temp2==NULL)
		{
		cout<<"\n\t\t\t\t\tRecord Not Found .... (Returning ).......";stop(2);
	    return;
		}
}
void LinkList()
{
	Load();
	int ch=-1;
	while(ch!=0)
	{
	system("COLOR E");
	Heading("Main Menu");
	cout<<"\n\t\t\t\t\t[1].Entry\n\t\t\t\t\t[2].Delete\n\t\t\t\t\t[3].Display\n\t\t\t\t\t[4].Search\n\t\t\t\t\t[5].Save\n\t\t\t\t\t[6].Alter Info \n\t\t\t\t\t[0].Back\n\t\t\t    Choice ---> ";
    cin>>ch;
    if(ch==0)
    {
   	cout<<"\n\t\t\t\t\tReturning........\n\t\t\t\t\t";
	stop(1);
    return;
	}
    
    switch(ch)
    {
    	case 1:
    		EntryL();
    		break;
    	case 2:
    		Heading(" Deletion ");
    		cout<<"\t\t\t\t\tEnter Reg # To Delete --> ";
    		int val;
			cin>>val;
    		DeleteL(val);
    		break;
    	case 3:
    		Display_Q_L();
    		break;
    	case 4:
    		Heading("Searching");
    		cout<<"\t\tEnter Reg # To Search : ";
    		int valu;
    		cin>>valu;
    		Search(valu);
    		break;
    	case 5:
    	{
    		int x=6;
    	while(x-->1)
		{
			Heading("Saving");
    		cout<<"\n\t\t\t\t\tSaving....."<<x;
    		stop(1);
    	}
    		Save();
    		break;
        }
        case 6:
        	{
        		Heading("Updating Records");
        		system("COLOR E"); 
        		cout<<"\n\t\t\t\t\tEnter Reg #  (Update Record)\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
        		int reg;
        		cin>>reg;
        		Update(reg);
        	}
        	break;
		default:
    	Wrong();
		break;
		
    	
	}
	
}
}
int main()
{
	LinkList();
}
