//program to demonstrate function template
#include<iostream.h>
#include<conio.h>
template<class T>
void swap(T a,T b)
{
	T t;
	t=a;
	a=b;
	b=t;
	cout<<"A is:"<<a<<endl;
	cout<<"B is :"<<b<<endl;
}
void main()
{
	clrscr();
	cout<<"Integer value"<<endl;
	int a,b;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	swap(a,b);
	cout<<"Float value"<<endl;
	float p,q;
	cout<<"Enter two numbers"<<endl;
	cin>>p>>q;
	swap(p,q);
	getch();

}


