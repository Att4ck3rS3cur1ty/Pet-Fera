#ifndef _MAMIFERO_NATIVO_H_
#define _MAMIFERO_NATIVO_H_

#include "mamifero.h"
#include "animalnativo.h"

class mamiferonativo : public animalnativo, public Mamifero{
  public:
    mamiferonativo();
    ~mamiferonativo();
};

#endif