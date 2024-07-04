#include <iostream>
using namespace std;

void selection_short(int a[],int n){
 int index,temp;
 for(int i=0;i<n;i++){
 index=i;
 for(int j=i+1;j<=n;j++){
  if(a[index]>a[j]){
     index=j;

  }
 }
 if(index!=i){
temp=a[i];
a[i]=a[index];
a[index]=temp;


 }
 }

}

int main(){
int arr[6]={12,28,3,7,58,6};
selection_short(arr,6);
 for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";

}
}
