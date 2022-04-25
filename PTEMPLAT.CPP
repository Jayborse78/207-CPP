#include<iostreame.h>
#include<conio.h>
template<class p>
void swap(p a,p b)
{
	p r;
	r=a;
	a=b;
	b=r;
	cout<<"A is:"<<a<<endl;
	cout<<"B is:"<<b<<endl;
}
void main()
{
	clrscr();
	swap(10,20);
	cout<<"\n";
	swap(11.5,7.55);
	cout<<"\n";
	swap('r','p');
	getch();
}