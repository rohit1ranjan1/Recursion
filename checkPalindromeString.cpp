#include <iostream>
using namespace std;
bool reverseArray(char a[], int i, int n){
    if(i>=n)
    return true;
    
    if(a[i]!=a[n]){
        cout<<"Not palindrome!";
        return false;
    }
    
    bool ifP=reverseArray(a,i+1,n-1);
    return ifP;
}
int main() {
    char arr[4]={'a','b','c','d'};
    if(reverseArray(arr,0,3))
    cout<<"Palindrome!";
    return 0;
}

/*
Not palindrome!
*/

/*
char arr[5]={'a','b','c','b','a'};
    if(reverseArray(arr,0,4))
    
    Palindrome!
*/
