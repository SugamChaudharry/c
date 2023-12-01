#include <stdio.h>
#include <string.h>

// Function to check if a given string is a palindrome
int isPalindrome(char str[])
{
    int left = 0;
    int right = strlen(str) - 1;

    // Check characters from both ends towards the center
    while (left < right)
    {
        if (str[left] != str[right])
        {
            // Characters don't match, not a palindrome
            return 0; // Return false
        }
        left++;
        right--;
    }

    // All characters matched, it's a palindrome
    return 1; // Return true
}

int main()
{
    char input[100];

    // Input the string
    printf("Enter a string: ");
    scanf("%s", input);

    // Check if the input string is a palindrome
    if (isPalindrome(input))
    {
        printf("%s is a palindrome.\n", input);
    }
    else
    {
        printf("%s is not a palindrome.\n", input);
    }

    return 0;
}
