//program demonstrate number is prime or not using class and object
#include<iostream.h>
#include<conio.h>
class test
{
	public:
		int cheak(int x)
		{
			int i,p=0;
			for(i=2;i<x;i++)
		   {
			 if(x%i==0)
			{
			   p=1;
			   break;
			}
		    }
		   return p;
		}
};
void main()
{
	clrscr();
	int x,p;
	cout<<"Enter the number:"<<endl;
	cin>>x;
	test obj;
	p=obj.cheak(x);
	if(p==0)
	{
	 cout<<"Number is prime"<<"\t"<<x<<endl;
	}
	else
	{
	 cout<<"Number is not prime"<<"\t"<<x<<endl;
	}
	getch();
};


