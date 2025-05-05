#include <iostream>

using namespace std;

class Vehicle {
protected:
    string brand;
    string model;
public:
    Vehicle(string b, string m) {
        this->brand = b;
        this->model = m;
    }
    void DisplayInfo() {
        cout << "Brand: " << brand << ", Model: " << model << endl;
    }
};

class Car : public Vehicle {
private:
    float maxSpeed;
public:
    Car(string b, string m, float speed) : Vehicle(b, m) {
        this->maxSpeed = speed;
    }

    void DisplayInfo() {
        cout << "Car - Brand: " << brand << ", Model: " << model << ", Max Speed: " << maxSpeed << " km/h" << endl;
    }
};

int main() {
    Vehicle v1("Toyota", "Corolla");
    Car c1("BMW", "X5", 240.5);

    v1.DisplayInfo();
    c1.DisplayInfo();

    return 0;
}
