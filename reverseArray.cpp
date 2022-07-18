#include <iostream>
using namespace std;
void reverseArray(int a[], int i, int n){
    if(i==n)
    return;
    
    int swap=a[n];
    a[n]=a[i];
    a[i]=swap;
    reverseArray(a,i+1,n-1);
    return;
}
int main() {
    int arr[5]={1,2,3,4,5};
    reverseArray(arr,0,4);
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
    return 0;
}

/*
5 4 3 2 1
*/
