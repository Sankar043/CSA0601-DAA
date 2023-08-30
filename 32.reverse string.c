#include <stdio.h>
#include <string.h>
void reverseString(char str[], int length) 
{
    int start = 0;
    int end = length - 1;
    while (start < end) 
	{
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main() {
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; 
    int length = strlen(input);
    reverseString(input, length);
    printf("Reversed string: %s\n", input);
    return 0;
}
