#include "../header/reptil.h"

Reptil::Reptil():Animal(){};

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