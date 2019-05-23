#ifndef _MAMIFERO_EXOTICO_H_
#define _MAMIFERO_EXOTICO_H_

#include "animalexotico.h"

class mamiferoexotico : public animalexotico{
  public:
    mamiferoexotico(std::string autorizacao_ibama, std::string Pais_de_origem);
    ~mamiferoexotico();
}

#endif