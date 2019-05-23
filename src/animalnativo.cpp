#include "animalnativo.h"

animalnativo::animalnativo(std::string autorizacao_ibama, std::string UF_de_origem):animalsilvestre(autorizacao_ibama), m_UF_de_origem(UF_de_origem){};

animalnativo::~animalnativo() {};

void animalnativo::setUF_de_origem(std::string UF_de_origem){
  m_UF_de_origem = UF_de_origem;
}

std::string animalnativo::getUF_de_origem(){
  return m_UF_de_origem;
}