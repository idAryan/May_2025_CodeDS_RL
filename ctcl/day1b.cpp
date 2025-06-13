
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,4,7,9,11,13,23,56,70};
    int target=9;
    int start=0;
    int end=sizeof(arr)/sizeof(arr[0])-1;
    while(start<=end){
        int mid=((start+end)/2);
        cout<<mid<<endl;
        if(arr[mid]==target){
            cout<<"Found it on idx"<<mid<<endl;
            break;

        }
        else if(arr[mid]<target){
            start=mid+1;
            
        }
        else{
            end=mid;
        }
    }
    return 0;
}