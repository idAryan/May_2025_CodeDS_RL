#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,4,5,8,8};
    vector<int> v1;
    for(vector<int>::iterator it=v.begin();it!=v.begin()+3;it++){
        v1.push_back(*(it));
    }
    v.swap(v1);
    for(auto it:v1){
        cout<<it<<" ";
    }
    return 0;

}