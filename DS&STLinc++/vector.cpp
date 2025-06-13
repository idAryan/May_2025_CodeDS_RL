#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(4);
    v.push_back(3);
    v.emplace_back(1);
    v.push_back(6);
    v.emplace_back(0);
    int n=v.size();
    for(int i=0;i<n;i=i+1){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector <pair<int,int>> vect;
    vect.push_back({1,3});
    vect.emplace_back(2,4);
    vect.push_back({6,7});
    vect.emplace_back(4,6);
    n=vect.size();
    for(int i=0;i<n;i=i+1){
        cout<<"("<<vect[i].first<<","<<vect[i].second<<")";
    }
    cout<<endl;
    vector <int> v1(5);
    vector <int> v2(5,10);
    n=v2.size();
    for(int i=0;i<n;i=i+1){
        cout<<v2[i]<<" ";
    }


    return 0;

}