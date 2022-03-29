// Task 7

#include <iostream>
#include <string>
using namespace std;

class Employee {
        public: 
            string name;
            int yearOfJoining;
            int salary;
            string address;        
};

void printHeader(){
    cout << "Name" << "     " << "Year of joining" << "     " << "Address" << "     " << "Salary" ;
};

int main()
{    
    Employee employees;
    int n;
    cin >> n;
    printHeader();
    for(int i=0; i<n;i++){
        cin >> employees.name >> employees.yearOfJoining >> employees.address >> employees.salary ;
        cout << employees.name << "     " << employees.yearOfJoining << "     " << employees.address << "     " << employees.salary ;
    }
}