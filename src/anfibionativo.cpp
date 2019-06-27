#include "../header/anfibionativo.h"

anfibionativo::anfibionativo(){}

anfibionativo::anfibionativo(int Id, std::string Classe, std::string NomeCientifico, char Sexo, double Tamanho, std::string Dieta, Veterinario Novo_Veterinario, Tratador Novo_Tratador, std::string NomeBatismo, int total_mudas, std::string ultima_muda):Anfibio(Id, Classe, NomeCientifico, Sexo, Tamanho, Dieta, Novo_Veterinario, Novo_Tratador, NomeBatismo, total_mudas, ultima_muda){};

anfibionativo::~anfibionativo(){};