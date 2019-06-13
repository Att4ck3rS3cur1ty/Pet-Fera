#include "../header/animalsilvestre.h"

animalsilvestre::animalsilvestre():Animal(){};

animalsilvestre::~animalsilvestre() {};

void animalsilvestre::setAutorizacao_ibama(std::string autorizacao_ibama){
  m_autorizacao_ibama = autorizacao_ibama;
}

std::string animalsilvestre::getAutorizacao_ibama(){
  return m_autorizacao_ibama;
}