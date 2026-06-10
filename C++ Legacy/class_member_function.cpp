#include<string>
#include<iostream>
class emp
{
	int eid;
	char ename[20];
	float sal;
	
	public :
		void getemp(int id, char name, float basic );
		void putemp();
};

void emp::getemp(int id, char name, float basic);
{
	empid=id;
	strcpy(ename, name);
	sal=basic;
}

void emp::putemp()
{
	cout << "Empid="<<empid<<endl;
	cout <<"Ename=" <<ename<<endl;
	cout <<"Sal" sal;
}
void main(}
{
	emp e;
	clrscr();
	e.getemp(100,"kishor",10000);
	e.putemp();
	getch();
}
