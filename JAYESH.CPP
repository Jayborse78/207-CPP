#include<iostreame.h>
#include<conio.h>
void main()
{
	int no,r,rev=0;
	clrscr();
	cout<<"Enter the number:";
	cin>>no;

	while(no>0)
	{
	  r=no%10;
	  rev=(rev*10)+r;
	  no=no/10;

	}
	cout<<"Reverse number is:"<<rev;
	getch();
}
