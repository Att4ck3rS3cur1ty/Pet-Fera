#ifndef _MAMIFERO_H
#define _MAMIFERO_H
#include "animal.h"

class Mamifero : public Animal {
	
	protected:
		std::string m_cor_pelo;
	public:
		Mamifero();
		~Mamifero();
	
	//Acessar o atribulo da cor do pelo
	std::string getCorPelo();

	//Alterar o atributo da cor do pelo	
	void setCorPelo(std::string cor_pelo);
};

#endif