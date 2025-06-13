#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    switch(n){
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        default:
            cout<<"Other days";
            break;
    }
    return 0;
}