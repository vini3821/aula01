#include <stdio.h>
char dia = ' ';

int main()
{
    printf("Digite uma letra: \r\n");
    scanf("%c", &dia);
    switch(dia){
        case '1':
        case 'A':
        case 'a':{
            printf("Segunda-feira");
        }
        break;
        case '2':
        case 'B':
        case 'b':{
            printf("Terça-feira");
        }
        break;
        case '3':
        case 'C':
        case 'c':{
            printf("Quarta-feira");
        }
        break;
        case '4':
        case 'D':
        case 'd':{
            printf("Quinta-feira");
        }
        break;
        case '5':
        case 'E':
        case 'e':{
            printf("Sexta-feira");
        }
        break;
        case '6':
        case 'F':
        case 'f':{
            printf("Sábado");
        }
        break;
        case '7':
        case 'G':
        case 'g':{
            printf("Domingo");
        }
        break;
        
        default:{
            printf("dígito inválido");
        }
    return 0;
    }
}
