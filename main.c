#include <stdio.h>

int main(){
    int year;
    printf("Enter year: ");
    scanf("%d" , &year);

    if(year % 4 == 0){
        printf("%d is a leap year\n", year);
    }
    
    else{
        printf("%d is not a leap year\n", year);
    }
    printf("Press any key to exit...");
    system("pause > nul");
    return 0;
}