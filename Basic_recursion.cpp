#include<iostream>
using namespace std;
void printName(int n){
    if(n>0){
    cout<<"Rohit Ranjan."<<endl;
    n--;    
    printName(n);
    }
    else
    return;
}
int main(){
    printName(5);
}

/*
Rohit Ranjan.
Rohit Ranjan.
Rohit Ranjan.
Rohit Ranjan.
Rohit Ranjan.
*/

#include<iostream>
using namespace std;
void printNumber(int n){
    if(n>0){
    cout<<n<<" ";
    n--;    
    printNumber(n);
    }
    else
    return;
}
int main(){
    printNumber(10);
}

/*
10 9 8 7 6 5 4 3 2 1 
*/

//print 0 to n;
#include<iostream>
using namespace std;
void printNumber(int n,int i){
    if(n>=i){
        cout<<i<<" ";
        i++;
        printNumber(n,i);
    }
    else return;
}
int main(){
    printNumber(10,0);
}
/*
0 1 2 3 4 5 6 7 8 9 10 
*/
