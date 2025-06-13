#include <bits/stdc++.h>
using namespace std;
int main(){
    multimap<int,string> mmp;
    mmp.insert({1,"Aryan"});
    mmp.insert({1,"Julie"});
    for(auto it:mmp){
        cout<<it.first<<":"<<it.second;
    }
    return 0;


}