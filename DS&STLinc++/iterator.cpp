#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(5);
    v.emplace_back(2);
    v.push_back(1);
    v.push_back(9);
    vector<int>:: iterator it=v.begin();
    vector<int>:: iterator e=v.end();
    e--;
    cout<<*(it)<<endl;
    cout<<*(e)<<endl;
    cout<<v[0]<<endl;
    cout<<v.at(3)<<endl;
    for(vector<int>::iterator i=v.begin();i!=v.end();i=i+1){
        cout<<*(i)<<" ";
    }
    return 0;
}