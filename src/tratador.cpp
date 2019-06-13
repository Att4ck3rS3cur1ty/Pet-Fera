#include "../header/tratador.h"

int Tratador::getM_nivel_de_seguranca(){
  return m_nivel_de_seguranca;
}

void Tratador::setM_nivel_de_seguranca(int nivel_de_seguranca){
  m_nivel_de_seguranca = nivel_de_seguranca;
}

Tratador::Tratador():Funcionario(){};

Tratador::~Tratador(){};