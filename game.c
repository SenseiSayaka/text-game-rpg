#include <stdio.h> // preprocessor
#include <string.h> 

int main(void) // main func
{
    int gb_gold = 15;
    int goblin_hp;
    int pl_gold = 0;
    char pressed;
    char nickname[80];

        
    printf("What's your name?\n");
            /*
                char c;                     
                scanf("%79s", nickname);

                while((c = getchar()) != '\n' && c != EOF)   <<----- CLEANING BUFFER (improved, use it if you use scanf() to type nickname)
                ;
            */
    fgets(nickname, sizeof(nickname), stdin);

    if(nickname[strlen(nickname) - 1] == '\n')
    {
        nickname[strlen(nickname) - 1] = '\0';
    }

    printf("Welcome, %s\n", nickname);


    printf("You have been attacked by Goblin! Press (A) for attack or (R) for run: ");
    
    pressed = getchar();
        
    while(pressed != 'r')
    {   
        
        if(pressed == 'a' || pressed == 'A')
        {
            for(goblin_hp = 3; goblin_hp >= 0; goblin_hp--)
            {
                
                if(goblin_hp == 0)
                {   
                    printf("You killed Goblin!\n");

                    printf("You got %d gold coins! "
                           "You have %d gold in total \n",
                            gb_gold,
                            pl_gold += gb_gold);
                    break;
                }

                if(goblin_hp != 3)
                   printf("You attacked Goblin! Goblin hp: %d\n", goblin_hp);

            }
            
        }
        
        printf("What next? Press (A) for attack or (R) for run: \n");
        getchar(); // CLEAN BUFFER (FOR SINGLE CHARACTER)
        pressed = getchar(); 
    }

    if(pressed == 'r' || pressed == 'R')
    {
        printf("You decided to run!");
    }
                 
    return 0;
}

    

    