#include<bits/stdc++.h>
using namespace std;

class AbstarctionExample{
    // Making this class abstract by using a pure virtual function
    virtual void CanGetPromoted() = 0;
};

class Employee : AbstarctionExample { // Inheriting from AbstarctionExample
private:
    string Name;
    string Company;
    int Age;

public:
    // Constructor to initialize employee details
    Employee(string EmpName, string EmpCompany, int EmpAge) {
        Name = EmpName;
        Company = EmpCompany;
        Age = EmpAge;
    }

    // Getter methods
    void SetName(string name) {
        Name = name;
    }

    void SetCompany(string company) {
        Company = company;
    }

    void SetAge(int age) {
        Age = age;
    }

    string GetName() {
        return Name;
    }

    string GetCompany() {
        return Company;
    }

    int GetAge() {
        return Age;
    }

    // Method to introduce employee
    void IntroduceYourSelf() {
        cout << "Name of the Emp: " << Name << endl;
        cout << "Name of the Company: " << Company << endl;
        cout << "Age of Emp: " << Age << endl;
    }

    // Implementation of the pure virtual function
    void CanGetPromoted() {
        if (Age > 25) {
            cout << GetName() << " is Promoted!" << endl;
        } else {
            cout << GetName() << " Sorry no Promotion" << endl;
        }
    }
};

int main() {
    Employee emp1("Vishnu", "AMD", 23);
    Employee emp2("Ravi", "Amazon", 30);
    
    // emp1.IntroduceYourSelf(); // You can call this if you want to see the employee details
    emp1.CanGetPromoted();
    emp2.CanGetPromoted();
    
    return 0;
}
