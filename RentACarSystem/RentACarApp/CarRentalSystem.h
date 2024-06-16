#ifndef CARRENTALSYSTEM_H //include guard to prevent multiple inclusions
#define CARRENTALSYSTEM_H

#include <vector> //include vector for storing multiple cars
#include "Car.h" 

class CarRentalSystem {
public:
    void addCar(const Car& car); 
    bool rentCar(int carId); 
    bool returnCar(int carId); 
    void viewAvailableCars() const; 

private:
    std::vector<Car> cars; //vector to store the list of cars
};

#endif
