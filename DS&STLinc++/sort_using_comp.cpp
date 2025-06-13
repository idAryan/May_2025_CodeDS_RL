#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> v1,pair<int,int> v2){
    if(v1.second<v2.second) return true;
    if(v1.second>v2.second) return false;
    if(v1.first>v2.first) return true;
    return false;
}
int main(){
    vector <pair<int,int>> p;
    p.push_back({2,4});
    p.push_back({1,3});
    p.push_back({1,7});
    p.push_back({3,6});
    p.push_back({6,7});
    p.emplace_back(2,5);
    // sort according to second element in ascending order
    // if equal then sort according to first element in descending order
    sort(p.begin(),p.end(),comp);
    for(auto it:p){
        cout<<it.first<<": "<<it.second<<endl;
    }
    return 0;

}