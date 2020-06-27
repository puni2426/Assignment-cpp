/*Write a C++ program to enter the details of students and display them using class and object. The details should be private in nature and use public members function to access the private members.
*/
#include<iostream>
using namespace std;
class student
{
	private:
		
			char name[20],usn[10],branch[10];
			int sem;
	public:
		void input();
		void display();
			
		
};
void student::input()
{
	cout<<"Enter Name:";
	cin>>name;
	cout<<"Enter USN:";
	cin>>usn;
	cout<<"Enter Branch:";
	cin>>branch;
	cout<<"Enter Sem:";
	cin>>sem;
}
void student::display()
{
	cout<<"\nName:"<<name;
	cout<<"\nUSN:"<<usn;
	cout<<"\nBranch:"<<branch;
	cout<<"\nSem:"<<sem;
}
int main()
{
	student s;
	s.input();
	s.display();
}
