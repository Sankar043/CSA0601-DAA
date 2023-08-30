#include <stdio.h>
void insertAtPosition(int list[], int *size, int position, int number)
 {
    if (position < 0 || position > *size) 
	{
        printf("Invalid position.\n");
        return;
    }
    int i;
    for (i = *size; i > position; i--) 
	{
        list[i] = list[i - 1];
    }
    list[position] = number;
    (*size)++;
}
int main() 
{
    int list[100];
    int size = 0;
    printf("Enter the number of elements in the list: ");
    scanf("%d", &size);
    printf("Enter the elements of the list:\n");
    int i;
    for (i = 0; i < size; i++) 
	{
        scanf("%d", &list[i]);
    }
    int position, number, choice;
    printf("Testing Conditions:\n");
    printf("1. Insert at the beginning\n");
    printf("2. Insert in the middle\n");
    printf("3. Insert at the end\n");
    printf("4. Insert at not available position\n");
    printf("Choose a test case (1-4): ");
    scanf("%d", &choice);
    switch (choice)
	 {
        case 1:
            printf("Enter the number to insert: ");
            scanf("%d", &number);
            insertAtPosition(list, &size, 0, number);
            break;
        case 2:
            printf("Enter the position to insert: ");
            scanf("%d", &position);
            printf("Enter the number to insert: ");
            scanf("%d", &number);
            insertAtPosition(list, &size, position, number);
            break;
        case 3:
            printf("Enter the number to insert: ");
            scanf("%d", &number);
            insertAtPosition(list, &size, size, number);
            break;
        case 4:
            printf("Enter the position to insert: ");
            scanf("%d", &position);
            printf("Enter the number to insert: ");
            scanf("%d", &number);
            insertAtPosition(list, &size, position, number);
            break;
        default:
            printf("Invalid choice.\n");
    }
    printf("Updated list:\n");
    
    for (i = 0; i < size; i++) 
	{
        printf("%d ", list[i]);
    }
    printf("\n");
    return 0;
}
