#include "Car.hpp"


int main(void) {
    
    // Create an object of Car class
    Car ferrari;
    
    ferrari.setMake("Ferrari");
    ferrari.setModel("F50");
    ferrari.setYear(2025);
    ferrari.setMPG(13.5);
    
    Car ferrari_superGT("Ferrari", "Super GT", 2021, 10.7);
    Car ferrari_spider("Ferrari","Spider","2020","11.7");

    //create CarDealer
    carDealer lakeland_ferrari;

    //add invetory
    lakeland_ferrari.addCar(ferrari_50);
    lakeland_ferrari.addCar(ferrari_spider);
    lakeland_ferrari.addCar(ferrari_superGT);

    //show invetory
    lakelandInventory.show_invetory()


    ferrari.print_info();
    ferrari.drive();
    ferrari.refuel();
    
    return 0;
}