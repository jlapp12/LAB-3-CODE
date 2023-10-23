
/* Lab 5 P3: starter code to complete*/
#include <stdio.h>
#include <string.h>

int main()
{

    char input[256];
    int letterCount[26] = {0}; // Array to store the count of each letter      initialized to zeros

    printf("Enter text strings (press Enter on an empty line to exit):\n");

    while (1)
    {
        fgets(input, sizeof(input), stdin); // get the input from the user via keyboard

        // Check for an empty line to exit the loop
        if (strlen(input) == 1 && input[0] == '\n')
        {
            break;
        }
        // Your Code should be implemented here
        // Iterate through the characters in the input
        // Check if the character is a letter (A-Z or a-z)
        // Increment the corresponding count in the array
      int letterIndex =0;
      for (int i = 0; i < strlen(input); i++)
      {
        if (input[i] >= 'A' && input[i] > 'Z') {
          letterIndex = input[i]-32-65;
          letterCount[letterIndex]++;
        }
        else{
          letterIndex = input[i]-65;
          letterCount[letterIndex]++;
        }
    }
      char arr[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
      for (int i = 0; i < 26; i++)
        {
          printf("The frequency of %c is %d\n",arr[i], letterCount[i]);
        }
      }
    // More of your code here to
    // Display the letter counts

    return 0;
}