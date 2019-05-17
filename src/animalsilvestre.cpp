#include "animalsilvestre.h"

animalsilvestre::animalsilvestre(int id, std::string nome_cientifico, char sexo, double tamanho, std::string dieta, Veterinario veterinario, Tratador tratador, std::string nome_batismo, std::string autorizacao_ibama): Animal(id, nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, nome_batismo), m_autorizacao_ibama(autorizacao_ibama) {};

animalsilvestre::~animalsilvestre() {};

void animalsilvestre::setAutorizacao_ibama(std::string autorizacao_ibama){
  m_autorizacao_ibama = autorizacao_ibama;
}

std::string animalsilvestre::getAutorizacao_ibama(){
  return m_autorizacao_ibama;
}