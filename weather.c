#include <stdio.h>

int main(){
    
    //declaring all variables
    
    #define MONTHS 12
    int YEARS;
    int months;
    int no_of_years;
    int year;
    float sum;
    float avg;
    float total;
    int year1,year2;

    //To input for how many number of years data user wants to store

    printf("How many years of data you want to enter: ");
    scanf("%d",&no_of_years);

    //Declaring an two diamensional array to store data

    float yearrain[no_of_years][MONTHS];

    //This is to specify during which period user wants to calculate the data
    //For example, 2010-2015

    printf("Data from which year to which year: ");
    scanf("%d - %d",&year1,&year2);

    //using for loop to store all the data into the array which user will input
    
    for(YEARS=0;YEARS<no_of_years;YEARS++)
    {
        printf("Enter data of every month: \n");
        for(months=0;months<12;months++)
        {
            printf("%d. ",months+1);
            scanf("%f",&yearrain[YEARS][months]);
        }
            
    }
         
    
    

    printf("YEAR\t\tRAINFALL (INCHES)\n");


    /*to calculate yearly average rainfall, first we need to calculate total rainfall each year 
    and the divide it by total number of years*/


    //for loop for calculating rainfall each year i.e, sum of rainfall each month in a year
   
    for(YEARS=0,total=0;YEARS<no_of_years;YEARS++)
    {
        for(months=0,sum=0;months<12;months++)
        {
            sum = sum + yearrain[YEARS][months];
        }
        printf("%5d   %15.1f\n",year1 + YEARS,sum);
        total += sum;
    }
         
    
    
    printf("\nThe yearly average is : %.2f inches.\n\n",total/no_of_years);



    //monthly is calculated by taking average of every month for all years
    //for example, average of january from year 2010-2015 


    printf("MONTHLY AVERAGES\n");
    printf("\n");
    printf("\n");

    printf(" JAN  FEB  MAR  APR  MAY  JUN  JUL  AUG  SEP  OCT  NOV  DEC\n");



    //using for loop for claculating monthly average

    for(months=0;months<12;months++)
    {
        for(YEARS=0,sum=0;YEARS<no_of_years;YEARS++)
        {

            sum = sum + yearrain[YEARS][months];
            
        }
        printf("%4.1f ",sum/no_of_years);   
       
    }

    printf("\n");

    return 0;
}