#include "animalexotico.h"

animalexotico::animalexotico(std::string autorizacao_ibama, std::string Pais_de_origem):animalsilvestre(autorizacao_ibama), m_Pais_de_origem(Pais_de_origem) {};

animalexotico::~animalexotico() {};

void animalexotico::setPais_de_origem(std::string Pais_de_origem){
  m_Pais_de_origem = Pais_de_origem;
}

std::string animalexotico::getPais_de_origem(){
  return m_Pais_de_origem;
}