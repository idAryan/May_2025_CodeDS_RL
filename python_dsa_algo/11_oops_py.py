
class Employee:
    def __init__(self, name,salary):
        self.name=name
        self.salary=salary
        self.email=name+"@company.com"
    def nameandsalary(self):
        return f"Employee Name: {self.name}, Salary: {self.salary}"
emp1 = Employee('John',50000)
emp2=Employee('Jane',60000)

print(f"Employee Name: {emp1.name}, Salary: {emp1.salary}, Email: {emp1.email}")
print("_______________")
#  Here no need to pass instance while calling method using instance
print(emp1.nameandsalary())
# Here need to pass instance while calling method using class
print(Employee.nameandsalary(emp1))