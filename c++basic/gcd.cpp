#include <bits/stdc++.h>
using namespace std;
int findGCF(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return findGCF(b,a%b);
    }
}
int main(){
    int a=12;
    int b=4;
    cout<<findGCF(a,b);
    return 0;
}