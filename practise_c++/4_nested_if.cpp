#include <bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age<18) cout<<"Not Eligible";
    else if(age<=59){
        cout<<"Eligible";
        if(age>57){
            cout<<", but retire soon.";
        }
    }
    else{
        cout<<"retired";
    }
    return 0;
}