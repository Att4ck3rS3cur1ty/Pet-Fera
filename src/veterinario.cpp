#include "../header/veterinario.h"

std::string Veterinario::getM_crmv(){
  return m_crmv;
}

void Veterinario::setM_crmv(std::string crmv){
  m_crmv = crmv;
}

Veterinario::Veterinario():Funcionario(){};

Veterinario::Veterinario(int id, std::string funcao, std::string nome, std::string cpf, short idade, std::string tipo_sanguineo, char fator_rh, std::string especialidade, std::string crmv):Funcionario(id, funcao, nome, cpf, idade, tipo_sanguineo, fator_rh, especialidade), m_crmv(crmv){};

Veterinario::~Veterinario(){};