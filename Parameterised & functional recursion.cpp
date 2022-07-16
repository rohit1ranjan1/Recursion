//Parameterised recursion:
#include<iostream>
using namespace std;
void doSum(int n, int sum){
    if(n<1){
        cout<<sum;
        return;
    }
    doSum(n-1,sum+n);
}
int main(){
    doSum(5,0);
}
/*
15
*/
