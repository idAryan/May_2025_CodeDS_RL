#include <bits/stdc++.h>
using namespace std;
template <typename T>
T sqr(T x){
    return x*x;
}
template <typename T>
class Bovector{
    T arr[1000];
    int size;
public:
    Bovector():size(0){}
    void push(T x){ arr[size]=x; size++;}
    T get(int i) const {return arr[i];}
    int getSize() const {return size;}
    void print() const{for(int i=0;i<size;i++){cout<<arr[i]<<endl;}}

};
int main(){
    cout<<sqr<int>(5);
    Bovector<int> bv;
    bv.push(2);
    bv.push(6);
    bv.push(8);
    cout<<bv.getSize()<<endl;
    cout<<endl;
    bv.print();
    cout<<endl;
    bv=sqr(bv);
    bv.print();
    return 0;

}