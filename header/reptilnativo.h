#ifndef _REPTIL_NATIVO_H_
#define _REPTIL_NATIVO_H_

#include "reptil.h"
#include "animalnativo.h"

class reptilnativo : public animalnativo, public Reptil{
  public:
    reptilnativo();
    ~reptilnativo();
};

#endif