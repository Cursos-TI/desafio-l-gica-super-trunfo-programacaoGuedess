#include <stdio.h>

int main(){

int carta1, carta2;
int  cidade;
float area, codigo, populacao, PIBpercapita, PIB, densidadePopulacional;
char estado;




printf("Digite o codigo da carta1: \n");
scanf("%s", &codigo);
printf("Digite o estado da carta1: \n");
scanf("%s", &estado);
printf("Digite a cidade da carta1: \n");
scanf("%S", &cidade);
printf("Digite a populacao da carta1: \n");
scanf("%f", &populacao);
printf("Digite a area da carta1: \n");
scanf("%f", &area);
printf("CDigite o PIBpercapita da carta1: \n");
scanf("%f", &PIBpercapita);
printf("Digite o PIB da carta1: \n");
scanf("%f", &PIB);
printf("Digite a densidadePopulacional da carta1: \n");
scanf("%f", &densidadePopulacional);

printf("Digite o codigo da carta2: \n");
scanf("%s", &codigo);
printf("Digite o estado da carta2: \n");
scanf("%s", &estado);
printf("Digite a cidade da carta2: \n");
scanf("%S", &cidade);
printf("Digite a populacao da carta2: \n");
scanf("%f", &populacao);
printf("Digite a area da carta2: \n");
scanf("%f",& area);
printf("CDigite o PIBpercapita da carta2: \n");
scanf("%f", &PIBpercapita);
printf("Digite o PIB da carta2: \n");
scanf("%f", &PIB);
printf("Digite a densidadePopulacional da carta2: \n");
scanf("%f", &densidadePopulacional);

if(populacao > populacao) {
printf("cidade 1 tem maior populacao. \n");

}else{
    printf("Cidade 2 tem maior populacao. \n");
}

if(area > area){
    printf("Cidade 1 tem maior area. \n");

}else{
    printf("cidade 2 tem maior area. \n");
}

if(PIBpercapita > PIBpercapita){
    printf("Cidade 1 tem maior PIBpercapita. \n");

}else{
    printf("Cidade 2 tem maior PIBpercapita. \n");
}

if(PIB > PIB){
    printf("Cidade 1 tem maior PIB. \n");

}else{
    printf("Cidade 2 tem maior PIB. \n");
}

if(densidadePopulacional > densidadePopulacional){
    printf("Cidade 1 tem maior densidadePopulacional. \n");

}else{
    printf("Cidade 2 tem maior densidadePopulacional. \n");
}

}

 