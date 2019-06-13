#ifndef _ANFIBIO_EXOTICO_H_
#define _ANFIBIO_EXOTICO_H_

#include "anfibio.h"
#include "animalexotico.h"

class anfibioexotico : public animalexotico, public Anfibio{
  public:
    anfibioexotico();
    ~anfibioexotico();
};

#endif