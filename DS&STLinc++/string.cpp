#include <bits/stdc++.h>
using namespace std;
int main(){
    string name;
    cout<<"Enter your name"<<endl;
    getline(cin,name);
    cout<<name<<endl;
    int n=name.size();
    name[n-1]='a';
    cout<<name<<endl;
    return 0;


}