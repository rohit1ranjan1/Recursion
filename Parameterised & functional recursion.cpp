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

//Functional recursion
1.
#include<iostream>
using namespace std;
int doSum(int n, int sum){
    if(n<1){
        return sum;
    }
    sum=doSum(n-1,sum+n);
    return sum;
}
int main(){
    int sum=doSum(5,0);
    cout<<sum;
}
/*
15
*/

2.
    #include<iostream>
using namespace std;
int doSum(int n){
    int sum;
    if(n<1){
        return 0;
    }
    sum=n+doSum(n-1);
    return sum;
}
int main(){
    int sum=doSum(10);
    cout<<sum;
}
/*
55
*/
