#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>


int main(void){

    char tkm[] = {'r', 'p', 's'};
    int mypoints = 0;
    int compoints = 0;
    char myresponce;

    printf("\nLets play rock paper scissors! (r, p or s)");

    int i;

    srand(time(NULL));

    for(i = 0; i < 3; i++){
        printf("\nrock, paper, scissors! :");
        scanf(" %c", &myresponce);
        myresponce = tolower(myresponce);
    
        
        int randomone = rand() % 3;

        char comresponce = tkm[randomone];
     
        if(myresponce == 'r' && comresponce == 'r'){
            printf("\nyou chosed rock and i chosed rock too, thats a draw! ", myresponce, comresponce);
        }   
        else if(myresponce == 'r' && comresponce == 's'){
            printf("\nyou chosed rock and i chosed scissors, you won! ");
            mypoints++;
        }
        else if(myresponce == 'r' && comresponce == 'p'){
            printf("\nyou chosed rock vs i chosed paper, haha i won! ");
            compoints++;
        }   
        else if(myresponce == 's' && comresponce == 's'){
            printf("\nyou chosed scissors and i chosed scissors too, thats a draw! ");
        }
        else if(myresponce == 's' && comresponce == 'p'){
            printf("\nyou chosed scissors and i chosed paper, you won! ");
            mypoints++;
        }
        else if(myresponce == 'p' && comresponce == 'p'){
            printf("\nyou chosed paper and i chosed paper too! thats a draw! ");
        }
        else if(myresponce == 's' && comresponce == 'r'){
            printf("\nyou chosed scissors and i chosed rock, haha i won! ");
            compoints++;
        }
        else if(myresponce == 'p' && comresponce == 's'){
            printf("\nyou chosed paper vs i chosed scissors, haha i won! ");
            compoints++;
        }
        else if(myresponce == 'p' && comresponce == 'r'){
            printf("\nyou chosed paper vs i chosed rock, you won! ");
            mypoints++;
        }
        else {
            printf("\nInvalid input! Please choose only r, p or s.");
            i--; // aynı turu tekrar et
            continue;
        }

    } 
    if(mypoints < compoints){
        printf("\n you: %d and me: %d", mypoints, compoints);
        printf("\nHAHA i won!...ehem, good game!");
    }
    else if(mypoints > compoints){
        printf("\n you: %d and me: %d", mypoints, compoints);
        printf("\nCongragulations, you won!");
    }
    else{
        printf("\n you: %d and me: %d", mypoints, compoints);
        printf("\nwow thats a draw!");
    }
    return 0;
}

