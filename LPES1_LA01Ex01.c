#include <stdio.h>
#include <stdlib.h>

int main(){
    //Declaracao variaveis
    int volume_vendas, gratificacao;
    float salario, imposto, salario_final;

    //Requisitando salario e volume de vendas
    printf("Informe seu salario: R$");
    scanf("%f", &salario);
    printf("\nMETAS DO MES\nInforme seu volume de vendas, em servicos: ");
    scanf("%d", &volume_vendas);

    //Gratificacao
    if((volume_vendas > 21) && (volume_vendas <= 32)){
        gratificacao = 310;
        salario = salario + gratificacao;
    }
    if((volume_vendas > 32) && (volume_vendas <= 54)){
        gratificacao = 400;
        salario = salario + gratificacao;
    }
    if(volume_vendas > 54){
        gratificacao = 700;
        salario = salario + gratificacao;
    }

    //Imposto
    if(salario <= 2042){
        imposto = salario * 8/100;
    }
    if((salario <= 4004) && (salario > 2042)){
        imposto = salario * 15/100;
    }
    if(salario > 4004){
        imposto = salario * 27.5/100;
    }

    //Conclusao
    if(volume_vendas > 21){
        printf("\nVoce alcancou o equivalente a %d reais em gratificacoes, totalizando R$%.2f.", gratificacao, salario);
    }
    salario_final = salario - imposto;
    printf("\nDescontando a taxa de imposto sobre seu total salarial, o salario liquido a ser recebido corresponde a R$%.2f\n\n", salario_final);

    system("PAUSE");
    return 0;
}
