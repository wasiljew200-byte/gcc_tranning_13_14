#pragma once
#include "Pet.h"
#include <string>
#include <iostream>

class Dog : public Pet {
private:
    std::string name;
    
public:
    Dog() = default;
    
    Dog(const std::string& name) : name(name) {}
    
    std::string getName() const override {
        return name;
    }
    
    void setName(const std::string& newName) override {
        name = newName;
    }
    
    void play() override {
        std::cout << name << " любит играть с мячиком" << std::endl;
    }
};