// The class implementation file
#include "Car.hpp"

Car::Car() {
    setMake("...");
    setModel("...");
    setYear(1900);
    setMPG(0);

    mileage = 0.0;
    fuel_capacity = 12.0;
    fuel_level = 0.0;

}

Car::Car(const std::string& make_, const std::string& model_, int year_, double mpg_, double fuel_capacity_) {
    setMake(make_);
    setModel(model_);
    setYear(year_);
    setMPG(mpg_);

    fuel_capacity = (fuel_capacity_ > 0) ? fuel_capacity_ : 0.0;
    mileage = 0.0;
    fuel_level = 0.0;
}

std::string Car::getMake() const {
    return make;
}

std::string Car::getModel() const {
    return model;
}

int Car::getYear() const {
    return year;
}

double Car::getMPG() const {
    return MPG;
}

double Car::getFuelLevel() const {
    return fuel_level;
}

void Car::setMake(const std::string& make_) {
    if (!make_.empty()) {
        make = make_;
    }
}

void Car::setModel(const std::string& model_) {
    if (!model_.empty()) {
        model = model_;
    }
}

void Car::setYear(int year_) {
    year = (year_ > 1900) ? year_ : 1900;
}

void Car::setMPG(double MPG_) {
    MPG = (MPG_ > 0) ? MPG_ : 0;
}

void Car::print_info() const {
    std::cout << make << std::endl;
    std::cout << model << std::endl;
    std::cout << year << std::endl;
    std::cout << MPG << std::endl;
    std::cout << fuel_level << std::endl;
    std::cout << milage << std::endl;
}

void Car::refuel(double gallons) {
    std::cout << "Refueling..." << std::endl;

    if (gallons < 0){
        gallons = 0;
    }

    double space = fuel_capacity - fuel_level;

    if (space < 0) {
        space = 0;
    } 
    if (gallons <= space) {
        fuel_level += gallons;
    } else {
        fuel_level = fuel_capacity;
        std::cout<< "Fuel Added: " << space << " gallons." << std::endl;
        std::cout<< "Excess Fuel : " << (gallons - space) << " gallons." << std::endl;

    }

    std::cout << "Fuel Level: " << fuel_level << " gallons." << std::endl;

}

void Car::drive(double distance) {
    if (distance < 0){
        distance = 0;
    } 
    double possible = fuel_level * MPG;

    if (possible  <= 0){
        std::cout << "Distance covered: 0 miles (" << distance << " miles left.)" << std::endl;
        std::cout << "Fuel distance: " << fuel_level << " gallons." << std::endl;
        return;
    } else if (distance <= possible) {
        mileage += distance;
        fuel_level -= (distance / MPG);

        std::cout << "Distance covered: " << distance << "miles (0 miles left)" << std::endl;
        std::cout << "Fuel Level: " << fuel_level << "gallons" << std::endl;
    } else {
        mileage += possible;
        double left = distance - possible;
        fuel_level = 0.0;

        std::cout << "Distance covered: " << possible << "miles (" << left << "miles left)" << std::endl;
        std::cout << "Fuel Level: " << fuel_level << "gallons" << std::endl;
    }
        
}