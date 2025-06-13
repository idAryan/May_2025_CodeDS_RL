#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(auto v:arr){
        cout<<v<<" ";
    }
    return 0;
}