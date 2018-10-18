/*
 * This program will allow the user to enter a string.
 * Then it will check which is the most repeated character in the string.
 *
 * Author: Cesar Alejandro Arias Perales
 * Date: October 18th, 2018
 * Mail: A01411995@itesm.mx
 *
 */
#include <stdio.h>
#include <string.h>

int main() {
    // Here I declare my variables.
    char string[250];
    int counter = 0;
    char mode = string[0];
    int count = 0;
    // Here I ask the user for the string.
    printf("Give me your string:\n");
    fgets(string, sizeof(string), stdin);

    // This compares a character with the others.
    for (int i = 0; i < strlen(string); i++) {
        counter = 0;
        for (int x = i + 1; x < strlen(string); x++) {
            // This is for preventing the program from counting spaces.
            if (string[i] == string[x] && string[x] != ' ') {
                counter++;
            }
        }
        // When a new character is repeated more than a previous, it'll have a new value.
        if (counter > count) {
            count = counter;
            mode = string[i];
        }
    }

    printf("The most repeated character is %c", mode);

    return 0;
}

