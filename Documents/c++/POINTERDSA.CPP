# include <iostream>
using namespace std;

/*class Employee{
int data;
Employee *next; //self refrence class //(data member)// track all object,
};


struct Employee{
int data;
Employee *next; //self refrence structure.
}*/


//write a program to demonsatrate the self refrence class//


class p25{
  public:
  string name;
  p25 *next;

  p25(string n){
   name=n;
   next=NULL;
  }
};

int main(){
p25 s1("arun"),s2("rahul"),s3("mohit"),s4("nikesh");
s1.next=&s2;
s2.next=&s3;
cout<<s1.name<<endl;
cout<<s1.next<<endl;
cout<<s1.next->name;
cout<<s1.next->next<<endl;
cout<<s1.next->next->name;
cout<<s1.next->next->next->name;

}
