#include "animalexotico.h"

animalexotico::animalexotico(int id, std::string nome_cientifico, char sexo, double tamanho, std::string dieta, Veterinario veterinario, Tratador tratador, std::string nome_batismo, std::string autorizacao_ibama, std::string Pais_de_origem):animalsilvestre(id, nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, nome_batismo, autorizacao_ibama), m_Pais_de_origem(Pais_de_origem) {};

animalexotico::~animalexotico() {};

void animalexotico::setPais_de_origem(std::string Pais_de_origem){
  m_Pais_de_origem = Pais_de_origem;
}

std::string animalexotico::getPais_de_origem(){
  return m_Pais_de_origem;
}