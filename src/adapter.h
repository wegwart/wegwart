#include <iostream>
#include <memory>
#include <experimental/propagate_const>

class Adapter {
public:
    Adapter(std::string name);
    static std::shared_ptr<Adapter> Create(std::string name);
    std::string CreateGuid(void);

private:  
    class impl;  
    std::experimental::propagate_const<std::unique_ptr<impl>> pImpl;               // to the forward-declared implementation class
};
 
