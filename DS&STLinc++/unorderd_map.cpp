#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,string> umap;
    umap.insert({1,"Aryan"});
    umap.emplace(3,"Julie");
    umap.insert({4,"Julien"});
    umap.insert({1,"Altair"});
    for(unordered_map<int,string>::iterator it=umap.begin();it!=umap.end();it++){
        cout<<it->first<<" : "<<it->second;
    }
    cout<<endl;
    for(auto it:umap){
        cout<<it.first<<" : "<<it.second<<" ";
    }
}