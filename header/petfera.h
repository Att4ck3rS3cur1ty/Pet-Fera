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
        /** @brief Define lista dos funcionários catalogada por IDs*/
        map<int, Funcionario*> Lista_de_Funcionarios;
        /** @brief Define lista dos animais catalogada por IDs*/
        map<int, Animal*> Lista_de_Animais;
	public:
		Petfera();	
		~Petfera();
        /** @brief Cadastra novo animal na lista*/
        void cadastrar_animal();
        /** @brief Registra animais da lista em arquivo CSV*/
        void registrar_animais();
        /** @brief Extrai lista de animais de arquivo CSV*/
        void extrair_animais();
        /** @brief Cadastra novo funcionário*/
        void cadastrar_funcionario();
        /** @brief Cadastra novo funcionário como tratador*/
        void cadastrar_tratador();
        /** @brief Cadastra novo funcionário como veterinário*/
        void cadastrar_veterinario();
        /** @brief Registra funcionários da lista em arquivo CSV*/
        void registrar_funcionarios();
        /** @brief Extrai lista de funcionários de arquivo CSV*/
        void extrair_funcionarios();
        /** 
        * @brief Função que faz busca de ID na lista de funcionários
        * @param my_id ID do funcionário a ser procurado
        * @return Booleana da presença ou não do funcionário na lista
        */
        bool funcionario_busca_id(int my_id);
        /** 
        * @brief Função que faz busca de ID na lista de animais
        * @param my_id ID do animal a ser procurado
        * @return Booleana da presença ou não do animal na lista
        */
        bool animal_busca_id(int my_id);	
};

#endif 
