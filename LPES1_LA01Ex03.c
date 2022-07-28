#include <stdio.h>
#include <stdlib.h>

int main(){
    //Declaracao variaveis
    float massa;
    int temporizador = 0;

    //Requisitando massa inicial
    printf("Informe a massa atual do material, em gramas: ");
    scanf("%f", &massa);

    //Calculos
    while(massa >= 0.1){
        massa = massa - massa*0.25;
        temporizador = temporizador + 30;
    }

    //Conclusao
    printf("Levara %d segundos ate que a massa deste material se torne menor que %.1f grama.\n\n", temporizador + 1, massa);

    system("PAUSE");
    return 0;
}
