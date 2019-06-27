#include "../header/reptil.h"

Reptil::Reptil():Animal(){};

Reptil::Reptil(int Id, std::string Classe, std::string NomeCientifico, char Sexo, double Tamanho, std::string Dieta, Veterinario Novo_Veterinario, Tratador Novo_Tratador, std::string NomeBatismo, bool venenoso, std::string tipo_veneno):Animal(Id, Classe, NomeCientifico, Sexo, Tamanho, Dieta, Novo_Veterinario, Novo_Tratador, NomeBatismo), m_venenoso(venenoso), m_tipo_veneno(tipo_veneno){};

Reptil::~Reptil(){};

bool Reptil::getM_venenoso(){
  return m_venenoso;
}

void Reptil::setM_venenoso(bool venenoso){
  m_venenoso = venenoso;
}

std::string Reptil::getM_tipo_veneno(){
  return m_tipo_veneno;
}

void Reptil::setM_tipo_veneno(std::string tipo_veneno){
  m_tipo_veneno = tipo_veneno;
}