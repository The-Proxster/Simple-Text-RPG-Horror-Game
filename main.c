#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char str[100];
  printf("What is the name of the MC?");
  str inven[]; //Getting errors.
  scanf("%s", str);
  printf("A man wakes up, in a place he does not recognize. His name? %s", str);
  printf("there is a wrench next to you, do you pick it up? Y/n");
  char cho[100];
  scanf("%s", cho);
  if (strcmp(str,"Y" == 0 || str,"y" == 0) { //Seeing if the player pockets.
    inven[i] = "wrench"
    printf("%s picks up the wrench, pocketing it.", str);
  }
}
