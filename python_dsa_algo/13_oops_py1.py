class Employee:
    count_person=0
    all_instances=[]
    def __init__(self,name,salary):
        self.name=name
        self.salary=salary
        self.email=name+"@company.com"
        Employee.count_person+=1
        Employee.all_instances.append(self)
    def nameandsalary(self):
        return f"{self.name}, {self.salary}"
    def __repr__(self):
        return f"Employee({self.name}, {self.salary}, {self.email})"
    @classmethod
    def print_all_instances(cls):
        return cls.all_instances

print(Employee.count_person)
emp1=Employee('John',50000)
emp2=Employee('Jane',60000)
print(Employee.count_person) 
print(emp1.count_person)
print(Employee.__dict__)
print(emp1.__dict__)
print("_______________")
print(Employee.print_all_instances())