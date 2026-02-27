#include<iostream>
#include "Student.hpp"

//initialize static data method(REQUIRED)
int Student::total_students = 0;
int Student::next_id = 1000;
double Student::good_gpa = 2.0;

Student(const std::string& n, double g) : name(n), gpa(g){
    total_students++;
    id = "U000" + std::to_string(next_id);
    next_id += 5;
}

int Student::getTotalStudent() const {
    return total_students;
}

std::string Student::getName() const {
    return name;
}

double getGPA() const{
    return gpa;
}

void Student::print() const{
    std::cout << "ID: " << id << std::endl;
    std::cout << "Name: " << getName() << std::endl;
    std::cout << "GPA: " << getGPA() << std::endl;
    std::cout << "Can graduate: " << ((canGraduate())? "Yes" : "No") << std::endl; //implement this get method at home
}

static void getRequirements(double new_gpa){
    good_gpa = (new_gpa > 3.0 && new_gpa <= 4.0) ? new_gpa : good_gpa;
}
