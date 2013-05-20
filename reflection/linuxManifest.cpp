#include "linuxManifest.hpp"
#include <iostream>

using std::cout;
using std::endl;

linuxManifest::linuxManifest(){

}
linuxManifest::~linuxManifest(){}

const bool linuxManifest::implement(void){

  cout<<"implement linux stuff"<<endl;
  return true;
}
