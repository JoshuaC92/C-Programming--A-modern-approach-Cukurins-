// Write a function "day_of_year(month, day, year)" that returns the day of the
// year (an integer between 1 and 366) specified by the three arguments.

#include <stdio.h>

int day_of_year(int day, int month, int year);

int main(void){
    int day, month, year;

    printf("Enter a date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("Julian date: %d\n", day_of_year(day, month, year));

    return 0;
}

int day_of_year(int day, int month, int year){
    int daysInMonth[13] = {0, 31, 28 , 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int julianDate = day;
    
    // Test if the year is a leap year:
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        daysInMonth[2] = 29; //change feb days to 29
        };

    for(int i = 1; i < month; i++){
        julianDate += daysInMonth[i];
        };
    
    return julianDate;
}
