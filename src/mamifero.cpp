#include "../header/mamifero.h"
#include "../header/animal.h"

Mamifero::Mamifero():Animal(){};
Mamifero::~Mamifero(){};

std::string Mamifero::getCorPelo(){
		return m_cor_pelo;
}
	
void Mamifero::setCorPelo(std::string cor_pelo){
		m_cor_pelo = cor_pelo;
}