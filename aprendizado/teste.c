#include <stdio.h>
int main(){
    int idade, dependente;
    float renda;

    printf("Informe a sua idade!\n");
    scanf("%d", &idade);
    printf("Informe a sua renda!\n");
    scanf("%f", &renda);
    printf("Informe o número de dependentes!\n");
    scanf("%d", &dependente);
    
    if(idade >= 18 && idade < 65){
        if(renda < 2000){
            if(dependente > 2){
                printf("Você atende todos os critérios, aguarde a análise competente!");
            } else {
                printf("Número de dependentes inadequados!");
            }

        } else {
            printf("Sua renda é acima do permitido!");
        }
    } else {
        printf("Você não se encaixa no critério de idade!");
    }
    



}