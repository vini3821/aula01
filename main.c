#include <stdio.h>

int x = 0;
int y = 0;
char sinal = ' ';
float res = 0;
int main()
{
    
    printf("Digite a operação desejada em sinais matematicos: ");
    scanf("%c", &sinal );
    printf("Digite um número: ");
    scanf("%i", &x);
    printf("Digite outro número: ");
    scanf("%i", &y);
    switch(sinal){
        case '+':
            res = x + y;
            printf("A soma de %.2i e %.2i = %.2f \r\n", x, y, res);
        
        break;
        case '-':
            res = x - y;
            printf("A subtração de %.2i e %.2i = %.2f \r\n", x, y, res);
        
        break;
        case '*':
            res = x * y;
            printf("A multiplicação de %.2i e %.2i = %.2f \r\n", x, y, res);
             
        break;    
        case '/': 
        
        
        if (y == 0){
            printf("Não pode ser dividido");
        }
        else{
            res = x / y;
            printf("A Divisão de %.2i e %.2i = %.2f \r\n", x, y, res);
        }
        break;
    }
    return 0;
    
}
