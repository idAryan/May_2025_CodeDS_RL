#include<bits/stdc++.h>
using namespace std;
class Employee{
public:
    string name;
    string company_name;
    int age;
};
int main(){
    Employee emp1;
    emp1.name="Aryan";
    emp1.company_name="Google";
    emp1.age=22;
    cout<<emp1.name<<endl;
    return 0;


}