#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int> st;
    st.insert(2);
    st.emplace(5);
    st.insert(1);
    st.insert(1);
    for(auto it:st){
        cout<<it<<" ";
    }
    cout<<endl;
    st.erase(st.find(5));
    for(auto it:st){
        cout<<it<<" ";
    }
    return 0;

}