#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opt;
    printf("Abaixo estão os tipos sanguíneos:\n");
    printf("1- A+ \n");
    printf("2- A- \n");
    printf("3- B+ \n");
    printf("4- B- \n");
    printf("5- AB+ \n");
    printf("6- AB- \n");
    printf("7- O+ \n");
    printf("8- O- \n");
    printf("Selecione uma opção que correspode ao seu tipo sanguíneo:\n");
    scanf("%d", &opt);

    switch(opt)
    {
    case 1:
        printf("Você poderá doar para os tipos: A+ e AB+");
        break;
    case 2:
        printf("Você poderá doar para os tipos: A+, A-, AB+ e AB-");
        break;
    case 3:
            printf("Você poderá doar para os tipos: B+ e AB+");
        break;
    case 4:
        printf("Você poderá doar para os tipos: B+, B-, AB+ e AB-");
        break;
    case 5:
        printf("Você poderá doar para o tipo: AB+");
        break;
    case 6:
        printf("Você poderá doar para os tipos: AB+ e AB-");
        break;
    case 7:
        printf("Você poderá doar para os tipos: A+, B+, AB+ e O+");
        break;
    case 8:
        printf("Você poderá doar para os tipos: A+, A-, B+, B-, AB+, AB-, O+ e O-");
        break;
    default:
        printf("Tipo sanguíne não existente");
    }
    return 0;
}

