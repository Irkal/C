#include <stdio.h>

int main(void)
{

    int k = 12345;
    do{
        if (k != 12345)
        {
            printf("err\n");
        }
        printf("enter your pss: ");
        scanf("%d", &k);
    } while (k != 12345);

    int k;
    printf("enter your pss: ");
    scanf("%d", &k);
    while (k != 12345)
    {
        printf("err\n");

        printf("enter your pss: ");
        scanf("%d", &k);
    }

   int k;
   for (int i = 0; i != -1; i++){
        printf("enter your pss: ");
        scanf("%d", &k);

        if (k == 12345){
            i = -2;
        }else{
            printf("err\n");
        }
   }
   
    printf("Thanks");
    
    return 0;
}