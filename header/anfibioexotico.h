#ifndef _ANFIBIO_EXOTICO_H_
#define _ANFIBIO_EXOTICO_H_

#include "anfibio.h"
#include "animalexotico.h"

class anfibioexotico : public animalexotico, public Anfibio{
  public:
    anfibioexotico();
    anfibioexotico(std::string autorizacao_ibama, std::string Pais_de_origem);
    ~anfibioexotico();
};

#endif