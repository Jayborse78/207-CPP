//program demonstrate friend function
#include<iostream.h>
#include<conio.h>
class demo
{
	private:
		int a;
	public:
		friend void input(demo m);//friend function

};
void input(demo m)
{
	cout<<"Enter the value of A:-"<<"\t\t";
	cin>>m.a;
	cout<<"Input number is:-"<<"\t\t\t"<<m.a<<endl;
}
void main()
{
	clrscr();
	demo d1;
	input(d1);
	getch();
}
