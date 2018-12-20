//
// Created by pobi on 20.12.18.
//

#include "vmRent/model/Address.hpp"

int Address::getNumber() const {
    return number;
}

void Address::setNumber(int number) {
    Address::number = number;
}

const std::string &Address::getStreet() const {
    return street;
}

void Address::setStreet(const std::string &street) {
    Address::street = street;
}

Address::Address(int number, const std::string &street) : number(number), street(street) {}
