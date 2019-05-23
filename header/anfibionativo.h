#ifndef _ANFIBIO_NATIVO_H_
#define _ANFIBIO_NATIVO_H_

#include "animalnativo.h"

class anfibionativo : public animalnativo{
  public:
    anfibionativo(std::string autorizacao_ibama, std::string UF_de_origem);
    ~anfibionativo();
}

#endif