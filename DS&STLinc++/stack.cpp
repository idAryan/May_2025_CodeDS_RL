#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(1);
    st.push(5);
    st.emplace(4);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    stack<int> st1;
    st1.push(100);
    st1.emplace(200);
    st.swap(st1);
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;
    return 0;
}