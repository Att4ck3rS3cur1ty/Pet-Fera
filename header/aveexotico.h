#ifndef _AVE_EXOTICO_H_
#define _AVE_EXOTICO_H_

#include "animalexotico.h"

class aveexotico : public animalexotico{
  public:
    aveexotico(std::string autorizacao_ibama, std::string Pais_de_origem);
    ~aveexotico();
}

#endif