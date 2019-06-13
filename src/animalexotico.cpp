#include "../header/animalexotico.h"

animalexotico::animalexotico():animalsilvestre(){};

animalexotico::~animalexotico() {};

void animalexotico::setPais_de_origem(std::string Pais_de_origem){
  m_Pais_de_origem = Pais_de_origem;
}

std::string animalexotico::getPais_de_origem(){
  return m_Pais_de_origem;
}