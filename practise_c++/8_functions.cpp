#include <bits/stdc++.h>
using namespace std;
void v_non_para(){
    cout<<"Hello"<<endl;
}
void v_para(string Name){
    cout<<"Hello "<<Name<<endl;
}
int r_non_para(){
    return 4.5;
}
int r_para(int a,int b){
    return a*b;
}
int main(){
    v_non_para();
    v_para("Aryan");
    cout<<r_non_para()<<endl;
    cout<<r_para(4,6)<<endl;
    return 0;
}