#include "../header/ave.h"

Ave::Ave():Animal(){};

Ave::Ave(int Id, std::string Classe, std::string NomeCientifico, char Sexo, double Tamanho, std::string Dieta, Veterinario Novo_Veterinario, Tratador Novo_Tratador, std::string NomeBatismo, double tamanho_do_bico_cm, double envergadura_das_asas):Animal(Id, Classe, NomeCientifico, Sexo, Tamanho, Dieta, Novo_Veterinario, Novo_Tratador, NomeBatismo), m_tamanho_do_bico_cm(tamanho_do_bico_cm), m_envergadura_das_asas(envergadura_das_asas){};

Ave::~Ave(){};

double Ave::getM_tamanho_do_bico_cm(){
  return m_tamanho_do_bico_cm;
}

void Ave::setM_tamanho_do_bico_cm(double tamanho_do_bico_cm){
  m_tamanho_do_bico_cm = tamanho_do_bico_cm;
}
    
double Ave::getM_envergadura_das_asas(){
  return m_envergadura_das_asas;
}

void Ave::setM_envergadura_das_asas(double envergadura_das_asas){
  m_envergadura_das_asas = envergadura_das_asas;
}