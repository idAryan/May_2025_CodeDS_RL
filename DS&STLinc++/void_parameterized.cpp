#include <bits/stdc++.h>
using namespace std;
void sayHi(string name){
    cout<<"Hi "<<name<<endl;
}
int main(){
    string name;
    getline(cin,name);
    sayHi(name);
    return 0;
}