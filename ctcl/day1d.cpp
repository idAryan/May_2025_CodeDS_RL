#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int d){
            data=d;
            next=nullptr;
        }
        void appendToL(int d){
            Node *n=new Node(d);
            Node *p=this;
            while(p->next!=nullptr){
                p=p->next;
            }
            p->next=n;
        }
};
int main(){
    Node *head=new Node(1);
    head->appendToL(4);
    head->appendToL(5);
    auto it=head;
    while(it!=nullptr){
        cout<<it->data<<" ";
        it=it->next;
    }
    it=head;
    while(it!=nullptr){
        Node *temp=it;
        it=it->next;
        delete temp;
    }
    return 0;
}