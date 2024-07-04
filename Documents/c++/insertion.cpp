#include <iostream>
using namespace std;

void insertion_sort(int a[],int size){
    int key,j;
    for(int i=0;i<size;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
                cout<<j<<" <<---- "<<endl;
            a[j+1]=a[j];
            cout<<j<<" *<-"<<endl;
            j--;
           cout<<j<<" <<<--";
        }
            j++;
        a[j]=key;
    }

}
int main(){
    int a[6]={23,2,45,11,8,21};
    for(int i=0;i<6;i++)
        cout<<a[i]<<" ";
        cout<<endl;
        insertion_sort(a,6);

        for(int i=0;i<6;i++)
            cout<<a[i]<<" ";
}
