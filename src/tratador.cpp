#include "../header/tratador.h"

int Tratador::getM_nivel_de_seguranca(){
  return m_nivel_de_seguranca;
}

void Tratador::setM_nivel_de_seguranca(int nivel_de_seguranca){
  m_nivel_de_seguranca = nivel_de_seguranca;
}

Tratador::Tratador():Funcionario(){};

Tratador::Tratador(int id, std::string nome, std::string cpf, short idade, std::string tipo_sanguineo, char fator_rh, std::string especialidade, int nivel_de_seguranca):Funcionario(id, nome, cpf, idade, tipo_sanguineo, fator_rh, especialidade), m_nivel_de_seguranca(nivel_de_seguranca){};

Tratador::~Tratador(){};