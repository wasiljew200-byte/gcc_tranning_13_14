#pragma once
#include <string>
#include <iostream>

class Pet {
public:
    virtual ~Pet() = default;
    
    virtual std::string getName() const = 0;
    virtual void setName(const std::string& name) = 0;
    virtual void play() = 0;
};