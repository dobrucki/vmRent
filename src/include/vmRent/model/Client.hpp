//
// Created by pobi on 20.12.18.
//

#ifndef PROJECT_CLIENT_HPP
#define PROJECT_CLIENT_HPP

#include <memory>
#include <list>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include "Address.hpp"


class Rent;
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
    const boost::uuids::uuid &getUuid() const;
    void setUuid(const boost::uuids::uuid &uuid);
    const Address_shared &getAddress() const;
    void setAddress(const Address_shared &address);
    const std::string &getName() const;
    void setName(const std::string &name);
    const std::string &getLastName() const;
    void setLastName(const std::string &lastName);
    const ClientType_shared &getClientType() const;
    void setClientType(const ClientType_shared &clientType);
};

#endif //PROJECT_CLIENT_HPP
