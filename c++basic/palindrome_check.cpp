#include <bits/stdc++.h>
using namespace std;
// it is important to initialize rev becz it will store garbage value
// ultimately multiplying it by 10 and changing value of rev
bool num_pal(int n){
    int num=n;
    int rev=0;
    while(num!=0){
        int temp=num%10;
        rev=10*rev+temp;
        num=num/10;
    }
    if(n==rev) return true;
    return false;
}

bool string_pal(string n){
    string s=n;
    string rev="";
    for(int i=s.size()-1;i>=0;i--){
        rev+=s[i];
    }
    if(rev==s) return true;
    return false;
}
int main(){
    int a=34;
    int b=4554;
    cout<<"34 :"<<num_pal(34)<<" 4554: "<<num_pal(4554);
    string c="Aryan";
    string d="cryrc";
    cout<<c<<" "<<string_pal(c)<<", "<<d<<" "<<string_pal(d);
    return 0;
}
