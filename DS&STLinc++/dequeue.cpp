#include <bits/stdc++.h>
using namespace std;
int main(){
    deque <int> dq;
    dq.push_back(1);
    dq.emplace_back(3);
    dq.push_back(6);
    dq.push_front(7);
    dq.emplace_front(0);
    for(deque<int>:: iterator it=dq.begin();it!=dq.end();it++){
        cout<<*(it)<<" ";

    }
    dq.pop_front();
    cout<<endl;
    for(deque<int>::iterator it=dq.begin();it!=dq.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    dq.pop_back();
    for(deque<int>::iterator it=dq.begin();it!=dq.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    cout<<dq.back()<<endl;
    cout<<dq.front()<<endl;
    return 0;


}