//
// Created by pobi on 20.12.18.
//

#ifndef VMRENT_CLIENTTYPE_HPP
#define VMRENT_CLIENTTYPE_HPP

// TODO discount methods implementation

class ClientType{
public:
    virtual double discount() = 0;
};

class Bronze :public ClientType{
public:
    double discount();
};

class Silver :public ClientType{
public:
    double discount();
};

class Golden :public ClientType{
public:
    double discount();
};

#endif //VMRENT_CLIENTTYPE_HPP
