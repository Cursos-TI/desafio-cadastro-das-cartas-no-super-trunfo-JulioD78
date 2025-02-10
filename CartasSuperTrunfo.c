#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char Estado[2];
    char Codigodacidade[5];
    char Nomedacidade[30];
    int Populacao;
    float Areaemkm;
    float Pib;
    int Nptsturisticos;
    float Densidadepopuacional;
    float Pibpercapita;
    float Superpoder;
    printf("Digite o Código da Cidade:\n");
    scanf("%s",&Codigodacidade);
    printf("Digite o nome do Estado:\n");
    scanf("%s",&Estado);
    printf("Digite o nome da Cidade:\n");
    scanf("%s",&Nomedacidade);
    printf("Digite a Quantidade da População:\n");
    scanf("%d",&Populacao);
    printf("Digite a Área em Km2:\n");
    scanf("%f",&Areaemkm);
    printf("Digite o PIB:\n");
    scanf("%f",&Pib);
    printf("Digite o Número de Pontos Turísticos:\n");
    scanf("%d",&Nptsturisticos);
    printf("Código da Cidade: %s     Nome do Estado: %s\n",Codigodacidade ,Estado);
    printf("Nome da Cidade : %s\n",Nomedacidade);
    printf("População : %d     Área em KM2: %f\n",Populacao,Areaemkm);
    printf("PIB : %f     Número de Pontos Turísticos: %d\n",Pib,Nptsturisticos);
    

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
