#ifndef _MAMIFERO_EXOTICO_H_
#define _MAMIFERO_EXOTICO_H_

#include "mamifero.h"
#include "animalexotico.h"

class mamiferoexotico : public animalexotico, public Mamifero{
  public:
    mamiferoexotico();
    mamiferoexotico(std::string autorizacao_ibama, std::string Pais_de_origem);
    ~mamiferoexotico();
};

#endif