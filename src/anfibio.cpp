#include "../include/anfibio.h"
#include "../include/animal.h"
#include <iostream>

	Anfibio::Anfibio(){}
	Anfibio::Anfibio(int id,std::string nome, std::string nome_cientifico, std::string classe, char sexo, float tamanho, std::string dieta, std::string nome_batismo, Veterinario veterinario, Tratadir tratador, int total_mudas, std::string ultima_muda):Animal(Id, m_nome, m_nome_cientifico, m_classe, m_sexo, m_tamanho, m_dieta, m_nome_batismo, m_veterinario, m_tratador), m_total_mudas(m_total_mudas), ultima_muda(ultima_muda){}
	Anfibio::~Anfibio(){}
	
	//Preencher os atributos da classe anfibio
	bool Anfibio::preencher_atributos_anfibio(){
	//(...)
}
	
	//Acessar o numero total de mudas
	int Anfibio::getTotalMudas(){
		return m_total_mudas;
}

	//Acessar a ultima muda
	std::string Anfibio::getUltimaMuda(){
		return m_ultima_muda;
}
	
	//Alterar o total de mudas
	void Anfibio::setTotalMudas(int total_mudas){
		m_total_mudas = total_mudas;
}
	//Alterar a ultima muda
	void Anfibio::setUltimaMuda(std::string ultima_muda){
		m_ultima_muda = ultima_muda;
}
