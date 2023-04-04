#include<iostream>
using namespace std;

class student
{
	private:
		int rollno;
		float marks;
	public:
		student() // default constructor 
		{
		  rollno=0;
		  marks=0.0f;

		}
// parameterized constructor 
		
		 student(int r,float m)
		{
		  rollno=r;
		  marks=m;
		}

// copy constructor 
		
		student(student &t)
		{
		  rollno=t.rollno;
		  marks=t.marks;
		}

//  member function to get data from user
		void getdata()
		{
		 cout<<"enter roll number "<<endl;
		 cin>>rollno;
		 cout<<"enter marks"<<endl;
		 cin>>marks;
		}

// member function to show data 
		void showdata()
		{
		  cout<<"rollno="<<rollno<<endl;
		  cout<<"marks="<<marks<<endl;
		}
		~student() // destructor 
		{}
};

int main()
{
	student s1;
	s1.showdata(); // default constructor
	student s2(1,99.8);
	s2.showdata();
	student s3(s2);
	s3.showdata();

}
