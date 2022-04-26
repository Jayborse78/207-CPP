//proigram demonstrate single inheritance
#include<iostream.h>
#include<conio.h>
class rollno
{
	private:
		int rollno;
	public:
		void get();
		void put();
};
class student:public rollno
{
	private:
		char name[20];
	public:
		void getb();
		void putb();
};
void rollno::get()
{
	cout<<"Enter Rollno:"<<endl;
	cin>>rollno;
}
void rollno::put()
{
	cout<<"Roll no is:"<<rollno<<endl;
}
void student::getb()
{
	cout<<"Enter Name Here:"<<endl;
	cin>>name;
}
void student::putb()
{
	cout<<"Name is:"<<name<<endl;
}
void main()
{
	clrscr();
	student s1;
	s1.get();
	s1.put();
	s1.getb();
	s1.putb();
	getch();
}