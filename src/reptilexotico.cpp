#include "../header/reptilexotico.h"

reptilexotico::reptilexotico(){}

reptilexotico::reptilexotico(int Id, std::string Classe, std::string NomeCientifico, char Sexo, double Tamanho, std::string Dieta, Veterinario Novo_Veterinario, Tratador Novo_Tratador, std::string NomeBatismo, bool venenoso, std::string tipo_veneno):Reptil(Id, Classe, NomeCientifico, Sexo, Tamanho, Dieta, Novo_Veterinario, Novo_Tratador, NomeBatismo, venenoso, tipo_veneno){};

reptilexotico::~reptilexotico(){};