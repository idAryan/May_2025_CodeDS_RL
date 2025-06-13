#include<bits/stdc++.h>
using namespace std;
class Employee{
public:
    string name;
    string company_name;
    int age;
    void Introduction(){
        cout<<"Name "<<name<<endl;
        cout<<"Company "<<company_name<<endl;
        cout<<"Age "<<age<<endl;
    }
};
int main(){
    Employee emp1;
    emp1.name="Aryan";
    emp1.company_name="Google";
    emp1.age=22;
    Employee emp2;
    emp2.name="Julien";
    emp2.company_name="Julien enterprize";
    emp2.age=34;
    emp1.Introduction();
    cout<<endl;
    emp2.Introduction();
    return 0;
}