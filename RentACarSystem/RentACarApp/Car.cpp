#include "Car.h"

//constructor to initialize a Car object
Car::Car(int id, const std::string& make, const std::string& model)
    : id(id), make(make), model(model), available(true) {}

int Car::getId() const {
    return id;
}

std::string Car::getMake() const {
    return make;
}

std::string Car::getModel() const {
    return model;
}

bool Car::isAvailable() const {
    return available;
}

void Car::rentCar() {
    available = false;
}

void Car::returnCar() {
    available = true;
}