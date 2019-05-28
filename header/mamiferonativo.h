#ifndef _MAMIFERO_NATIVO_H_
#define _MAMIFERO_NATIVO_H_

#include "mamifero.h"
#include "animalnativo.h"

class mamiferonativo : public animalnativo, public Mamifero{
  public:
    mamiferonativo();
    mamiferonativo(std::string autorizacao_ibama, std::string UF_de_origem);
    ~mamiferonativo();
};

#endif