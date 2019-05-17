#include "animal.h"
#include "tratador.h"
#include "veterinario.h"

// getters

int Animal::getId(){
	return Id;
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

Animal::Animal(): m_id(0), m_classe(""), m_nome_cientifico(""), 
	m_sexo('0'), m_tamanho(0), m_dieta(""), m_veterinario(""), m_tratador(""), m_nome_batismo(""){

}
