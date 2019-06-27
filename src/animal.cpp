#include "../header/animal.h"
#include "../header/tratador.h"
#include "../header/veterinario.h"

// getters

int Animal::getId(){
	return m_id;
}
std::string Animal::getClasse(){
	return m_classe;
}

std::string Animal::getNomeCientifico(){
	return m_nome_cientifico;
}

char Animal::getSexo(){
	return m_sexo;
}

double Animal::getTamanho(){
	return m_tamanho;
}

std::string Animal::getDieta(){
	return m_dieta;
}	

Veterinario Animal::getVeterinario(){
	return m_veterinario;
}

Tratador Animal::getTratador(){
	return m_tratador;
}

std::string Animal::getNomeBatismo(){
	return m_nome_batismo;
}

std::string Animal::getNativo_ou_exotico(){
	return m_nativo_ou_exotico;
}

// setters

void Animal::setClasse(std::string classe){
	m_classe = classe;
}

void Animal::setNomeCientifico(std::string nome_cientifico){
	m_nome_cientifico = nome_cientifico;
}

void Animal::setSexo(char sexo){
	m_sexo = sexo;
}

void Animal::setTamanho(double tamanho){
	m_tamanho = tamanho;
}

void Animal::setDieta(std::string dieta){
	m_dieta = dieta;
}

void Animal::setVeterinario(Veterinario veterinario){
	m_veterinario = veterinario;
}

void Animal::setTratador(Tratador tratador){
	m_tratador = tratador;
}

void Animal::setNomeBatismo(std::string nome_batismo){
	m_nome_batismo = nome_batismo;
}

void Animal::setNativo_ou_exotico(std::string nativo_ou_exotico){
  m_nativo_ou_exotico = nativo_ou_exotico;
}

Animal::Animal(){}

Animal::Animal(int Id, std::string Classe, std::string NomeCientifico, char Sexo, double Tamanho, std::string Dieta, Veterinario Novo_Veterinario, Tratador Novo_Tratador, std::string NomeBatismo): m_id(Id), m_classe(Classe), m_nome_cientifico(NomeCientifico), m_sexo(Sexo), m_tamanho(Tamanho), m_dieta(Dieta), m_veterinario(Novo_Veterinario), m_tratador(Novo_Tratador), m_nome_batismo(NomeBatismo){};

Animal::~Animal(){}