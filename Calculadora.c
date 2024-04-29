#include <stdio.h>

void printBinary(int num) {
    if (num == 0) {
        return;
    }
    printBinary(num / 2);
    printf("%d", num % 2);
}

int main() {
    int num1, num2;
    char operacao;
    char formato;

    printf("Digite o formato (b para binário, d para decimal, h para hexadecimal): ");
    scanf(" %c", &formato);

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite a operação (+, -, *, /, &, |, ^): ");
    scanf(" %c", &operacao);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    switch(operacao) {
        case '+':
            printf("Resultado: %d\n", num1 + num2);
            break;
        case '-':
            printf("Resultado: %d\n", num1 - num2);
            break;
        case '*':
            printf("Resultado: %d\n", num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("Resultado: %.2f\n", (float)num1 / num2);
            else
                printf("Erro! Divisão por zero.\n");
            break;
        case '&':
            printf("Resultado: %d\n", num1 & num2);
            break;
        case '|':
            printf("Resultado: %d\n", num1 | num2);
            break;
        case '^':
            printf("Resultado: %d\n", num1 ^ num2);
            break;
        default:
            printf("Operação inválida!\n");
    }

    switch(formato) {
        case 'b':
            printf("Formato binário do primeiro número: ");
            printBinary(num1);
            printf("\n");
            printf("Formato binário do segundo número: ");
            printBinary(num2);
            printf("\n");
            break;
        case 'd':
            printf("Formato decimal: %d\n", num1);
            printf("Formato decimal: %d\n", num2);
            break;
        case 'h':
            printf("Formato hexadecimal: %x\n", num1);
            printf("Formato hexadecimal: %x\n", num2);
            break;
        default:
            printf("Formato inválido!\n");
    }

    return 0;
}
