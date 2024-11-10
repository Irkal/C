#include <stdio.h>

int main(void){

    int num;
    printf("Enter the number of names: ");
    scanf("%d", &num);

    int a[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter name(%d): ", i + 1);
        scanf("%d", &a[i]);
    }
    
    for(int i = 1; i <= num; i++){
        printf("%d\n", a[num - i]);
    }
   
    printf("Thanks");
    
    return 0;
}