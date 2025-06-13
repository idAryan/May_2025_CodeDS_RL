#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[4]={1,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(auto it:arr){
        cout<<it<<" ";
    }
    cout<<endl;
    vector <int> v={11,6,3,9};
    sort(v.begin(),v.end());
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    sort(arr,arr+n,greater<int>());
    sort(v.begin(),v.end(),greater<int>());
    for(auto it:v){
        cout<<it<<" ";
    }
    return 0;




}