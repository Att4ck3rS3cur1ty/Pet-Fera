#ifndef _ANIMAL_NATIVO_H_
#define _ANIMAL_NATIVO_H_

#include "animalnativo.h"

class avenativo : public animalnativo{
  public:
    avenativo(std::string autorizacao_ibama, std::string UF_de_origem);
    ~avenativo();
}

#endif