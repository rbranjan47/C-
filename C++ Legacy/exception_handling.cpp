#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int a,b;
	
	
	try
	{
		cout<<"enter the value of a and b"<<endl;
		cin>>a>>b;
		if (b==0) throw 0;
		cout<<"division is="<<a/b;
	}
	catch (int x)
	{
		cout<<"division is not possible";
	}
}
