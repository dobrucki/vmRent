//
// Created by pobi on 20.12.18.
//

#ifndef VMRENT_ADDRESS_HPP
#define VMRENT_ADDRESS_HPP

#include <string>

class Address {
    int number;
    std::string street;
public:
    Address(int number, const std::string &street);
    int getNumber() const;
    void setNumber(int number);
    const std::string &getStreet() const;
    void setStreet(const std::string &street);
};


#endif //VMRENT_ADDRESS_HPP
