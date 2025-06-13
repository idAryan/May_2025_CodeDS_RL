#include <bits/stdc++.h>
using namespace std;
class Employee{
public:
    string name;
    string company_name;
    int age;
    Employee(string name,string company_name,int age){
        this->name=name;
        this->company_name=company_name;
        this->age=age;
    }
    void Introduce(){
        cout<<name<<endl;
        cout<<company_name<<endl;
        cout<<age<<endl;
    }
};
int main(){
    Employee emp1=Employee("Aryan","Google",22);
    emp1.Introduce();
    return 0;
    
}