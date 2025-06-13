#include<bits/stdc++.h>
using namespace std;
class Employee{
private:
    string name;
    string company_name;
    int age;
public:
    void setName(string name){
        this->name=name;
    }
    string getName(){
        return name;
    }
    void setCompany(string company_name){
        this->company_name=company_name;
    }
    string getCompany(){
        return company_name;
    }
    void setAge(int age){
        this->age=age;
    }
    int getAge(){
        return age;
    }
    void Introduce(){
        cout<<getName()<<endl;
        cout<<getCompany()<<endl;
        cout<<getAge()<<endl;
    }
};
int main(){
    Employee emp1;
    emp1.setName("Aryan");
    emp1.setCompany("Google");
    emp1.setAge(22);
    emp1.Introduce();
    return 0;
}