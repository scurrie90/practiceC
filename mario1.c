#include <cs50.h>
#include <stdio.h>

int main(void)
{

    // Get height of pyramid s.t 0 < height <= 9

    int height;
    
    do
    { 
        height = get_int("Height? ");
    }
    while (height <=0 || height >= 9); 
    
    switch(height)
    {
        case 1:
        printf("#  #\n");
        break;
        
        case 2:
        printf(" #  #\n##  ##\n");
        break;
        
        case 3:
        printf("  #  #\n ##  ##\n###  ###\n");
        break;
            
        case 4:
        printf("   #  #\n  ##  ##\n ###  ###\n####  ####\n");
        break;
            
        case 5:
        printf("    #  #\n   ##  ##\n  ###  ###\n ####  ####\n#####  #####\n");
        break;
            
        case 6:
        printf("     #  #\n    ##  ##\n   ###  ###\n  ####  ####\n #####  #####\n######  ######\n");
        break;
            
        case 7:
        printf("      #  #\n     ##  ##\n    ###  ###\n   ####  ####\n  #####  #####\n ######  ######\n#######  #######\n");
        break;
            
        case 8:
        printf("       #  #\n      ##  ##\n     ###  ###\n    ####  ####\n   #####  #####\n  ######  ######\n #######  #######\n########  ########\n");
        break;
                     
        default: get_int("Height? ");
    }
}