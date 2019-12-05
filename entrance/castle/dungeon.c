#include <stdio.h>
#include <unistd.h>

int main() {
    
    int a = 294; 
    int b = 999;
    int c = 698;

    int code_sum = a + b + c;

    while(code_sum != 1991) {
        printf("Wrong code!\n");
        sleep(2);

    }

    FILE *filepointer;
    filepointer = fopen("../notepad.txt", "a");
    fprintf(filepointer, "%d %c\n", 2, 82);
    fclose(filepointer);
    printf("You found another clue!\n");
    printf("Clue printed to notepad!");
	
	
	return 1;

}


/*
*Story: you enter into a castle but as you walk in the drawbridge you took enter the castle compund
*closes behind you. You make your way to the dungeon and find a prisoner note. The note contains the 
*code needed to lower the draw bridge but the note is very lengthy and makes no sense. You notice the prisoner 
*left the following hint for you to make it easier to find the code: "code for the drawbridge labeled 'BRIDGE_CODE'"
*Successful retrieval of the code will result in discovery of another clue. It is your job to initialize the variables a, b , and c
* 
*
*Have a sum and player has to find 3 double digit numbers in the note that gives them that sum
*
*TIP: grep is a command used to find literal strings in a file but be careful because grep is a case-sensative command
*
*Draw bridge and to get the code they must use the grep to search the file
*
*/