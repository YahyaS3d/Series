#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
  printf("how many numbers wanna enter? ");
scanf("%d",&x);
  // taking input and storing it in an array
  int values[x];
  printf("Please enter a series of positive numbers (ending with a negative number):\n");
  for(int i = 0; i <x; ++i) {
     scanf("%d", &values[i]);
  }

  // printing the result
  printf("the result is:\n");
  for(int i = 0; i < x-2; ++i) {
        int h=values[i+2]-values[i+1];
        values[i+1]=h;
     printf("%d\n", values[i]);
  }

}
