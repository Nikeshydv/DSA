# include <iostream>
using namespace std;

/*void f1(){

f1();
cout<<" this is function f1\n";
}

int main(){
f1();

}*/

// write a program t find the factorial of the number using recursion term;//


/*int fact(int n){
if(n<0){
    cout<<"No factorial of negative number";
    return 0;
}
else if(n==0||n==1){
    return 1;
}
else{
    return n*fact(n-1);//recursion
}


}

int main(){
cout<< fact(1);
}*/




// write a program to build the fibonacci series //
static int count;
int fibo(int n){
 count++;
if (n==0||n==1){
        return n;


}
else {
    return fibo(n-1)+fibo(n-2);

}
}

int main(){
int n;
cout<<"enter the range"<<endl;
cin>>n;
for(int i=0;i<n;i++)
   cout<<fibo(i)<<" ";
   cout<<"endl"<<count;



}


/*0              1             1            2               3           5           8
fibo(0)      fibo(1)        fibo(2)      fibo(3)         fibo(4)     fibo(5)      fibo(6)*/






