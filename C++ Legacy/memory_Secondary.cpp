#include<fstream.h>
#include<iostream>
#include<conio.h>


class stu
{
	int id;
	char name[20];
	
	public:
			void getstu()
			{
				cout<<"enter the student id and name"<<endl;
				cin>>id>>name;
			}
		};
		
		void main()
		{
			stu s;
			ofstream file ("stu.dat");
			file.open(stu.dat);
			
			char op;
			do
			{
				file.write((char *) &s, size[s]);
				cout<<"one row created"<<endl;
				cout<<"any more you want to create [y/n]";
				cin>>op;
			}
			while(op=='y'|| op=='n')
			file.close();
		}
