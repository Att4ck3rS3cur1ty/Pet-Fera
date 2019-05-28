#ifndef _ANFIBIO_NATIVO_H_
#define _ANFIBIO_NATIVO_H_

#include "anfibio.h"
#include "animalnativo.h"

class anfibionativo : public animalnativo, public Anfibio{
  public:
    anfibionativo();
    anfibionativo(std::string autorizacao_ibama, std::string UF_de_origem);
    ~anfibionativo();
};

#endif