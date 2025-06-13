#include <iostream>
using namespace std;
// Finding highest peak
int peak(int l,int h,int arr[],int sz){
    
    while(l<=h){
        int mid=(l+h)/2;
        if(mid==0){
            if(arr[mid]>arr[mid+1]){
                return mid;
            }
        }
        else if(mid==sz-1){
            if(arr[mid]>arr[mid-1]){
                return mid;
            }
        }
        else if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }
        else{
            if(arr[mid-1]>arr[mid] && arr[mid-1]>arr[mid+1]){
                h=mid-1;
            }
            else if(arr[mid+1]>arr[mid] && arr[mid+1]>arr[mid-1]){
                l=mid+1;
            }
        }
    }
    return -1;
}
int main(){
    int arr[]={10,20,15,2,33,50,67};
    int l=0;
    int h=sizeof(arr)/sizeof(arr[0]);
    cout<<"Peak at idx "<<peak(l,h-1,arr,h-1);
    if(peak(l,h-1,arr,h-1)!=-1){
        cout<<" and value is "<<arr[peak(l,h-1,arr,h-1)];
    }
    return 0;
   
}