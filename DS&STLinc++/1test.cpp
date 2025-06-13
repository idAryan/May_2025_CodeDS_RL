#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> &a,pair<int,int> &b){
    return a.first>b.first;
}
int main(){
    vector <pair <int,int>> arr={{1,4},{3,6},{4,5}};
    arr.push_back({8,9});
    cout<<arr[0].first<<endl;
    sort(arr.begin(),arr.end(),comp);
    for(int i=0;i<arr.size();i=i+1){
        cout<<arr[i].first<<","<<arr[i].second<<" ";
    }
    return 0;



}