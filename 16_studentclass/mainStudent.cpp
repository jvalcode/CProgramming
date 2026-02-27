#include "Student.hpp"
#include<iostream>


int main(void) {
    
    std::cout << "Total Students: " << Student::getTotalStudents();
    std::cout << std::endl;

    Student s1("Bob", 3.2);
    Student s2("Ana", 3.0);

    std::cout << "Total Students: " << Student::getTotalStudents();
    std::cout << std::endl;

    s1.print();
    s2.print();

    

    return 0;

}