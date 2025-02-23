#include <stdio.h> // preprocessor
 
int main(void) // main func
{
    int gb_gold = 15;
    int goblin_hp;
    int pl_gold = 0;

    char pressed;
    
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
        getchar(); // CLEAN BUFFER
        pressed = getchar(); 
    }

    if(pressed == 'r' || pressed = 'R')
    {
        printf("You decided to run!");
    }
                 
    return 0;
}