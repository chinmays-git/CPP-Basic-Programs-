// Multilevel inheritance 

#include<iostream.h>
#include<conio.h>


class student
{
 protected:
  int rollno,age;
 public:
  void getdata();
  void putdata();
 };

//Input data
void student::getdata()
{
 cout<<"Enter the roll number & age of student:\n";
 cin>>rollno>>age;
 }

//Output data
void student::putdata()
{
 cout<<"\nRoll number of student is:\t"<<rollno<<endl;
 cout<<"\nAge of student is:\t"<<age<<endl;
 }


class test:public student
{
 protected:
  int mark1,mark2;
 public:
  void getmarks();
  void putmarks();
 };
void test::getmarks()
{
 cout<<"\nEnter the marks of two subjects:\t";
 cin>>mark1>>mark2;
 }
void test::putmarks()
{
 cout<<"\nMarks in first subject is:\t"<<mark1<<endl;
 cout<<"\nMarks in second subject is:\t"<<mark2<<endl;
 }
class result:public test
{
 int total;
 public:
  void display();
 };
void result::display()
{
 total=mark1+mark2;
 putdata();
 putmarks();
 cout<<"\nTotal marks in two subjects are:\t"<<total<<endl;
}
void main()
{
 clrscr();
 result std1;
 std1.getdata();
 std1.getmarks();
 std1.display();
 getch();
}



