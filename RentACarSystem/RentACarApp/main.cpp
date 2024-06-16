#include <iostream>
#include "Car.h"
#include "CarRentalSystem.h"

//function to display the menu options
void displayMenu() {
    std::cout << "Car Rental System Menu:" << std::endl;
    std::cout << "1. View available cars" << std::endl;
    std::cout << "2. Rent a car" << std::endl;
    std::cout << "3. Return a car" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "Enter your choice: ";
}

int main() {
    CarRentalSystem system;

    //add cars to the system
    system.addCar(Car(1, "Toyota", "Camry"));
    system.addCar(Car(2, "Honda", "Accord"));
    system.addCar(Car(3, "Ford", "Mustang"));
    system.addCar(Car(4, "Chevrolet", "Impala"));
    system.addCar(Car(5, "Nissan", "Altima"));

    int choice, carId;
    bool running = true;

    //loop to display menu and process user input
    while (running) {
        displayMenu();
        std::cin >> choice;

        //handle user choice
        switch (choice) {
        case 1:
            //view available cars
            std::cout << "Available cars:" << std::endl;
            system.viewAvailableCars();
            break;
        case 2:
            //rent a car
            std::cout << "Enter the ID of the car to rent: ";
            std::cin >> carId;
            if (system.rentCar(carId)) {
                std::cout << "Car " << carId << " rented successfully." << std::endl;
            } else {
                std::cout << "Failed to rent car " << carId << ". It might not be available." << std::endl;
            }
            break;
        case 3:
            //return a car
            std::cout << "Enter the ID of the car to return: ";
            std::cin >> carId;
            if (system.returnCar(carId)) {
                std::cout << "Car " << carId << " returned successfully." << std::endl;
            } else {
                std::cout << "Failed to return car " << carId << ". It might not be rented." << std::endl;
            }
            break;
        case 4:
            //exit the program
            running = false;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
        }

        std::cout << std::endl;
    }

    return 0;
}
