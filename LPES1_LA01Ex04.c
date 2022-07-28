#include <stdio.h>
#include <stdlib.h>

int main(){
    int end;
    float qtd, total, debito, credito, credito2x, pagamento, troco;
    char letter, letter2;

    end = 1;
    qtd = 0;
    total = 0;

    while(end){
        printf("CARDAPIO\n\nSalgados:\n- Coxinha (frango) -> A\n- Enrolado (presunto e queijo) -> B\n- Bola1 (frango e catupiry) -> C\n- Bola2 (brocolis e catupiry) -> D\n- Bola3 (camarao) -> E\n- Bola4 (queijo e catupiry) -> F\n\nBebidas:\n- agua -> G\n- agua com gas -> H\n- Refrigerante -> I\n- Suco (lata) -> J\n- Cerveja -> K\n\nDigite a letra equivalente ao produto consumido, ou prossiga para o pagamento, inserindo Z: ");
        scanf("%c", &letter);

        if((letter == 'A') || (letter == 'a')){
            printf("\n-> Coxinha (frango) - R$6,50 por unidade\nUnidades consumidas: ");
            scanf("%f", &qtd);
            total += qtd*6.5;
            printf("\n");
            getchar();
        }
        if((letter == 'B') || (letter == 'b')){
            printf("\n-> Enrolado (presunto e queijo) - R$6,50 por unidade\nUnidades consumidas: ");
            scanf("%f", &qtd);
            total += qtd*6.5;
            printf("\n");
            getchar();
        }
        if((letter == 'C') || (letter == 'c')){
            printf("\n-> Bola1 (frango e catupiry) - R$8,80 por unidade\nUnidades consumidas: ");
            scanf("%f", &qtd);
            total += qtd*8.8;
            printf("\n");
            getchar();
        }
        if((letter == 'D') || (letter == 'd')){
            printf("\n-> Bola2 (brocolis e catupiry) - R$8,80 por unidade\nUnidades consumidas: ");
            scanf("%f", &qtd);
            total += qtd*8.8;
            printf("\n");
            getchar();
        }
        if((letter == 'E') || (letter == 'e')){
            printf("\n-> Bola3 (camarao) - R$9,60 por unidade\nUnidades consumidas: ");
            scanf("%f", &qtd);
            total += qtd*9.6;
            printf("\n");
            getchar();
        }
        if((letter == 'F') || (letter == 'f')){
            printf("\n-> Bola4 (queijo e catupiry) - R$6,50 por unidade\nUnidades consumidas: ");
            scanf("%f", &qtd);
            total += qtd*6.5;
            printf("\n");
            getchar();
        }
        if((letter == 'G') || (letter == 'g')){
            printf("\n-> agua - R$3,00 por unidade\nUnidades consumidas: ");
            scanf("%f", &qtd);
            total += qtd*3;
            printf("\n");
            getchar();
        }
        if((letter == 'H') || (letter == 'h')){
            printf("\n-> agua com gas - R$3,50 por unidade\nUnidades consumidas: ");
            scanf("%f", &qtd);
            total += qtd*3.5;
            printf("\n");
            getchar();
        }
        if((letter == 'I') || (letter == 'i')){
            printf("\n-> Refrigerante - R$5,00 por unidade\nUnidades consumidas: ");
            scanf("%f", &qtd);
            total += qtd*5;
            printf("\n");
            getchar();
        }
        if((letter == 'J') || (letter == 'j')){
            printf("\n-> Suco (lata) - R$7,50 por unidade\nUnidades consumidas: ");
            scanf("%f", &qtd);
            total += qtd*7.5;
            printf("\n");
            getchar();
        }
        if((letter == 'K') || (letter == 'k')){
            printf("\n-> Cerveja - R$5,00 por unidade\nUnidades consumidas: ");
            scanf("%f", &qtd);
            total += qtd*5;
            printf("\n");
            getchar();
        }
        if((letter == 'Z') || (letter == 'z')){
            debito = total + total*0.03;
            credito = total + total*0.05;
            credito2x = total + total*0.1;

            getchar();
            printf("\nFormas de pagamento disponiveis:\nA -> Em dinheiro - sem acrescimos; seu total: R$%.2f\nB -> Debito - 3 porcento de acrescimo; seu total: R$%.2f\nC -> Credito - 5 porcento de acrescimo; seu total: R$%.2f\nD -> Credito em 2X - 10 porcento de acrescimo; seu total: R$%.2f", total, debito, credito, credito2x);
            printf("\n\nDigite a letra equivalente ao metodo qual deseja utilizar: ");
            scanf("%c", &letter2);

            if((letter2 == 'A') || (letter2 == 'a')){
                printf("Informe a quantia que ira entregar: R$ ");
                scanf("%f", &pagamento);
                troco = pagamento - total;
                if(troco > 0){
                    printf("\n\nSeu pagamento foi concluido, o troco deve ser de R$%.2f.\n\n", troco);
                    return 0;
                }
                if(troco == 0){
                    printf("\n\nSeu pagamento foi concluido.\n\n");
                    return 0;
                }
                if(troco < 0){
                    printf("\n\nA quantia entregue nao eh suficiente para pagar por seu consumo\n\n");
                    return 0;
                }
            }
            if((letter2 == 'B') || (letter2 == 'b')){
                printf("Informe a quantia que ira entregar: R$ ");
                scanf("%f", &pagamento);
                troco = pagamento - debito;
                if(troco > 0){
                    printf("\n\nSeu pagamento foi concluido, o troco deve ser de R$%.2f.\n\n", troco);
                    return 0;
                }
                if(troco == 0){
                    printf("\n\nSeu pagamento foi concluido.\n\n");
                    return 0;
                }
                if(troco < 0){
                    printf("\n\nA quantia entregue nao eh suficiente para pagar por seu consumo\n\n");
                    return 0;
                }
            }
            if((letter2 == 'C') || (letter2 == 'c')){
                printf("Informe a quantia que ira entregar: R$ ");
                scanf("%f", &pagamento);
                troco = pagamento - credito;
                if(troco > 0){
                    printf("\n\nSeu pagamento foi concluido, o troco deve ser de R$%.2f.\n\n", troco);
                    return 0;
                }
                if(troco == 0){
                    printf("\n\nSeu pagamento foi concluido.\n\n");
                    return 0;
                }
                if(troco < 0){
                    printf("\n\nA quantia entregue nao eh suficiente para pagar por seu consumo\n\n");
                    return 0;
                }
            }
            if((letter2 == 'D') || (letter2 == 'd')){
                printf("Informe a quantia que ira entregar: R$ ");
                scanf("%f", &pagamento);
                troco = pagamento - credito2x;
                if(troco > 0){
                    printf("\n\nSeu pagamento foi concluido, o troco deve ser de R$%.2f.\n\n", troco);
                    return 0;
                }
                if(troco == 0){
                    printf("\n\nSeu pagamento foi concluido.\n\n");
                    return 0;
                }
                if(troco < 0){
                    printf("\n\nA quantia entregue nao eh suficiente para pagar por seu consumo\n\n");
                    return 0;
                }
            }
        }
    }

    system("PAUSE");
}
