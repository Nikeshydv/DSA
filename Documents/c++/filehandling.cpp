# include <iostream>
# include <fstream>

using namespace std;



string palin(int num){
int sum,temp,r;
temp=num;

while(num!=0){
    r=num%10;
    sum+=10*r;
    num/=10;
}
if(temp=sum){
    return "yes";
}
else
    return "no";




}

int main(){
int num;
string result;
cout<<"enter the number:";
cin>>num;
result=palin(num);
cout<<result;

}













