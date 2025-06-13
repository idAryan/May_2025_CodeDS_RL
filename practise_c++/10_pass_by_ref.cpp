#include <bits/stdc++.h>
using namespace std;
int add5(int &a){
    a=a+5;
    return a;
}
int main(){
    int x=0;
    cout<<x<<endl;
    cout<<add5(x)<<endl;
    cout<<x;
    return 0;

}