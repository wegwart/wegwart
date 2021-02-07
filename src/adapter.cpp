#include "adapter.h"
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <boost/lexical_cast.hpp>
#include <iostream>

class Adapter::impl {
    std::string _name; 
 public:
    impl(std::string name) : _name(name) {
        std::cout << "Adapter::impl: " << _name << std::endl;
    }

    std::string createGuid(void)
    {
        boost::uuids::uuid guid = boost::uuids::random_generator()(); 
        std::string guidString = boost::lexical_cast<std::string>(guid);
        return guidString;
    }

    ~impl() {
        std::cout << "Adapter::~impl: " << _name << std::endl;
    }
};

Adapter::Adapter(std::string name) 
    : pImpl { std::make_unique<impl>(name) } {
}

std::shared_ptr<Adapter> Adapter::Create(std::string name)
{
    std::cout << "Adapter::Create: " << name << std::endl;
    return std::make_shared<Adapter>(name);
};

std::string Adapter::CreateGuid(void)
{
    return pImpl.get()->createGuid();
}