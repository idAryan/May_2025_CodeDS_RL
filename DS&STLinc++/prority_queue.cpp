#include <bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(3);
    pq.push(1);
    pq.push(8);
    pq.emplace(7);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    return 0;
}
// max_heap