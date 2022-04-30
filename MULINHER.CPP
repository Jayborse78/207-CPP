//program demonstrate multiple inheritance
#include<iostream.h>
#include<conio.h>
class a
{
	private:

		char name[20];

	public:
		void get3();

};
class b
{
	private:
		int rollno;
	public:
		void get2();

};
class c:public a,public b
{
	private:
		char city[10];
	public:
		void get4();
};
void a::get3()
{
	cout<<"Enter The Name:"<<endl;
	cin>>name;
	cout<<"Name is:"<<name<<endl;
}
void b::get2()
{
	cout<<"Enter Rollno:"<<endl;
	cin>>rollno;
	cout<<"Rollno is:"<<rollno<<endl;
}
void c::get4()
{
	cout<<"Enter City:"<<endl;
	cin>>city;
	cout<<"City is:"<<city<<endl;
}
void main()
{
	clrscr();
	c a1;
	a1.get3();
	a1.get2();
	a1.get4();
	getch();
}