#include <bits/stdc++.h>
using namespace std;
int main(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(3);
    ms.emplace(4);
    ms.emplace(1);
    ms.insert(4);
    for(auto it:ms){
        cout<<it<<" ";
    }
    cout<<endl;
    ms.erase(ms.find(1));
    for(auto it:ms){
        cout<<it<<" ";
    }
    return 0;
}