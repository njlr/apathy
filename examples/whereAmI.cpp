#include <iostream>

#include <apathy/path.hpp>

int main() {
  std::cout << "You are at: \n" 
    << apathy::Path::cwd().string() 
    << std::endl;
  return 0;
}