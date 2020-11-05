#include <iostream>
#include "List.hpp"
#include "Node.hpp"

int main(int argc, char** argv) {
  int input;
  std::cin >> input;
  List *list = new List();
  while (input != 0) {
    list->insert(input);
    std::cin >> input;
  }
  //list->print() ;
  //std::cout<< " ";
  std::cout << "s:" << list->size() << ", ";
  std::cout << "m:" << list->middle() << ", ";
  std::cout << "l:" << list->last() << ", ";
  std::cout << "r:" << list->remove() << ", ";
  //list->print() ;
  //std::cout<< " ";
  std::cout << "m:" << list->middle() << ", ";
  std::cout << "l:" << list->last() << ", "; 
  //list->print() ;
  //std::cout<< " ";
  list->rotate();
  //list->print() ;
  //std::cout<< " ";
  std::cout << "m:" << list->middle() << ", ";
  std::cout << "l:" << list->last() << std::endl;
  delete list;
  return 0;
}