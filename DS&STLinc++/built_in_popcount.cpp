#include <bits/stdc++.h>
using namespace std;
int main(){
    int a=7;
    unsigned int b=(unsigned int)a;
    int cnt_set_bits=__builtin_popcount(b);
    cout<<cnt_set_bits<<endl;
    string s="132";
    do{
        cout<<s<<" ";
    }while(next_permutation(s.begin(),s.end()));
    sort(s.begin(),s.end());
    cout<<endl;
    do{
        cout<<s<<" ";
    }while(next_permutation(s.begin(),s.end()));
    cout<<endl;
    int arr[5]={5,2,3,9,6};
    for(auto it:arr){
        cout<<it<<" ";

    }
    cout<<endl;
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxi=*max_element(arr,arr+n);
    cout<<maxi;
    cout<<endl;
    int mini=*min_element(arr,arr+n);
    cout<<mini<<endl;


    return 0;
}