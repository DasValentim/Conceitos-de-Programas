#include <stdio.h>

int main()
{
    int calculadora, sair;
    float num1, num2, resultado;

    do
    {
        do
        {
            printf("CALCULADORA: \n");
            printf("Digite: \n 1 - Soma \n 2 - Subtração \n 3 - Multiplicação \n 4 - Divisão \n");
            scanf("%d", &calculadora);
            if (calculadora < 1 || calculadora > 4)
            {
                printf("Escolha inválida!\n");
            }
        } while (calculadora < 1 || calculadora > 4);

        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        if (calculadora == 1)
        {
            resultado = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, resultado);
        }
        else if (calculadora == 2)
        {
            resultado = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, resultado);
        }
        else if (calculadora == 3)
        {
            resultado = num1 * num2;
            printf("%.2f x %.2f = %.2f\n", num1, num2, resultado);
        }
        else
        {
            if (num2 != 0)
            {
                resultado = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, resultado);
            }
            else
            {
                printf("O divisor não pode ser zero. \n");
            }
        }

        printf("deseja sair? \n Escolha '1' para sair ou qualquer tecla para continuar. \n");
        scanf("%d", &sair);

    } while (sair < 1 || sair > 1);

    printf("saindo...");

    return 0;
}