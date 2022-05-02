//program demonstrate single inheritance
#include<iostream.h>
#include<conio.h>
class student
{
	private:
		int rollno;
	public:
		void getput();
};
class data:public student
{
	private:
		char name[20];
		char city[16];
	public:
		void getput1();
};
void student::getput()
{
	cout<<"Enter rollno:";
	cin>>rollno;
	cout<<"Rollno is:"<<rollno<<endl;
}
void data::getput1()
{
	cout<<"Enter Your Name:";
	cin>>name;
	cout<<"Entered Name is:"<<name<<endl;
	cout<<"Enter Your City:";
	cin>>city;
	cout<<"Entered City is:"<<city<<endl;
}
void main()
{
	clrscr();
	data s1;
	s1.getput();
	s1.getput1();
	getch();
}