//
// Created by pobi on 20.12.18.
//

#ifndef VMRENT_BUILDER_HPP
#define VMRENT_BUILDER_HPP

#include <vmRent/model/Client.hpp>


class ClientBuilderDirector{
    std::shared_ptr<Client> client;
public:
    void constructClient();
};

#endif //VMRENT_BUILDER_HPP
