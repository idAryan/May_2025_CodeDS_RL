#include <bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    q.push(5);
    q.emplace(2);
    q.push(1);
    q.push(3);
    cout<<q.back()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.back()+=5;
    cout<<q.back()<<endl;
    cout<<q.size();
    return 0;
}