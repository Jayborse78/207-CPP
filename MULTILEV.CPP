//program demonstrate multilevel inheritance
#include<iostreame.h>
#include<conio.h>
class student
{
	private:
		int rollno;
	public:
		void getput();

};
class name:public student
{
	private:
		char name[20];
	public:
		void putting();

};
class address:public name
{
	private:
		char city[15];
	public:
		void getput1();
};
void student::getput()
{
	cout<<"Enter Rollno:"<<endl;
	cin>>rollno;
	cout<<"Rollno is:"<<rollno<<endl;
}
void name::putting()
{
	cout<<"Enter Name Here:"<<endl;
	cin>>name;
	cout<<"Name is :"<<name<<endl;
}
void address::getput1()
{
	cout<<"Enter city:"<<endl;
	cin>>city;
	cout<<"City is:"<<city<<endl;
}
void main()
{
	clrscr();
	address s1;
	s1.getput();
	s1.putting();
	s1.getput1();
	getch();
}
