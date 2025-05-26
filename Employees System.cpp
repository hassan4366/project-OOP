#include <iostream>
using namespace std;

class Employee {
public:
    virtual void calculateSalary() = 0;
    virtual void showRole() = 0;
    virtual ~Employee() { cout << "Employee Destroyed\n"; }
};

class Engineer : public Employee {
public:
    void calculateSalary() override {
        cout << "Engineer Salary: 5000\n";
    }

    void showRole() override {
        cout << "I am an Engineer\n";
    }

    ~Engineer() { cout << "Engineer Destroyed\n"; }
};

class Accountant : public Employee {
public:
    void calculateSalary() override {
        cout << "Accountant Salary: 4000\n";
    }

    void showRole() override {
        cout << "I am an Accountant\n";
    }

    ~Accountant() { cout << "Accountant Destroyed\n"; }
};

int main() {
    Employee *emp1 = new Engineer;
    Employee *emp2 = new Accountant;

    emp1->calculateSalary(); // Engineer Salary: 5000
    emp1->showRole();        // I am an Engineer
    delete emp1;             // Engineer Destroyed, Employee Destroyed

    cout << "----------\n";

    emp2->calculateSalary(); // Accountant Salary: 4000
    emp2->showRole();        // I am an Accountant
    delete emp2;             // Accountant Destroyed, Employee Destroyed

    return 0;
}