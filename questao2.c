#include <stdio.h>

// Função que verifica se um número está na sequência de Fibonacci
int isInFibonacci(int num) {
    if (num == 0 || num == 1) {
        return 1; // 0 e 1 fazem parte da sequência
    }
    int a = 0, b = 1, c = a + b;
    // Calcula valores da sequência até encontrar o número ou ultrapassá-lo
    while (c < num) {
        a = b;
        b = c;
        c = a + b;
    }
    return num == c; // Retorna verdadeiro se o número é igual ao valor atual na sequência
}

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num); // Lê o número do usuário

    // Verifica se o número está na sequência de Fibonacci
    if (isInFibonacci(num)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", num);
    }

    return 0;
}
