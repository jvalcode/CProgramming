#include "Car.hpp"

#ifndef CAR.HPP
#define CAR.HPP

class carDealer{

public:
    void showInvetory() const; //
    void addCar(const Car& car); //add car to inventory. changing inventory so we cant make it constant

private:
    std::vector<Car> inventory;
};

#endif