//
// Created by pobi on 20.12.18.
//

#ifndef PROJECT_CLIENT_HPP
#define PROJECT_CLIENT_HPP

#include <memory>
#include <list>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>

class Rent;
class Address;
class ClientType;

std::shared_ptr<Rent> typedef Rent_shared;
std::shared_ptr<Address> typedef Address_shared;
std::shared_ptr<ClientType> typedef ClientType_shared;

class Client{
    boost::uuids::uuid uuid;
    std::list<Rent_shared> rents;
    Address_shared address;
    std::string name;
    std::string lastName;
    ClientType_shared clientType;
public:
    // TODO code methods and implement them in Client.cpp
};

#endif //PROJECT_CLIENT_HPP
