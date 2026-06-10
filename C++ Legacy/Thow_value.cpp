#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	try 
	{
		cout<<"before throw"<<endl;
		throw 1;
		cout << "after throw"<<endl;
	}
	catch (int x)
	{
		cout<<x<<ends<<"is printed ";;
	}
	cout<<"thank you";
}
