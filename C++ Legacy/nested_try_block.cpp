#include<iostream>
#include<conio.h>
using namespace std;
 
 
 int main()
 {
 	try 
 	{
 		cout<<"welcome"<<endl;
 		
 		try
 		{
 			cout<<"inner try block"<<endl;
 			throw 10;
		 }
		 catch (int x)
		 {
		 	cout <<"catching inner thrown value"<<endl;
		 	throw x;
		 }
	 }
	 catch (int y)
	 {
	 	cout<<"outer try block";
	 }
 }
