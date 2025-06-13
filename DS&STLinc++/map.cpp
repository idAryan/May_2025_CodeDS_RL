#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> mpp;
    map<int,pair<int,int>> mpp1;
    map<pair<int,int>,int> mpp2;
    mpp.insert({1,1});
    mpp.emplace(2,4);
    mpp.insert({5,25});
    mpp.emplace(4,16);
    for(auto it:mpp){
        cout<<it.first<<":"<<it.second<<" ";
    }
    cout<<endl;
    mpp1.insert({1,{2,3}});
    mpp1[2]={5,6};
    for(auto it:mpp1){
        cout<<it.first<<":"<<it.second.first<<","<<it.second.second<<" ";
    }
    mpp2[{2,4}]=8;
    mpp2[{3,7}]=21;
    for(auto it:mpp2){
        cout<<it.first.first<<"*"<<it.first.second<<it.second<<" ";
    }
    cout<<endl;
    mpp2.erase(mpp2.find({2,4}));
    for(auto it:mpp2){
        cout<<it.first.first<<"*"<<it.first.second<<it.second<<" ";
    }


    return 0;
}