#include "osReflection.hpp"
#include "linuxManifest.hpp"

osReflection::osReflection(){

    m_reflection[0]= new linuxManifest;
}

osReflection::~osReflection(){}


const bool osReflection::selectManifest(int a_manifest) {

  TMap::iterator it = m_reflection.find(a_manifest);


  if (it not_eq m_reflection.end() ) {
    it->second->implement();
  }
  return true;

}
