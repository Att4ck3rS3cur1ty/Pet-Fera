#ifndef _REPTIL_EXOTICO_H_
#define _REPTIL_EXOTICO_H_

#include "reptil.h"
#include "animalexotico.h"

class reptilexotico : public animalexotico, public Reptil{
  public:
    reptilexotico();
    ~reptilexotico();
};

#endif