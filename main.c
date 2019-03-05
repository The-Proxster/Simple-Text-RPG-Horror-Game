#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char name[100];
    printf("What is the name of the MC? ");
    str inven[25]; //The inventory can hold 25 things. Placeholder.
    scanf("%s", str);
    printf("A man wakes up, in a place he does not recognize. His name? %s\n", name);
    printf("there is a wrench next to you, do you pick it up? Y/n\n");
    char cho[100];
    scanf("%s", cho);
    if (strcmp(cho,"Y" == 0 || cho,"y" == 0)) { //Seeing if the player pockets.
        inven[i] = "wrench"
        printf("%s picks up the wrench, pocketing it and standing up.\n", name);
    }
    else if (strcmp(cho,"n") ==0 || cho,"N") == 0) {
        printf("%s scoffs at the wrench, pushing it aside and standing up.\n");
    }
    printf("You can check your inventory at any time by typing \"inventory\"!\n");
    while (true) {
        char choi[100];
        scanf("%s", choi)
        if (strcmp(choi, "inventory")==0) {
            for(int i = 0; i < 25; i++) {
                for(int j = 0l j < 25; j++) {
                    printf("%s", array[i][j]);
                }
                printf("\n");
            }
        }
    }
    printf("%s hears a strange voice.\n", name);
    printf("???: Hello? Is anyone alive around here?\n"); //Introducing the first character.
    printf("What do you do? hide/speak/silence\n");
    char cho[100];
    scanf("%s", cho);
    if (strcmp(cho,"hide")==0) {
        printf("%s rolls underneath a nearby table, hiding from the person.\n", name);
        printf("A door opens, and a man walks in. He seemed to be looking for people.\n");
        printf("He was checking under counters, in desks, and under tables. He looked under %s's, seeing them.");
    }
    else if (strcmp(cho,"speak")==0) {
        printf("%s speaks up, letting the person know where they are.\n", name);
        printf("???: Where are you?\n");
        printf("%s: In here!\n", name);
        printf("A door opens, and a strangely normal looking man walks in.\n");
    }
    else if (strcmp(cho, "silence")==0) {
        printf("%s doesn't move, but also doesn't speak. Waiting to see what happens.\n", name);
        printf("A man opened a door, looking into the room. He sees you!\n");
    }
    printf("???: Oh thank god! Someone else!\n");
    printf("%s: Who, are you?\n");
    printf("???: Oh yes, introductions. My name is Jeff. Your name is?\n");
    printf("%s: my name is %s\n", name, name);
    printf("Jeff: We need to get out of here, %s. Now.\n", name);
}
