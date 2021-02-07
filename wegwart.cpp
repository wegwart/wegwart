#include <iostream>
#include "src/adapter.h"

int main() {
   std::cout << "Hello, Wegwart!" << std::endl;
   auto test = Adapter::Create("test");
   std::cout << "Guid: " << test.get()->CreateGuid() << std::endl;
   return 0;
}