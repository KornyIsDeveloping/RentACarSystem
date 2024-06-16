#include <iostream> 
#include "CarRentalSystem.h" 

//method to add a car to the system
void CarRentalSystem::addCar(const Car& car) {
    cars.push_back(car); 
}

//method to rent a car by ID
bool CarRentalSystem::rentCar(int carId) {
    for (auto& car : cars) {
        if (car.getId() == carId && car.isAvailable()) { 
            car.rentCar();
            return true;
        }
    }
    return false;
}

//method to return a car by ID
bool CarRentalSystem::returnCar(int carId) {
    for (Car& car : cars) { 
        if (car.getId() == carId && !car.isAvailable()) { 
            car.returnCar(); 
            return true;
        }
    }
    return false;
}

//method to view all available cars
void CarRentalSystem::viewAvailableCars() const {
    for (const Car& car : cars) { 
        if (car.isAvailable()) { 
            std::cout << "Car ID: " << car.getId()
                      << ", Make: " << car.getMake()
                      << ", Model: " << car.getModel() << std::endl;
        }
    }
}

