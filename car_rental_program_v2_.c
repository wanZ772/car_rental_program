

#include <stdio.h>
#include <string.h>
#include<stdbool.h>

int main()
{
    int room_price[3] = {
        120,100,60
    };
    
    
    
    char calc[1];
    char car_type[10];
    char room_type[10];
    int meal_type, days, rental_period, rental_price;
    float room_charge;
    printf("WELCOM TO CAR RENTAL PROGRAM\n");
    
    bool conti = true;
    
    while (conti){
        
    printf("Enter car type (C-compact car, S-Sedan car) : ");
    scanf("%s", car_type);
    
    while ((strcmp(car_type, "S") != 0) && (strcmp(car_type, "C") != 0))    {
       
        printf("Invalid\nEnter car type (C-compact car, S-Sedan car) : ");
    scanf("%s", car_type);
    }
    
    if (strcmp(car_type, "C") == 0)    {
        printf("Enter retal period: ");
        scanf("%d", &rental_period);
        
        if (rental_period > 1 && rental_period < 4)  {
            rental_price = 70 * rental_period;
        }   else if (rental_period > 3 && rental_period < 7)    {
            rental_price = 50 * rental_period;
        }   else    {
            rental_price = 50 * rental_period;
        }
        
        printf("You rented compact car with %d day(s). The total charge is RM%d.00\n", rental_period, rental_price);
        
    } else    {
        printf("Enter retal period: ");
        scanf("%d", &rental_period);
        
        if (rental_period > 1 && rental_period < 4)  {
            rental_price = 60 * rental_period;
        }     else    {
            rental_price = 40 * rental_period;
        }
        
        printf("You rented compact car with %d day(s). The total charge is RM%d.00\n", rental_period, rental_price);
    }
    
    printf("Do you want to continue? (Y): ");
    scanf("%s", calc);
    
    
    if (strcmp(calc, "N") == 0) {
        break;
    }
    
    }
        
    

    return 0;
}
