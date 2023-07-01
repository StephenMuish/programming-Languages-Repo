# Abstraction and Encapsulation: Creating abstract base classes

from abc import ABC, abstractmethod

class Person(ABC):
    def __init__(self, name, age):
        self.name = name
        self.age = age

    @abstractmethod
    def display_details(self):
        pass


class Student(Person):
    def __init__(self, name, age, student_id):
        super().__init__(name, age)
        self.student_id = student_id

    def display_details(self):
        print(f"Student: {self.name} (ID: {self.student_id}), Age: {self.age}")

class Professor(Person):
    def __init__(self, name, age, employee_id):
        super().__init__(name, age)
        self.employee_id = employee_id

    def display_details(self):
        print(f"Professor: {self.name} (ID: {self.employee_id}), Age: {self.age}")


# Inheritance and Polymorphism: Utilizing the classes

class University:
    def __init__(self):
        self.people = []

    def add_person(self, person):
        self.people.append(person)

    def display_people(self):
        for person in self.people:
            person.display_details()

# Create instances of the classes

university = University()

student1 = Student("John Doe", 20, "12345")
student2 = Student("Jane Smith", 19, "54321")

professor1 = Professor("Dr. James Brown", 40, "P9876")
professor2 = Professor("Dr. Emily Davis", 35, "P5432")

# Add people to the university

university.add_person(student1)
university.add_person(student2)
university.add_person(professor1)
university.add_person(professor2)

# Display details of all people in the university

university.display_people()

