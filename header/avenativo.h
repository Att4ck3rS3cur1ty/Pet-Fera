#ifndef _AVE_NATIVO_H_
#define _AVE_NATIVO_H_

#include "ave.h"
#include "animalnativo.h"

class avenativo : public animalnativo, public Ave {
  public:
    avenativo();
    avenativo(std::string autorizacao_ibama, std::string UF_de_origem);
    ~avenativo();
};

#endif