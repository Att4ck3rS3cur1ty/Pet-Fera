#include "animalsilvestre.h"

animalsilvestre::animalsilvestre(int i, std::string autorizacao_ibama): Animal(int i) m_autorizacao_ibama(autorizacao_ibama) {};

animalsilvestre::~animalsilvestre() {};

void animalsilvestre::setAutorizacao_ibama(std::string autorizacao_ibama){
  m_autorizacao_ibama = autorizacao_ibama;
}

std::string animalsilvestre::getAutorizacao_ibama(){
  return m_autorizacao_ibama;
}