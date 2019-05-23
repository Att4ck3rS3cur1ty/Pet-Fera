#ifndef _REPTIL_NATIVO_H_
#define _REPTIL_NATIVO_H_

#include "animalnativo.h"

class reptilnativo : public animalnativo{
  public:
    reptilnativo(std::string autorizacao_ibama, std::string UF_de_origem);
    ~reptilnativo();
}

#endif