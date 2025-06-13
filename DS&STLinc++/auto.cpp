#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(4);
    v.push_back(1);
    v.emplace_back(3);
    v.push_back(5);
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}