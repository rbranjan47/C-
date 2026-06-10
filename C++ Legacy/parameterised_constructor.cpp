#include<iostream>
#include<conio.h>
using namespace std ;

class student
{
	char name[20],course[20];
	public :
		student()
{
	student(char name[20],char course[20])   //passing paramterized constructor
	
	(*this).name=name;
	(*this).course=course;
}

void showstudent()
{
	cout<<"name:"<<name<<endl;
	cout<<"course:"<<course<<endl;
}
};
class mark : public student
{
	int m,p,c;
	public :
		mark(char name[20],char course[20],int m, int p,int c);
		{
			student::student(name,course);
			(*this).m=m;
			(*this).p=p;
			(*this).c=c;		
		}
void showmark()
{
	cout<<m<<endl<<p<<enl<<c<<endl;
}
};
void main()
{
	clrscr();
	mark m("ram","mpc",89,75,80);
	m.showstudent();
	m.showmark();
	getch();
}
