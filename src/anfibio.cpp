#include "../include/anfibio.h"
#include "../include/animal.h"
#include <iostream>

	Anfibio::Anfibio(){};
	Anfibio::Anfibio(int m_id,std::string m_nome, std::string m_nome_cientifico, std::string m_classe, char sexo, float m_tamanho, std::string m_dieta, std::string m_nome_batismo, Veterinario m_veterinario, Tratadir m_tratador, int m_total_mudas, std::string m_ultima_muda):Animal(m_id, m_nome, m_nome_cientifico, m_classe, m_sexo, m_tamanho, m_dieta, m_nome_batismo, m_veterinario, m_tratador), m_total_mudas(m_total_mudas), ultima_muda(ultima_muda){}
	Anfibio::~Anfibio(){}
	
	//Preencher os atributos da classe anfibio
	bool Anfibio::preencher_atributos_anfibio(){
	//(...)
}
	
	//Acessar o numero total de mudas
	int Anfibio::getTotalMudas(){
		return this->m_total_mudas;
}

	//Acessar a ultima muda
	std::string Anfibio::getUltimaMuda(){
		return this->m_ultima_muda;
}
	
	//Alterar o total de mudas
	void Anfibio::setTotalMudas(int m_total_mudas){
		this->m_total_mudas = m_total_mudas;
}
	//Alterar a ultima muda
	void Anfibio::setUltimaMuda(std::string m_ultima_muda){
		this->m_ultima_muda = m_ultima_muda;
}
