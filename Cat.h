#pragma once
#include "Pet.h"
#include <string>
#include <iostream>

class Cat : public Pet {
private:
    std::string name;
    
public:
    Cat() = default;
    
    Cat(const std::string& name) : name(name) {}
    
    std::string getName() const override {
        return name;
    }
    
    void setName(const std::string& newName) override {
        name = newName;
    }
    
    void play() override {
        std::cout << name << " любит играть с веревочкой" << std::endl;
    }
};