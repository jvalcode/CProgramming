#ifndef STUDENT_HPP
#define STUDENT_HPP

#include<string>


class Student {
    public:
        //constructor prototype
        Student(const std::string& n, double g) : name(n), gpa(g);

        static int getTotalStudents();
        static void getRequirements(double GPA);
        
        std::string getName() const;
        double getGPA() const;

        void print() const;
    
private:
        std::string name;
        double gpa;
        static int total_students; //count total students
        static int next_id; //generates unique id's
        double good_gpa; //graduation requirement
        
        std::string id;


};


#endif