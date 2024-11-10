#include <stdio.h>
#include <math.h>

int main(void){
    char o;

    printf("Enter your type (s for strate, g for gay, f for fucked up): ");
    scanf(" %c", &o);
    
    switch (o){
    case 's':
        printf("nice you are strate!!\n");
        break;
    case 'g':
        printf("not nice you are gay!!\n");
        break;
    case 'f':
        printf("you are fucked up!!??\n");
        break;    
    default:
        break;
    }
    
    

}
