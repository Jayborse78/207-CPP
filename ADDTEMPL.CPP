#include<iostream.h>
#include<conio.h>
template<class A>
void add(A a,A b)
{
	A c;
	c=a+b;
	cout<<"C is:"<<c<<endl;
}
template<class S>
void sub(S a,S b)
{
	S c;
	c=a-b;
	cout<<"C is:"<<c<<endl;
}
void main()
{
	clrscr();
	int a,b;
	cout<<"Enter 2 numbers"<<endl;
	cin>>a>>b;
	add(a,b);
	sub(a,b);
	float p,d;
	cout<<"Enter two numbers"<<endl;
	cin>>p>>d;
	add(p,d)
	sub(p,d);
	getch();
}

