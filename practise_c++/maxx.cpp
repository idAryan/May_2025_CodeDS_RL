#include <bits/stdc++.h>
using namespace std;
int maxx(int a,int b){
    if(a>=b){
        return a;
    }
    return b;
}
int main(){
    cout<<maxx(4,6);
    return 0;
}