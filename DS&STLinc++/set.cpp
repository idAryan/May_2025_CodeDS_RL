#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    s.insert(1);
    s.insert(3);
    s.emplace(5);
    s.insert(3);
    s.emplace(8);
    for(set<int>::iterator it=s.begin();it!=s.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    cout<<s.count(1)<<endl;
    cout<<s.count(10)<<endl;
    auto it1=s.find(5);
    auto it2=s.find(8);
    s.erase(it1,it2);
    for(set<int>::iterator it=s.begin();it!=s.end();it++){
        cout<<*(it)<<" ";
    }

    return 0;
}