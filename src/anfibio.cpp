#include "../header/anfibio.h"
#include "../header/animal.h"
#include <iostream>

Anfibio::Anfibio():Animal(){};
Anfibio::~Anfibio(){};
	
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