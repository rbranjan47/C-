#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
// int a, b;
 
 try
// {
 //	cout<<"enter the value of a and b \n";
 //	cin>>a>>b;
 //	if (b==0) throw 0;
 //	cout<<"division is "<<a/b;
 //}
 //catch (int x)
 //{
 //	cout<<"division is not possible";
 //}


{
	cout<<"before throw";
	throw 1;
	cout<<"after throw";
}
catch(int x)
{
	cout<<x<<ends<<"is printed";

cout<"thank you";
}
}


