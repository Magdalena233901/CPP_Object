#pragma once

class Car
{
public:
    Car() { std::cout << "Car constructor " << std::endl; }
    ~Car() { std::cout << "Car destructor " << std::endl; }
    void drive() { std::cout << "Car drives " << std::endl; }
};

class ElectricCar : public virtual Car
{
public:
    ElectricCar()
    {
        std::cout << "ElectricCar constructor" << std::endl;
    }
    ~ElectricCar()
    {
        std::cout << "ElectricCar destructor" << std::endl;
    }
};
class AutoTransmissionCar : public virtual Car
{
public:
    AutoTransmissionCar()
    {
        std::cout << "AutoTransmissionCar constructor" << std::endl;
    }
    ~AutoTransmissionCar()
    {
        std::cout << "AutoTransmissionCar destructor" << std::endl;
    }
};
class Tesla : public ElectricCar, public AutoTransmissionCar
{
public:
    Tesla()
    {
        std::cout << "Tesla constructor" << std::endl;
    }
    ~Tesla()
    {
        std::cout << "Tesla destructor" << std::endl;
    }
};