#ifndef IMANIFEST_HPP
#define IMANIFEST_HPP
#include <iostream>

class IManifest {

public:
  virtual ~IManifest(){}
  virtual  const bool implement (void)=0;

};
#endif
