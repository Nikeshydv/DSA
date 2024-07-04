#include <iostream>
using namespace std;

void bubble_shot(int a[],int size){
    int temp,flag;
    for(int i=0;i<size;i++){
    flag=0;
        for(int j=0;j<size-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        break;

    }
}

  void print(int a[],int n){
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
        }

int main(){
    int a[5]={17,13,13,7,6};
    print(a,5);
    cout<<endl;
    bubble_shot(a,5);
    print(a,5);
}
