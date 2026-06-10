#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	try 
	{
		cout<<"we are throwing a value"<<endl;
		throw 1;
	}
	catch (int x)
{
		cout<<x<<ends<<"catched data is "<<endl;
}
	cout<<"here throw and catch functions"<<endl;
}
