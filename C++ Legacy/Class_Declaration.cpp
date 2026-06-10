class stu
{
	private :
		int id;
		char name;
		float fee;
		public :
			void get();
		};
		void stu::get()
			{
				cout<<"enter student id , name , fee";
				cin >>id>>name>>fee;
			}
			cout <<"id="<<id<<endl;
			cout <<"name="<<name <<endl;
			cout <<"fee="<<fee;
}
void main()
{
	stu s;
	s.get();
}
