#include <bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if(age<18){
        cout<<"Not Eligible";
    }
    else if(age<=57){
        cout<<"Elgible";
        if(age>55){
            cout<<" ,but Retire soon.";
        }
    }
    else{
        cout<<"Not Eligible";
    }
    return 0;

}