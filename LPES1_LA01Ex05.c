#include <stdio.h>
#include <stdlib.h>

int main(){
    int X, am, av, an, bm, bv, bn, cm, cv, cn, matutino, vespertino,  noturno, A, B, C;
    float percentual;
    char elevador, periodo;

    am = 0;
    av = 0;
    an = 0;
    bm = 0;
    bv = 0;
    bn = 0;
    cm = 0;
    cv = 0;
    cn = 0;
    matutino = 0;
    vespertino = 0;
    noturno = 0;
    A = 0;
    B = 0;
    C = 0;
    percentual = 0;

    //Questionario
    for(X = 1; X <= 50; X++){
        printf("Informe qual elevador utiliza com maior frequencia, A, B ou C: ");
        scanf("%c", &elevador);
        getchar();
        printf("Em qual periodo majoritariamente, matutino (digite M), vespertino (digite V) ou noturno (digite N)? ");
        scanf("%c", &periodo);

        if((elevador == 'A') || (elevador == 'a')){
            if((periodo == 'M') || (periodo == 'm')){
                am += 1;
                getchar();
            }
            if((periodo == 'V') || (periodo == 'v')){
                av += 1;
                getchar();
            }
            if((periodo == 'N') || (periodo == 'n')){
                an += 1;
                getchar();
            }
        }
        if((elevador == 'B') || (elevador == 'b')){
            if((periodo == 'M') || (periodo == 'm')){
                bm += 1;
                getchar();
            }
            if((periodo == 'V') || (periodo == 'v')){
                bv += 1;
                getchar();
            }
            if((periodo == 'N') || (periodo == 'n')){
                bn += 1;
                getchar();
            }
        }
        if((elevador == 'C') || (elevador == 'c')){
            if((periodo == 'M') || (periodo == 'm')){
                cm += 1;
                getchar();
            }
            if((periodo == 'V') || (periodo == 'v')){
                cv += 1;
                getchar();
            }
            if((periodo == 'N') || (periodo == 'n')){
                cn += 1;
                getchar();
            }
        }
    }

    matutino = am + bm + cm;
    vespertino = av + bv + cv;
    noturno = an + bn + cn;

    //Resultado 1: elevador mais frequentado e periodo de maior fluxo
    if((am+av+an > bm+bv+bn) && (am+av+an > cm+cv+cn)){
        A = 1;
        printf("\n\nO elevador A eh o mais frequentado, especialmente no periodo ");
        if((am > av) && (am > an)){
            printf("matutino.\n\n");
        }
        if((av > am) && (av > an)){
            printf("vespertino.\n\n");
        }
        if((an > am) && (an > av)){
            printf("noturno.\n\n");
        }
    }
    if((bm+bv+bn > am+av+an) && (bm+bv+bn > cm+cv+cn)){
        B = 1;
        printf("\n\nO elevador B eh o mais frequentado, especialmente no periodo ");
        if((bm > bv) && (bm > bn)){
            printf("matutino.\n\n");
        }
        if((bv > bm) && (bv > bn)){
            printf("vespertino.\n\n");
        }
        if((bn > bm) && (bn > bv)){
            printf("noturno.\n\n");
        }
    }
    if((cm+cv+cn > am+av+an) && (cm+cv+cn > bm+bv+bn)){
        C = 1;
        printf("\n\nO elevador C eh o mais frequentado, especialmente no periodo ");
        if((cm > cv) && (cm > cn)){
            printf("matutino.\n\n");
        }
        if((cv > cm) && (cv > cn)){
            printf("vespertino.\n\n");
        }
        if((cn > cm) && (cn > cv)){
            printf("noturno.\n\n");
        }
    }

    //Resultado 2: periodo de maior fluxo entre todos e a qual elevador pertence
    if((matutino > vespertino) && (matutino > noturno)){
        printf("O periodo onde mais se utiliza os elevadores eh o matutino, especialmente o elevador ");
        if((am > bm) && (am > cm)){
            printf("A.\n\n");
        }
        if((bm > am) && (bm > cm)){
            printf("B.\n\n");
        }
        if((cm > am) && (cm > bm)){
            printf("C.\n\n");
        }
    }
    if((vespertino > matutino) && (vespertino > noturno)){
        printf("O periodo onde mais se utiliza os elevadores eh o vespertino, especialmente o elevador ");
        if((av > bv) && (av > cv)){
            printf("A.\n\n");
        }
        if((bv > av) && (bv > cv)){
            printf("B.\n\n");
        }
        if((cv > av) && (cv > bv)){
            printf("C.\n\n");
        }
    }
    if((noturno > matutino) && (noturno > vespertino)){
        printf("O periodo onde mais se utiliza os elevadores eh o noturno, especialmente o elevador ");
        if((an > bn) && (an > cn)){
            printf("A.\n\n");
        }
        if((bn > an) && (bn > cn)){
            printf("B.\n\n");
        }
        if((cn > an) && (cn > bn)){
            printf("C.\n\n");
        }
    }

    //Resultado 3: diferenca percentual entre o mais e menos usado
    if(A == 1){
        if(bm+bv+bn < cm+cv+cn){
            percentual = ((bm+bv+bn)/(am+av+an)) * 100;
            printf("A diferenca percentual entre o elevador mais e menos usado, respectivamente A e B, eh de %.1f porcento.\n\n", percentual);
        }
        if(bm+bv+bn > cm+cv+cn){
            percentual = ((cm+cv+cn)/((double)am+av+an)) * 100;
            printf("A diferenca percentual entre o elevador mais e menos usado, respectivamente A e C, eh de %.1f porcento.\n\n", percentual);
        }
    }
    if(B == 1){
        if(am+av+an < cm+cv+cn){
            percentual = ((am+av+an)/(bm+bv+bn)) * 100;
            printf("A diferenca percentual entre o elevador mais e menos usado, respectivamente B e A, eh de %.1f porcento.\n\n", percentual);
        }
        if(am+av+an > cm+cv+cn){
            percentual = ((cm+cv+cn)/(bm+bv+bn)) * 100;
            printf("A diferenca percentual entre o elevador mais e menos usado, respectivamente B e C, eh de %.1f porcento.\n\n", percentual);
        }
    }
    if(C == 1){
        if(am+av+an < bm+bv+bn){
            percentual = ((am+av+an)/(cm+cv+cn)) * 100;
            printf("A diferenca percentual entre o elevador mais e menos usado, respectivamente C e A, eh de %.1f porcento.\n\n", percentual);
        }
        if(am+av+an > bm+bv+bn){
            percentual = ((bm+bv+bn)/(cm+cv+cn)) * 100;
            printf("A diferenca percentual entre o elevador mais e menos usado, respectivamente C e B, eh de %.1f porcento.\n\n", percentual);
        }
    }

    system("PAUSE");
}
