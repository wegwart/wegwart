#include "adapter.h"

Adapter::Adapter(std::string name) 
    : pImpl { std::make_unique<impl>(name) } {
}

std::shared_ptr<Adapter> Adapter::Create(std::string name)
{
    std::cout << "Adapter::Create: " << name << std::endl;
    return std::make_shared<Adapter>(name);
};

class Adapter::impl {
    std::string _name; 
 public:
    impl(std::string name) : _name(name) {
        std::cout << "Adapter::impl: " << _name << std::endl;
    }

    ~impl() {
        std::cout << "Adapter::~impl: " << _name << std::endl;
    }
};

