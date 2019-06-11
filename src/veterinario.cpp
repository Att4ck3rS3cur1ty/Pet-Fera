#include "../header/veterinario.h"

std::string Veterinario::getM_crmv(){
  return m_crmv;
}

void Veterinario::setM_crmv(std::string crmv){
  m_crmv = crmv;
}

Veterinario::Veterinario():Funcionario(){};

Veterinario::~Veterinario(){};