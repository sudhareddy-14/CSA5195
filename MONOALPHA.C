#include<stdio.h>
#include<ctype.h>
char monoalpha(char ch) {
    char key[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
    ch = toupper(ch);
    if (ch>='A' && ch <= 'Z') {
        int index = ch - 'A';
        return key[index];
    }
    return ch;
}
int main() {
    char plaintext[100]; 
    char ciphertext[100];
    int i = 0;
    printf("Enter the plaintext: ");
    fgets(plaintext, sizeof(plaintext), stdin);
    while (plaintext[i] != '\0') 
	{
    ciphertext[i] = monoalpha(plaintext[i]);
    i++;
    }
    ciphertext[i] = '\0';
    printf("ENCRYPTION: %s", ciphertext);
    printf("\n DECRYPTION: %s",plaintext);
}
