#include <stdio.h>
#include <string.h>  //strrev()

// Reverse Function
char reverse_fun (char text[30]) {
	strrev(text);
	return text[30];
}

// Start Prog
int main () {
	char text_input[30];
	printf("Enter a String: ");
	scanf("%[^\n]%*c", text_input);
	reverse_fun(text_input);
	printf("Reverse of entered string is: %s.", text_input);
	return 0;
}

