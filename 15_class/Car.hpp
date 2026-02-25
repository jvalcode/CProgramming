#include <string>
#include <iostream>

#ifndef CAR_HPP
#define CAR_HPP

class Car {
public:
    // No-arg constructor
    Car();

    // TODO constructor with arguments
    Car(const std::string& make_, const std::string& model_, int year, double mpg, double fuel_capacity);

    // Get methods
    std::string getMake() const; 
    std::string getModel() const; 
    int getYear() const; 
    double getMPG() const;
    double getFuelLevel() const;
    
    // Set methods
    void setMake(const std::string& make_);
    void setModel(const std::string& model_);
    void setYear(int year_);
    void setMPG(double MPG_);
    
    // Class methods
    void print_info() const;
    void refuel(double gallons); 
    void drive(double distance);

private:
    std::string make;
    std::string model;
    int year;
    double MPG;
    
    double mileage;
    double fuel_capacity;
    double fuel_level;

};

#endif

/*
    TODO
    Mileage: car's mileage
    Fuel capacity: (fuel tank capacity)
    Fuel level:     (current fuel in gallons)

    void drive(double distance); 

*/