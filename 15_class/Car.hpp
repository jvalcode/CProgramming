#include <string>
#include <iostream>

#ifndef CAR_HPP
#define CAR_HPP

class Car {
    
    public:
        // No-arg constructor
        Car();
        // TODO constructor with arguments
        

        // Get methods
        std::string getMake();
        std::string getModel();
        int getYear();
        double getMPG();
        double distance();
        
        // Set methods
void setMake(const std::string& make_);
void setModel(const std::string& model_);
        void setYear(int year_);
        void setMPG(double MPG_);
        void setMileage(double mileage_);
        
        // Class methods
        void print_info();
        void refuel();
        void drive();
    
    private:
        std::string make;
        std::string model;
        int year;
        double MPG;
};

#endif
//this is inclusion guard


/*
TODO
Mileage: car's mileage
Fuel capacity: (fuel tank capacity)
Fuel level: (current fuel in gallons)
void refuel(double gallons);
void drive(double distance);
*/

//to-do: add car's mileage, fuel tank capacity, fuel level (current fuel in gallons)
//create 2 methods: 1.) void refuel(double gallons); you can put more than your tank capacity
//create method void drive(double distance);