#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(5);
    l.push_back(4);
    l.emplace_back(5);
    list<int>l1;
    l1.push_back(3);
    l1.emplace_back(4);
    list<int>::iterator n=l.end();
    n--;
    l.insert(n,l1.begin(),l1.end());
    for(list<int>::iterator it=l.begin();it!=l.end();it++){
        cout<<*(it)<<" ";

    }
    cout<<endl;
    // swap
    l.swap(l1);
    cout<<"This is l"<<endl;
    for(list<int>::iterator it=l.begin();it!=l.end();it++){
        cout<<*(it)<<" ";

    }
    cout<<endl;
    cout<<"This is l1"<<endl;
    for(list<int>::iterator it=l1.begin();it!=l1.end();it++){
        cout<<*(it)<<" ";

    }
    l.clear();
    cout<<endl;
    cout<<l.empty();
    return 0;

}