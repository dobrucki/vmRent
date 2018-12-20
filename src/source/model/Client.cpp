//
// Created by pobi on 20.12.18.
//

#include <vmRent/model/Client.hpp>


const boost::uuids::uuid &Client::getUuid() const {
    return uuid;
}

void Client::setUuid(const boost::uuids::uuid &uuid) {
    Client::uuid = uuid;
}

const Address_shared &Client::getAddress() const {
    return address;
}

void Client::setAddress(const Address_shared &address) {
    Client::address = address;
}

const std::string &Client::getName() const {
    return name;
}

void Client::setName(const std::string &name) {
    Client::name = name;
}

const std::string &Client::getLastName() const {
    return lastName;
}

void Client::setLastName(const std::string &lastName) {
    Client::lastName = lastName;
}

const ClientType_shared &Client::getClientType() const {
    return clientType;
}

void Client::setClientType(const ClientType_shared &clientType) {
    Client::clientType = clientType;
}
