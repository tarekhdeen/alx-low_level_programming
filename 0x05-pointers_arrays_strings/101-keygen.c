#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generate_password - Generates a random 5-character password.
 */
void generate_password() {
	    char password[6];
	        const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
		    const int charset_length = sizeof(charset) - 1;

		        srand(time(NULL));

			    for (int i = 0; i < 5; i++) {
				            password[i] = charset[rand() % charset_length];
					        }

			        password[5] = '\0';

				    printf("Generated password: %s\n", password);
}

/**
 * main - Entry point of the program.
 * 
 * Return: Always 0.
 */
int main() {
	    generate_password();
	        return 0;
}
