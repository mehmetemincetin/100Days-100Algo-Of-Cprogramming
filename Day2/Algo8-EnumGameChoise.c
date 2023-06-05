#include <stdio.h>

enum MenuOptions {NewGame = 1, LoadGame = 2, SaveGame = 3, Exit = 4};

int main() {
    enum MenuOptions choice;
    
    printf("Menu:\n");
    printf("1. New Game\n");
    printf("2. Load Game\n");
    printf("3. Save Game\n");
    printf("4. Exit\n");
    
    printf("Enter your choice: ");
    scanf("%u",&choice);
    getchar();
    
    switch(choice) {
        case LoadGame: printf("Loading a saved game...\n"); break;
        case NewGame: printf("Starting a new game...\n"); break;
        case SaveGame: printf("Saving the current game...\n"); break;
        case Exit: printf("Exit the game...\n"); break;
        default: printf("Invalid choice!\n"); break;

    }
    
    return 0;
}
/*
In this algortihm, I used enum data type and created a dataset 
related to each other,and then I got the number
from the user and showed the definiton corresponding to the number on the screen.
And when I learning enum get the scanf using %d and using %u 
*/
