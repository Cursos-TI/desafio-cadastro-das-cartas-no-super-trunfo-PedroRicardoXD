#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_NUMERIC, "pt_BR");// sei que isso não foi ensinado ainda mais eu tenho problmas com numeros errados. 

    char cidade1[50], estado1[3], ccarta1[5];// ponto de entrada carta 1
    float area1, pib1;
    int habitantes1, npturisticos1, ncarta1; // término da entrada da carta 1

    char cidade2[50], estado2[3], ccarta2[5];// ponto de entrada da carta 2
    float area2, pib2;
    int habitantes2, npturisticos2, ncarta2;// término da entrada da carta 2
    
    printf("BEM-VINDOS AO SUPER TRUNFO:CIDADES \n");

    printf("Dados da carta 1 \n");                     
                                                                    //Inicio do questionario da carta 1
    printf("Digite o número da carta: \n");
    scanf("%d", &ncarta1 );

    printf("Digite a sigla do estado: \n");
    scanf("%s", estado1 );

    printf("Digite o codigo da carta: \n");
    scanf("%s", ccarta1 );

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1 );

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &habitantes1 );

    printf("digite o tamanho da cidade em Km²: \n");
    scanf("%f", &area1 );

    printf("digite o pib da cidade: \n"); 
    scanf("%f", &pib1 );

    printf("Digite o nº de ponto turisticos da cidade: \n");
    scanf("%d", &npturisticos1 );
                                                                //Fim da questionario da carta 1

    printf("Dados da cidade 2\n ");

    printf("Digite o número da carta \n");
    scanf("%d", &ncarta2);

    printf("Digite o estado \n");
    scanf("%s", estado2);

    printf("Digite o código da carta \n");
    scanf("%s", ccarta2);

    printf("Digite o nome da cidade\n");
    scanf("%s", cidade2);

    printf("Digite o número de habitantesda cidade \n");
    scanf("%d", &habitantes2);

    printf("digite o tamanho da cidade em Km²: \n");
    scanf("%f", &area2 );

    printf("digite o pib da cidade: \n"); 
    scanf("%f", &pib2 );

    printf("Digite o nº de ponto turisticos da cidade: \n");
    scanf("%d", &npturisticos2 );
                                                                    //fim da do codigo da cidade 1 
    printf("****** DADOS DA CARTA 1 SUPER TRUNFO CIDADE ******\n");
//inicio da visualização da carta 1
    printf("Numero da carta: %d \n", ncarta1);
    printf("Estado: %s \n", estado1);
    printf("Codigo da Carta da cidade: %s \n", ccarta1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População da cidade: %d \n",habitantes1);
    printf("Area em Km²: %.3f \n", area1 / 1000);
    printf("Pib R$: %.2f \n", pib1 / 1000);
    printf("ponto turistico: %d \n", npturisticos1);
    
    printf("****** DADOS DA CARTA 2 SUPER TRUNFO ******\n");
                                                                    //inicio da visualização da carta 1
    printf("Numero da carta: %d \n", ncarta2);
    printf("Estado: %s \n", estado2);
    printf("Codigo da Carta da cidade: %s \n", ccarta2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População da cidade: %d \n",habitantes2);
    printf("Area em Km²: %.3f \n", area2 / 1000);
    printf("Pib R$: %.2f \n", pib2 / 1000);
    printf("ponto turistico: %d \n", npturisticos2);
    


    return 0;
}