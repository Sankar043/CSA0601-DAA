#include <stdio.h>
#include <string.h>
int isPalindrome(char *str) 
{
    int left = 0;
    int right = strlen(str) - 1;
    while (left < right) 
	{
        if (str[left] != str[right]) 
		{
            return 0; 
        }
        left++;
        right--;
    }
    return 1; 
}
int main() 
{
    int choice,num;
    char input[100];
    printf("Choose an option:\n");
    printf("1. Check string palindrome\n");
    printf("2. Check number palindrome\n");
    scanf("%d", &choice);
    switch (choice)
	 {
        case 1:
            printf("Enter a string: ");
            scanf("%s", input);
            if (isPalindrome(input)) 
			{
                printf("%s is a palindrome.\n", input);
            }
			 else 
			{
                printf("%s is not a palindrome.\n", input);
            }
            break;
        case 2:
            
            printf("Enter a number: ");
            scanf("%d", &num);
            sprintf(input, "%d", num); 
            if (isPalindrome(input)) 
			{
                printf("%d is a palindrome.\n", num);
            }
			 else 
			{
                printf("%d is not a palindrome.\n", num);
            }
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}
