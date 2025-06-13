#include <bits/stdc++.h>
using namespace std;
int main(){
    pair <int,int> p;
    p={1,3};
    cout<<p.first<<" "<<p.second<<endl;
    pair <int,pair<int,int>> p1;
    p1={1,{3,4}};
    cout <<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
    pair <int,int> arr[]={{1,4},{3,6},{4,5}};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i=i+1){
        cout<<arr[i].first<<","<<arr[i].second<<" ";
    }
    return 0;



}