#ifndef PETFERA_H
#define PETFERA_H
#include <map>
using std::map;
using std::pair;

#include "tratador.h"
#include "veterinario.h"
#include "animal.h"
#include "animalsilvestre.h"
#include "anfibio.h"
#include "ave.h"
#include "reptil.h"
#include "mamifero.h"
#include "animalexotico.h"
#include "anfibioexotico.h"
#include "aveexotico.h"
#include "reptilexotico.h"
#include "mamiferoexotico.h"
#include "animalnativo.h"
#include "anfibionativo.h"
#include "avenativo.h"
#include "reptilnativo.h"
#include "mamiferonativo.h"

class Petfera{
  private:
    map<int, Tratador> Lista_de_Tratadores;
    map<int, Veterinario> Lista_de_Veterinarios;
    map<int, Ave> Lista_de_Aves;
    map<int, Anfibio> Lista_de_Anfibios;
    map<int, Mamifero> Lista_de_Mamiferos;
    map<int, Reptil> Lista_de_Repteis;
	public:
		Petfera();	
		~Petfera();
    void cadastrar_funcionario();
    void cadastrar_tratador();
    void cadastrar_veterinario();
    void registrar_funcionarios();
    void extrair_funcionarios();
    bool funcionario_busca_id(int my_id);
/*  	void CadastrarAnimal();
		void RemoverAnimal();
		void AlterarAnimal();
*/		
};

#endif 
