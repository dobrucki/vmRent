//
// Created by pobi on 20.12.18.
//

#include <vmRent/model/clientBuilders/TestClientBuilder.hpp>
#include "../ClientType.hpp"

void TestClientBuilder::createClient() {
    this->client = std::make_shared<Client>();
}

void TestClientBuilder::buildUuid() {
    client->setUuid(boost::uuids::nil_uuid());
}

void TestClientBuilder::buildAddress() {
    Address_shared address = std::make_shared<Address>(10, "Test");
    client->setAddress(address);
}

void TestClientBuilder::buildNames() {
    client->setName("Mirek");
    client->setLastName("Kudra");
}

void TestClientBuilder::buildClientType() {
    ClientType_shared clientType = std::make_shared<Silver>();
    client->setClientType(clientType);
}
