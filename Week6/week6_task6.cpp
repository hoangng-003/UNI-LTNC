// Task 6

#include<iostream>
#include<string>

using namespace std;

class Student {
    public:
        string name;
        int roll_no;
};

int main(){
    Student myStudentObj;
    myStudentObj.name = "John";
    myStudentObj.roll_no = 2;
    
    cout << myStudentObj.name << " " << myStudentObj.roll_no;
}