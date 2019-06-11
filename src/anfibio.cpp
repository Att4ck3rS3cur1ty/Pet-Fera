#include "../header/anfibio.h"
#include "../header/animal.h"
#include <iostream>

Anfibio::Anfibio(){}
Anfibio::Anfibio(int id,std::string nome, std::string nome_cientifico, std::string classe, char sexo, float tamanho, std::string dieta, std::string nome_batismo, Veterinario veterinario, Tratador tratador, int total_mudas, std::string ultima_muda):Animal(id, nome, nome_cientifico, classe, sexo, tamanho, dieta, nome_batismo, veterinario, tratador), m_total_mudas(m_total_mudas), ultima_muda(ultima_muda){};
Anfibio::~Anfibio(){};
	
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
