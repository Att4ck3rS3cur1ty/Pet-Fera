#include "animalnativo.h"

animalnativo::animalnativo(int id, std::string nome_cientifico, char sexo, double tamanho, std::string dieta, Veterinario veterinario, Tratador tratador, std::string nome_batismo, std::string autorizacao_ibama, std::string UF_de_origem, std::string autorizacao_nativo):animalsilvestre(id, nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, nome_batismo, autorizacao_ibama), m_UF_de_origem(UF_de_origem), m_autorizacao_nativo(autorizacao_nativo) {};

animalnativo::~animalnativo() {};

void setUF_de_origem(std::string UF_de_origem){
  m_UF_de_origem = UF_de_origem;
}

std::string getUF_de_origem(){
  return m_UF_de_origem;
}

void setAutorizacao_nativo(std::string autorizacao_nativo){
  m_autorizacao_nativo = autorizacao_nativo;
}

std::string getAutorizacao_nativo(){
  return m_autorizacao_nativo;
}