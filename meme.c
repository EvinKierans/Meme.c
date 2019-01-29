#include <stdio.h>
#include <string.h>

int main(void)
{
  char input[30];
  int inputLen = 0;
  char output[30];
  int outputLen = 0;

  printf("\nPlease enter the starting phrase: ");
  scanf(" %s", input);

  inputLen = strlen(input);
  
  printf("\nPlease enter the finishing phrase: ");
  scanf(" %s", output);

  outputLen = strlen(output);

  for(int i = inputLen-1; i > 0; i--)
  {
    printf("\n");
    for(int j = 0; j<i+1; j++)
      printf("%c", input[j]);
  }

  for(int i = 0; i < outputLen; i++)
  {
    printf("\n");
    for(int j = 0; j<i+1; j++)
      printf("%c", output[j]);
  }
  printf("\n\n");
}
