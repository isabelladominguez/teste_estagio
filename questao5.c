#include <stdio.h>
#include <string.h>

void inverterString(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        // Troca os caracteres das posições i e (n-i-1)
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main() {
    char str[100]; // Define um buffer para a string com tamanho 100

    printf("Digite uma string: ");
    fgets(str, 100, stdin); // Lê uma linha do input, incluindo espaços
    str[strcspn(str, "\n")] = 0; // Remove a nova linha (newline) no final, se houver

    inverterString(str); // Inverte a string

    printf("String invertida: %s\n", str);

    return 0;
}
