#include "testMove.hpp"
#include <iostream>

using namespace std;

testMove::testMove(const testMove& T) {

  cout << __PRETTY_FUNCTION__<<" copy constructor" <<endl;
  this->test = T.test;
}

testMove::testMove() : test( NULL) {
  cout<<__PRETTY_FUNCTION__<<" testMove ctr "<<endl;
}

testMove& testMove::operator=(testMove& T) {

  cout<<__PRETTY_FUNCTION__<<" operator ="<<endl;
  swap(T.test,this->test);
  return *this;

} 
testMove::testMove(testMove&& T) {

  cout << __PRETTY_FUNCTION__<<" move constructor" << endl;

  this->test = T.test;
  T.test = NULL;

}
void testMove::setMember(const int& a_int) {

  cout << __PRETTY_FUNCTION__<<" setMember"<<endl;

  if (test == NULL) {

    test  = new int;
    *test = a_int;
  }

}

void testMove::print() {

  // without this it will core dump
  if (test not_eq NULL) {

    cout<<__PRETTY_FUNCTION__<<" *test = "<<*test<<endl;
    cout<<__PRETTY_FUNCTION__<<" &test = "<<&test<<endl;
  }
  else {
    cout<<__PRETTY_FUNCTION__<<" test was equal to NULL" <<endl;
  } 
}

testMove::~testMove(){
  
  if (test not_eq NULL) {

    cout<<__PRETTY_FUNCTION__<<" delete"<<endl;
    delete test;
    test = NULL;
  }
}

