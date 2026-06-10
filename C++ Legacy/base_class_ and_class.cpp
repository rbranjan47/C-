#include<iostream>
#include<conio.h>
using namespace std;

class test
{
	public:
		test()
		{
			cout <<"i am constructor"<<endl;
		}
		~test()
		{
			cout<<"i am destructor"<<endl;
		}
};


int main()
{
	try
	{
		cout <<"welcome to exception handling"<< endl;
		test t;
		 
		 throw 10;
		 cout<<"checking destructore"<<endl;
	}
	catch(...)
	{
		cout<<"thank you";
	}
}
