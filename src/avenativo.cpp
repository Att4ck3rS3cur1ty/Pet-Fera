#include "../header/avenativo.h"

avenativo::avenativo(){}

avenativo::avenativo(int Id, std::string Classe, std::string NomeCientifico, char Sexo, double Tamanho, std::string Dieta, Veterinario Novo_Veterinario, Tratador Novo_Tratador, std::string NomeBatismo, double tamanho_do_bico_cm, double envergadura_das_asas):Ave(Id, Classe, NomeCientifico, Sexo, Tamanho, Dieta, Novo_Veterinario, Novo_Tratador, NomeBatismo, tamanho_do_bico_cm, envergadura_das_asas){};

avenativo::~avenativo(){};