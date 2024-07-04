#include <iostream>
using namespace std;

int main(){
int *p=new int;
cout<<"address random heaap section---->"<<p<<endl;
*p=90;
*p=*p+10;
cout<<"data fetch dereference"<<*p<<endl;
delete(p);
cout<<"data fetch dereference"<<*p<<endl;

}
