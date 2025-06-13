#include <bits/stdc++.h>
using namespace std;
int main(){
    priority_queue <int,vector<int>,greater<int>> pq;
    pq.push(3);
    pq.push(7);
    pq.push(1);
    pq.emplace(10);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top();
    return 0;
}