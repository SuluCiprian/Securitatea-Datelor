#include<stdio.h>
#include<string.h>

int main(){
    char message[30] = "";
    char key[20] = "";

    printf("Introduceti text fara spatii: ");
    scanf("%s", message);

    printf("Introduceti cheie: ");
    scanf("%s", key);

    int messageLength = strlen(message), keyLen = strlen(key), i, j;
    char newKey[messageLength], encryptedMessage[messageLength], decryptedMessage[messageLength];

    //genereaza cheie noua
    for(i = 0, j = 0; i < messageLength; ++i, ++j){
        if(j == keyLen)
            j = 0;

        newKey[i] = key[j];
    }

    newKey[i] = '\0';

    //cripteaza
    for(i = 0; i < messageLength; ++i)
        encryptedMessage[i] = ((message[i] + newKey[i]) % 26) + 'A';

    encryptedMessage[i] = '\0';

    //decripteaza
    for(i = 0; i < messageLength; ++i)
        decryptedMessage[i] = (((encryptedMessage[i] - newKey[i]) + 26) % 26) + 'A';

    decryptedMessage[i] = '\0';

    printf("Text original: %s", message);
    printf("\nCheie: %s", key);
    printf("\nCheie generata: %s", newKey);
    printf("\nMesaj criptat: %s", encryptedMessage);
    printf("\nMesaj decriptat: %s", decryptedMessage);

    return 0;
}
