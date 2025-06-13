#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.emplace_back(3);
    v.push_back(6);
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    v.insert(v.begin(),2,5);
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int> v1(2,3);
    v.insert(v.begin(),v1.begin(),v1.end());
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    // swap
    vector <int> v2={1,3,4,6};
    vector <int> v3={100,300,400,200};
    cout<<"This is v2 ";
    for(auto it=v2.begin();it!=v2.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"This is v3 ";
    for(auto i:v3){
        cout<<i<<" ";
    }
    cout<<endl;
    v2.swap(v3);
    cout<<"This is v2 ";
    for(auto it=v2.begin();it!=v2.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"This is v3 ";
    for(auto i:v3){
        cout<<i<<" ";
    }
    cout<<endl;
    // popping
    cout<<"Popped last from v3 "<<endl;
    v3.pop_back();
    for(vector<int>::iterator it=v3.begin();it!=v3.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"Erased v"<<endl;
    v.clear();
    
    cout<<v.empty()<<endl;


    return 0;

}