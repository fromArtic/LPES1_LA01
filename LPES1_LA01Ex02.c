#include <stdio.h>
#include <stdlib.h>

int main(){
    //Declaracao variaveis
    float preco_carro, taxa1, taxa2, valor_seguro, valor_franquia;
    char tamanho_carro, regiao_carro;

    //Requisitando preco do veiculo
    printf("Informe o preco do veiculo que planeja comprar: R$");
    scanf("%f", &preco_carro);

    //Requisitando tamanho do veiculo
    getchar();
    printf("\nQual o tamanho do veiculo (P, M ou G)? ");
    scanf("%c", &tamanho_carro);
    while(tamanho_carro != 'P' && tamanho_carro != 'p' && tamanho_carro != 'M' && tamanho_carro != 'm' && tamanho_carro != 'G' && tamanho_carro != 'g'){
        getchar();
        printf("Insira somente P (para pequeno), M (para medio) ou G (para grande): ");
        scanf("%c", &tamanho_carro);
    }

    //Requisitando regiao do veiculo
    getchar();
    printf("\nInserindo a letra equivalente de acordo com a lista abaixo, informe em que regiao o veiculo sera licenciado:");
    printf("\nNorte/Nordeste -> A\nSul/Centro-Oeste -> B\nSudeste (exceto Sao Paulo e Rio de Janeiro) -> C\nSao Paulo -> D\nRio de Janeiro -> E\nSua regiao de escolha -> ");
    scanf("%c", &regiao_carro);
    while(regiao_carro != 'A' && regiao_carro != 'a' && regiao_carro != 'B' && regiao_carro != 'b' && regiao_carro != 'C' && regiao_carro != 'c' && regiao_carro != 'D' && regiao_carro != 'd' && regiao_carro != 'E' && regiao_carro != 'e'){
        getchar();
        printf("Insira somente A (Norte/Nordeste), B (Sul/Centro-Oeste), C (Sudeste, exceto SP e RJ), D (Sao Paulo) ou E (Rio de Janeiro): ");
        scanf("%c", &regiao_carro);
    }

    //Taxa 1
    if((tamanho_carro == 'P') || (tamanho_carro == 'p')){
        taxa1 = preco_carro * 1.5/100;
    }
    if((tamanho_carro == 'M') || (tamanho_carro == 'm')){
        taxa1 = preco_carro * 2/100;
    }
    if((tamanho_carro == 'G') || (tamanho_carro == 'g')){
        taxa1 = preco_carro * 1.7/100;
    }

    //Taxa 2
    if((regiao_carro == 'A') || (regiao_carro == 'a')){
        taxa2 = preco_carro * 0.3/100;
    }
    if((regiao_carro == 'B') || (regiao_carro == 'b')){
        taxa2 = preco_carro * 0.5/100;
    }
    if((regiao_carro == 'C') || (regiao_carro == 'c')){
        taxa2 = preco_carro * 0.8/100;
    }
    if((regiao_carro == 'D') || (regiao_carro == 'd')){
        taxa2 = preco_carro * 1/100;
    }
    if((regiao_carro == 'E') || (regiao_carro == 'e')){
        taxa2 = preco_carro * 1.5/100;
    }

    //Valor seguro
    valor_seguro = taxa1 + taxa2;

    //Valor franquia
    if(valor_seguro < 1000){
        valor_franquia = 800;
    }
    if((valor_seguro >= 1000) && (valor_seguro <= 1500)){
        valor_franquia = 1200;
    }
    if(valor_seguro > 1500){
        valor_franquia = 1600;
    }

    //Conclusao
    printf("\n- Valor do seguro do carro selecionado: R$%.2f\n- Valor da franquia: R$%.2f\n\n", valor_seguro, valor_franquia);

    system("PAUSE");
    return 0;
}
