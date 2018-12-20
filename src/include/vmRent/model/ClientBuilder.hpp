//
// Created by pobi on 20.12.18.
//

#ifndef VMRENT_CLIENTBUILDER_HPP
#define VMRENT_CLIENTBUILDER_HPP

#include <vmRent/model/Client.hpp>

class ClientBuilder{
protected:
    std::shared_ptr<Client> client;
public:
    const std::shared_ptr<Client> &getClient() const;
    virtual void createClient() = 0;

    virtual void buildUuid() = 0;
    virtual void buildAddress() = 0;
    virtual void buildNames() = 0;
    virtual void buildClientType() = 0;
};

#endif //VMRENT_CLIENTBUILDER_HPP
