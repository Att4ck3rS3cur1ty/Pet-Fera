#include "../header/funcionario.h"

// getters
int Funcionario::getId(){
	return m_id;
}

std::string Funcionario::getNome(){
	return m_nome;
}

std::string Funcionario::getCpf(){
	return m_cpf;
}

short Funcionario::getIdade(){
	return m_idade;
}

short Funcionario::getTipoSanguineo(){
	return m_tipo_sanguineo;
}

char Funcionario::getFatorRh(){
	return m_fator_rh;
}

std::string Funcionario::getEspecialidade(){
	return m_especialidade;
}

// setters

void Funcionario::setNome(std::string nome){
	m_nome = nome;
}

void Funcionario::setCpf(std::string cpf){
	m_cpf = cpf;
}

void Funcionario::setIdade(short idade){
	m_idade = idade;
}

void Funcionario::setTipoSanguineo(short tipo_sanguineo){
	m_tipo_sanguineo = tipo_sanguineo;
}

void Funcionario::setFatorRh(char fator_rh){
	m_fator_rh = fator_rh;
}

void Funcionario::setEspecialidade(std::string especialidade){
	m_especialidade = especialidade;
}

// Construtor & Destrutor

Funcionario::Funcionario(){};

Funcionario::~Funcionario(){};