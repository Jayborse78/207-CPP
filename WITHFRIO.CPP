//program demonstrate operator overloading using friend function
#include<iostream.h>
#include<conio.h>
class base
{
	private:
		int a,b,c;
	public:
		void get();
		base friend operator-(base &x);
		void put();
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
}
base operator-(base &x)
{
	x.a=-x.a;
	x.b=-x.b;
	x.c=-x.c;
}
void base::put()
{
	cout<<"*****************OUTPUT************************"<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<"A"<<"\t\t"<<"B"<<"\t\t"<<"C"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	cout<<a<<"\t\t"<<b<<"\t\t"<<c<<endl;
}
void main()
{
	clrscr();
	base b1;
	b1.get();
	-b1;
	b1.put();
	getch();
}

