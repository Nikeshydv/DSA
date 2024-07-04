//Data structure//

// structer in cpp//
#include<iostream>
using namespace std;

struct Student1{
int roll;
string name;
void f1(){
cout<<"this is the structure function";
}

};

class Student{
public:
int roll;
string name;

};

int main(){
    // this is stack memory popinter//
Student1 obj;
obj.name="Nikesh";
obj.roll=101;
cout<<obj.name<<endl;
cout<<obj.roll<<endl;
obj.f1();

// call the body by using pointer in static//
Student1 var,*p;
p=&var;
var.name="ajay";
var.roll=101;
cout<<p->name<<endl;
cout<<p->roll;



}

