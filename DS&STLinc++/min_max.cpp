#include <bits/stdc++.h>
using namespace std;
int maxx(int a,int b){
    if(a>=b) return a;
    return b;
}
int main(){
    cout<<"Maximum value from 3,4 is "<<maxx(3,4)<<endl;
    cout<<"Minimum value from 3,4 is "<<min(3,4)<<endl;
    return 0;

}