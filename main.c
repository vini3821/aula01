#include <stdio.h>

float x = 0; 
float y = 0;
float res= 0; 

int main()
{
    printf("Digite um número: ");
    scanf("%f", &x);
    
    printf("Digite outro número: ");
    scanf("%f", &y);
    
    //soma
    
    res = x + y;
    printf("A soma de %.2f e %.2f = %.2f \r\n", x, y, res);
    
    //subtração
    res = x - y;
    printf("A subtração de %.2f e %.2f = %.2f \r\n", x, y, res);
    
    //multiplicação
    
    res = x * y;
    printf("A multiplicação de %.2f e %.2f = %.2f \r\n", x, y, res);
    
    //Divisão
    
    res = x / y;
    if(y == 0){
        printf("O número divisor é 0, logo o resultado será 0");
    }else{
        printf("A Divisão de %.2f e %.2f = %.2f \r\n", x, y, res);
    }

    return 0;
}
