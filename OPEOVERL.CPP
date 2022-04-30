//program demonstrate operator overloading using friend function
#include<iostream.h>
#include<conio.h>
class base
{
	private:
		 int a,b,c,d,e;
	public:
		void get();
		void operator-();
		void show();
};
void base::get()
{
	cout<<"****************INPUT******************"<<endl;
	cout<<"Enter value of A:"<<endl;
	cin>>a;
	cout<<"Enter value of B:"<<endl;
	cin>>b;
	cout<<"Enter value of C:"<<endl;
	cin>>c;
	cout<<"Enter value of D:"<<endl;
	cin>>d;
	cout<<"Enter value of E:"<<endl;
	cin>>e;
}
void base::operator-()
{
	a=-a;
	b=-b;
	c=-c;
	d=-d;
	e=-e;
}
void base::show()
{
	cout<<"*****************OUTPUT************************"<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<"A"<<"\t\t"<<"B"<<"\t\t"<<"C"<<"\t\t"<<"D"<<"\t\t"<<"E"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	cout<<a<<"\t\t"<<b<<"\t\t"<<c<<"\t\t"<<d<<"\t\t"<<e<<endl;

}
void main()
{
	clrscr();
	base b1;
	b1.get();
	-b1;
	b1.show();
	getch();
}
