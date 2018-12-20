//
// Created by pobi on 20.12.18.
//

#include <vmRent/model/ClientBuilderDirector.hpp>

void ClientBuilderDirector::setClientBuilder(std::shared_ptr<ClientBuilder>& clientBuilder) {
    this->clientBuilder = clientBuilder;
}

void ClientBuilderDirector::constructClient() {
    clientBuilder->createClient();
    clientBuilder->buildUuid();
    clientBuilder->buildAddress();
    clientBuilder->buildClientType();
    clientBuilder->buildNames();
}

std::shared_ptr<Client> ClientBuilderDirector::getClient() {
    return clientBuilder->getClient();
}
