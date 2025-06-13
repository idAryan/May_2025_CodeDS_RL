// how you learned things not by tutorial but by observing and keep practising and mastering basics
// i don't jump directly into match but practise basics and when comfortable then sometimes played
// still i have to master first and my observing myself not by copying any rat
#include <iostream>
using namespace std;
void bs(int start,int end,int arr[],int target){
    int mid=(start+end)/2;
    if(start>end){
        cout<<"Not found";
    }
    else if(arr[mid]==target){
        cout<<"Found at index "<<mid;
    }
    else if(arr[mid]<target){
        start=mid+1;
        bs(start,end,arr,target);
    }
    else{
        end=mid;
        bs(start,end,arr,target);
    }


}
int main(){
    int arr[]={1,4,7,9,11,13,23,56,70};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=9;
    bs(0,size,arr,target);
    return 0;

}