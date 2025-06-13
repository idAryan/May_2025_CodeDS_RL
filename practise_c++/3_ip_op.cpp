#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    int y;
    char character;
    string name;
    string str;
    cin>>x>>y;
    cin>>character;
    cin.ignore();
    getline(cin,name);
    cout<<x<<" "<<y<<endl;
    cout<<name<<endl;
    return 0;
}