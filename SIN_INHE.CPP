#include<iostream.h>
#include<conio.h>
class art
{
protected:
	   char name[20];
	   int mark;
public:
       void get()
       {
       cout<<"\nEnter the name of studant:-";
       cin>>name;
       cout<<"\nEnter the mark of studant:-";
       cin>>mark;
       }
     };
     class result:public art
     {
     public:
	void display()
	{
	cout<<"\nName of studant:-"<<name;
	cout<<"\nMark of studant:-"<<mark;
	}
       };
       void main()
       {
       clrscr();
       result r;
       r.get();
       r.display();
       getch();
       }