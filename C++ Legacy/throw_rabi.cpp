#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	try
	{
		cout<<"i am going to throw my name"<<endl;
		throw 1;
		cout<<"already throwed my name"<<endl;
	}
	catch(int x)
	{
		cout<<x<<ends<<"my name is RABI"<<endl;
	}
	cout<<"This is result"<<endl;
}
