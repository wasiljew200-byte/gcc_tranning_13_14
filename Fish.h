#pragma once
#include "Pet.h"
#include <string>
#include <iostream>

class Fish : public Pet {
private:
    std::string name;
    
public:
    Fish() = default;
    
    Fish(const std::string& name) : name(name) {}
    
    std::string getName() const override {
        return name;
    }
    
    void setName(const std::string& newName) override {
        name = newName;
    }
    
    void play() override {
        std::cout << name << " плавает в аквариуме" << std::endl;
    }
};