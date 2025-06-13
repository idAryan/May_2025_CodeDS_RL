#include <bits/stdc++.h>
using namespace std;
class Neuron{
    double val;
    double activatedVal;
    double derivedVal;
public:
    Neuron(double val){
        this->val=val;
        activate();
        derive();
    }
    void activate(){
        this->activatedVal=this->val/(1+abs(this->val));
    }
    void derive(){
        this->derivedVal=this->activatedVal*(1-this->activatedVal);
    }
    double getactivate(){
        return this->activatedVal;
    }
    double getderive(){
        return this->derivedVal;
    }
    
};
int main(){
    Neuron *n=new Neuron(0.9);
    cout<<"This is activated "<<n->getactivate()<<endl;
    cout<<"This is derived "<<n->getderive()<<endl;
    return 0;
}