#include <iostream>
#include <utility>
#include "testMove.hpp"

using namespace std;

int main (void) { 

  testMove test;
  test.setMember(5);
  test.print();

  testMove secondTest = std::move(test);

  secondTest.print();
  test.print();

  test = secondTest;
  
  return 0;
}
