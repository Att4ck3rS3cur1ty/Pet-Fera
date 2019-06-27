#include "../header/mamifero.h"
#include "../header/animal.h"

Mamifero::Mamifero():Animal(){};

Mamifero::Mamifero(int Id, std::string Classe, std::string NomeCientifico, char Sexo, double Tamanho, std::string Dieta, Veterinario Novo_Veterinario, Tratador Novo_Tratador, std::string NomeBatismo, std::string cor_pelo):Animal(Id, Classe, NomeCientifico, Sexo, Tamanho, Dieta, Novo_Veterinario, Novo_Tratador, NomeBatismo), m_cor_pelo(cor_pelo){};

Mamifero::~Mamifero(){};

std::string Mamifero::getCorPelo(){
		return m_cor_pelo;
}
	
void Mamifero::setCorPelo(std::string cor_pelo){
		m_cor_pelo = cor_pelo;
}