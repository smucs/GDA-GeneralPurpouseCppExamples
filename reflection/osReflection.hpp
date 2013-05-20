#include "IReflection.hpp"

class osReflection : public IReflection {

public:
  osReflection();
  ~osReflection();
  const bool selectManifest(int);

};
