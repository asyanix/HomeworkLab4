#include <iostream>
using namespace std;

int
main()
{
  // Измененный комментарий
  std::string name;
  std::cout << "Enter your name: ";
  std::cin >> name;
  std::cout << "Hello, World from " << name << "!" << std::endl;
}

