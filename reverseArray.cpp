
#include <iostream>
using namespace std;
int* reverseArray(int *a, int i, int n){
    if(i==n)
    return a;
    
    int swap=a[n];
    a[n]=a[i];
    a[i]=swap;
    a=reverseArray(a,i+1,n-1);
    return a;
}
int main() {
    int arr[5]={1,2,3,4,5};
    arr=reverseArray(&arr[i],0,4);
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
    return 0;
}
