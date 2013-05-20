#pragma once
#include "IManifest.hpp"

class linuxManifest: public IManifest {

public:
  linuxManifest();
  ~linuxManifest();
  const bool implement();

};
