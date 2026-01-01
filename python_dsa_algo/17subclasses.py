class Employee:
    raise_percent=1.04
    def __init__(self,name,sal):
        self.name=name
        self.sal=sal
    def __repr__(self):
        return f"{self.name} and {self.sal:.2f}"
    def raiseSal(self):
        self.sal=(self.sal * self.raise_percent)
class Developer(Employee):
    raise_percent=1.10
    def __init__(self,name,sal,programming):
        super().__init__(name,sal)
        self.programming=programming
    def __repr__(self):
        return super().__repr__() + f" and {self.programming}"
d1=Developer('Aryan',50000,"python")
d2=Developer('Aryan2',60000,"java")
e1=Employee("Ashu",50000)
d1.raiseSal()
e1.raiseSal()
print(d1)
print(e1)
