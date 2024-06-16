#ifndef CAR_H //include guard to prevent multiple inclusions
#define CAR_H

#include <string>

class Car {
public:
    Car(int id, const std::string& make, const std::string& model); 

    int getId() const; 
    std::string getMake() const; 
    std::string getModel() const; 
    bool isAvailable() const; 
    void rentCar(); 
    void returnCar(); 

private:
    int id; 
    std::string make; 
    std::string model; 
    bool available; 
};

#endif