#ifndef _REPTIL_EXOTICO_H_
#define _REPTIL_EXOTICO_H_

#include "animalexotico.h"

class reptilexotico : public animalexotico{
  public:
    reptilexotico(std::string autorizacao_ibama, std::string Pais_de_origem);
    ~reptilexotico();
}

#endif