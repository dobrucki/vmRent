//
// Created by pobi on 20.12.18.
//

#ifndef VMRENT_TESTCLIENTBUILDER_HPP
#define VMRENT_TESTCLIENTBUILDER_HPP

#include <vmRent/model/ClientBuilder.hpp>

class TestClientBuilder: public ClientBuilder{
public:
    void createClient() override;
    void buildUuid() override;
    void buildAddress() override;
    void buildNames() override;
    void buildClientType() override;
};

#endif //VMRENT_TESTCLIENTBUILDER_HPP
