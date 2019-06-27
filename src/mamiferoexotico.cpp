#include "../header/mamiferoexotico.h"

mamiferoexotico::mamiferoexotico(){}

mamiferoexotico::mamiferoexotico(int Id, std::string Classe, std::string NomeCientifico, char Sexo, double Tamanho, std::string Dieta, Veterinario Novo_Veterinario, Tratador Novo_Tratador, std::string NomeBatismo, std::string cor_pelo):Mamifero(Id, Classe, NomeCientifico, Sexo, Tamanho, Dieta, Novo_Veterinario, Novo_Tratador, NomeBatismo, cor_pelo){};

mamiferoexotico::~mamiferoexotico(){};