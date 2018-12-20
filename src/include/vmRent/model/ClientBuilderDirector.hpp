//
// Created by pobi on 20.12.18.
//

#ifndef VMRENT_BUILDER_HPP
#define VMRENT_BUILDER_HPP

#include <vmRent/model/Client.hpp>
#include <vmRent/model/ClientBuilder.hpp>

class ClientBuilderDirector{
    std::shared_ptr<ClientBuilder> clientBuilder;
public:
    void setClientBuilder(std::shared_ptr<ClientBuilder>& clientBuilder);
    void constructClient();
    std::shared_ptr<Client> getClient();
};

#endif //VMRENT_BUILDER_HPP
