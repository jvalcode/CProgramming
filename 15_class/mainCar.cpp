#include "Car.hpp"
#include "CarDealer.hpp"

bool isEfficient(const Car& car);

int main(void) {

    Car toyota ("Toyota","Corolla", 2020, 23.2, 12.0);

    toyota.refuel(5);

    double distance, gallons;

    while (true) {
        std::cout << "Enter gallons: ";
        std::cin >> gallons;

        std::cout << "Enter distance: ";
        std::cin >> distance;

        toyota.refuel(gallons);
        toyota.drive(distance);
        toyota.print_info();
    }

    // Create CarDealer
    CarDealer lakeland_dealer;

    // Add inventory
    lakeland_dealer.addCar(toyota);

    // Show the inventory
    lakeland_dealer.showInventory();

    std::cout << isEfficient(toyota) << std::endl;

    return 0;
}

bool isEfficient(const Car& car) {
    return (car.getMPG() > 20.0) ? true : false;
}