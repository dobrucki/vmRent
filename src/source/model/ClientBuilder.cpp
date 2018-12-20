//
// Created by pobi on 20.12.18.
//

#include <vmRent/model/ClientBuilder.hpp>


const std::shared_ptr<Client> &ClientBuilder::getClient() const {
    return client;
}
