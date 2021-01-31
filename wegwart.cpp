#include <iostream>
#include "src/adapter.h"

int main() {
   std::cout << "Hello, Wegwart!" << std::endl;
   auto test = Adapter::Create("test");
   return 0;
}