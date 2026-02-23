#include "carDealer.hpp"

void carDealer::addCar(const &Car car){
    inventory.push_back(car); //adding car to inventory
}

void carDealer::showInventory()const {
    for(int i = 0; i< inventory.size();i++){
        inventory[i].print_info();
    }
}