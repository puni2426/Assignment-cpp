/*Write a C++ program to enter the details of students and display them using class and object. The details should be private in nature and use public members function to access the private members.(Define the member function outside the class).
*/

 
#include <iostream>
using namespace std;
 
#define MAX 10
 
class student
{
    private:
        char  name[30];
        int   rollNo;
        int   total;
        float perc;
    public:
    
        void getDetails(void);

        void putDetails(void);
};
 
void student::getDetails(void){
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter total marks outof 500: ";
    cin >> total;
     
    perc=(float)total/500*100;
}
 

void student::putDetails(void){
    cout << "Student details:\n";
    cout << "Name:"<< name << ",Roll Number:" << rollNo << ",Total:" << total << ",Percentage:" << perc;
}
 
int main()
{
    student std[MAX];       //array of objects creation
    int n,loop;
     
    cout << "Enter total number of students: ";
    cin >> n;
     
    for(loop=0;loop< n; loop++){
        cout << "Enter details of student " << loop+1 << ":\n";
        std[loop].getDetails();
    }
     
    cout << endl;
     
    for(loop=0;loop< n; loop++){
        cout << "Details of student " << (loop+1) << ":\n";
        std[loop].putDetails();
    }
     
    return 0;
}
