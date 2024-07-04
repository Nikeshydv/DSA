// write a program to create the array of size "n", after creation search the element ask by the users if search operation pass return true; other wise false;


#include <iostream>
using namespace std;

/*void move_zero(int a[],int n){
int j=0;
for(int i=0;i<n;i++){
    if(a[i]!=0){
        a[j]=a[i];
        j++;
    }
}
while(j<n){
    a[j]=0;
    j++;
}

}

 int main(){
int arr[7]={0,1,1,0,1,0,1};
move_zero(arr,7);
for(int i=0;i<7;i++){
    cout<<arr[i]<<" ";
}


}*/

int main(){
int ar[2][3];

for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
            cout<<"enter the data";
        cin>>ar[i][j];
    }
}


for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){

        cout<<ar[i][j]<<" ,";
    }
}

}

