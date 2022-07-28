#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, idade, opiniao, regular, bom, otimo, soma_idades, total_espectadores;
    float porcentagem_bom, media_otimo;

    i = 1;
    regular = 0;
    bom = 0;
    otimo = 0;
    soma_idades = 0;
    total_espectadores = 0;

    printf("QUESTIONARIO\n\n");
    printf("[1] Regular\n");
    printf("[2] Bom\n");
    printf("[3] Otimo\n");
    printf("[4] Concluir questionario\n");

    while(i){
        printf("\nInforme sua idade: ");
        scanf("%d", &idade);
        printf("Insira o numero equivalente a sua opiniao sobre o filme, ou conclua o questionario: ");
        scanf("%d", &opiniao);
        if(opiniao == 1){
            regular++;
            total_espectadores++;
        }
        if(opiniao == 2){
            bom++;
            total_espectadores++;
        }
        if(opiniao == 3){
            otimo++;
            soma_idades += idade;
            total_espectadores++;
        }
        if(opiniao == 4){
            i = 0;
        }
    }

porcentagem_bom = ((float)bom/total_espectadores) * 100;
media_otimo = soma_idades/otimo;

printf("\nRESULTADOS");
printf("\n- Quantidade de pessoas que responderam regular: %d", regular);
printf("\n- Porcentagem dos que responderam bom, entre todos os entrevistados: %.2f", porcentagem_bom);
printf("\n- Media das idades das pessoas que responderam otimo: %.2f\n\n", media_otimo);

system("PAUSE");
return 0;
}
