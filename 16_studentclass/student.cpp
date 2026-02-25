#include<iostream>
#include<string>

class Student {
public:
    std::string name;
    double gpa;
    static int total_students;


    Student(const std::string& n, double g) : name(n), gpa(g){
        total_students++;
    }
};

//initialize static data method(REQUIRED
int Student::total_students = 0;

int main(void) {
    
    std::cout << "Total Students: " << Student::total_students;
    std::cout << std::endl;

    Student s1("Bob", 3.2);
    Student s2("Ana", 3.0);

    std::cout << "Total Students: " << Student::total_students;
    std::cout << std::endl;



    return 0;

}