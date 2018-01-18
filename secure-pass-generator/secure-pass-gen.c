#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	srand(time(NULL)); // Allows use to generate "pseudo-random" numbers
	int number, i, lock = 1;
	char *password;
	
	while (lock == 1) {
		printf("How long would you like your password to be? (12 - 32)\n");
		scanf("%d", &number);
		lock = (number >= 12 && number <= 32) ? 0 : 1; // Prevents input outside of advised range
	}
	password = malloc(number); // Allocates memory for password
	
	for (i = 0; i < number; password[i++] = rand() % 93 + 33); // Generates password with requested length using ASCII symbols between 33 and 126 (inclusive)		
	printf("Your password: \"%s\"\n", password);
	printf("Visit www.passwordmeter.com to test your new password!\n");
	return (0);
}
