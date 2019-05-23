#ifndef _ANFIBIO_EXOTICO_H_
#define _ANFIBIO_EXOTICO_H_

#include "animalexotico.h"

class anfibioexotico : public animalexotico{
  public:
    anfibioexotico(std::string autorizacao_ibama, std::string Pais_de_origem);
    ~anfibioexotico();
}

#endif