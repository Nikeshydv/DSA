#include <iostream>
using namespace std;

void bubble_shot(int a[],int size){
    int temp;
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

    }
}

  void print(int a[],int n){
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
        }

int main(){
    int a[5]={17,14,3,21,5};
    print(a,5);
    cout<<endl;
    bubble_shot(a,5);
    print(a,5);
}
