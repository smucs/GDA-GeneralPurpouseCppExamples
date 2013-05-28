#ifndef TESTMOVE_HPP
#define TESTMOVE_HPP

class testMove {

public :

  testMove();
  testMove(const testMove& t);
  testMove(testMove&& t);
  ~testMove();
  void setMember(const int& a_int);
  void print();
  testMove& operator=(testMove& T);
private :
  int* test;


};

#endif
