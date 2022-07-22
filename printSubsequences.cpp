#include<bits/stdc++.h>
using namespace std;
void subsequences(int ind, vector<int> &v, int arr[], int n){
    if(ind>=n){                                          //base condition
        for(auto it:v){
            cout<<it<<" ";
        }
        if(v.size()==0)
        cout<<"{}";
        cout<<endl;
        return;
    }
    //take or pick the element at index into suseqeunce.
    v.push_back(arr[ind]);
    subsequences(ind+1,v,arr,n);
    
    //not take the element at index into subseqeunce.
    v.pop_back();
    subsequences(ind+1,v,arr,n);
    
}
int main(){
    int arr[]={3,1,2};
    vector<int> v;
    subsequences(0,v,arr,sizeof(arr)/4);
}

/*
3 1 2 
3 1 
3 2 
3 
1 2 
1 
2 
{}


int arr[]={1,2,3,4,5};

1 2 3 4 5 5
1 2 3 4 5
1 2 3 5 5
1 2 3 5
1 2 4 5 5
1 2 4 5
1 2 5 5
1 2 5
1 3 4 5 5
1 3 4 5
1 3 5 5
1 3 5
1 4 5 5
1 4 5
1 5 5
1 5
2 3 4 5 5
2 3 4 5
2 3 5 5
2 3 5
2 4 5 5
2 4 5
2 5 5
2 5
3 4 5 5
3 4 5
3 5 5
3 5
4 5 5
4 5
5 5
{}5


*/
