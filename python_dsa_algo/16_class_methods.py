class Employee:
    emp_objects=[]
    emp_count=0
    def __init__(self, name, position):
        self.name = name
        self.position = position
        Employee.emp_count+=1
        Employee.emp_objects.append(self)
    def __repr__(self):
        return f"Employee({self.name}, {self.position})"

    def display_info(self):
        print(f"Name: {self.name}, Position: {self.position}")

    @classmethod
    def total_employees(cls):
        return cls.emp_count
    @classmethod
    def from_string(cls, emp_str):
        name, position = emp_str.split('-')
        return cls(name, position)
    @classmethod
    def get_all_employees(cls):
        return cls.emp_objects
e1=Employee("Alice", "Developer")
e2=Employee("Bob", "Designer")
print(Employee.emp_count)
print(e1.emp_count)
# Employee.emp_count=10
# On changing ckass variable using class name it will change for all instances
print(Employee.emp_count)
print(e1.emp_count)

e1.emp_count=5
# On changing class variable using instance name it will create instance variable for that instance only
print(Employee.emp_count)
print(e1.emp_count)

emp1="Charlie-Manager"
new_emp=Employee.from_string(emp1)
print(Employee.emp_count)
print("___________")
print(Employee.get_all_employees())
