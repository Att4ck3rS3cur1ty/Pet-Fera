#include "../header/anfibio.h"
#include "../header/animal.h"
#include <iostream>

Anfibio::Anfibio():Animal(){};

Anfibio::Anfibio(int Id, std::string Classe, std::string NomeCientifico, char Sexo, double Tamanho, std::string Dieta, Veterinario Novo_Veterinario, Tratador Novo_Tratador, std::string NomeBatismo, int total_mudas, std::string ultima_muda):Animal(Id, Classe, NomeCientifico, Sexo, Tamanho, Dieta, Novo_Veterinario, Novo_Tratador, NomeBatismo), m_total_mudas(total_mudas), m_ultima_muda(ultima_muda){};

Anfibio::~Anfibio(){};
	
int Anfibio::getTotalMudas(){
		return m_total_mudas;
}

std::string Anfibio::getUltimaMuda(){
		return m_ultima_muda;
}
	
void Anfibio::setTotalMudas(int total_mudas){
		m_total_mudas = total_mudas;
}

void Anfibio::setUltimaMuda(std::string ultima_muda){
		m_ultima_muda = ultima_muda;
}