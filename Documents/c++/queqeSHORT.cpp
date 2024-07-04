#include <iostream>
using namespace std;
#include <algorithm>

int partition(int a[],int lower,int upper){
    int i=lower,u=upper;
    int temp;
    int pivot=a[lower];
    while(i<j){
        while(a[i]<=pivot){}
        i++;
    }
    while(a[j]>pivot){
        j--
    }
    if(i<j){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }

    if(a[j]>a[lower])
}

void quick_sort(int a[],int lower,int upper){
if(lower<upper){
    int pos=partition(a,lower,upper);
    quick_sort(a,lower,pos-1);
    quick_sort(a.pos+1,upper);
}

}
