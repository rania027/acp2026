#include <stdio.h>
#include <string.h>

typedef struct{
    int flight_number;
    int available_seats;
    char destination[100];
}Flight_t;

void readFlights(int n, Flight_t f[]);
void searchByDestination(int n, Flight_t f[], char searchDest[]);

int main()
{
    int n = 4;
    Flight_t f[n];;
    char searchDest[100];

    readFlights(n, f);

    printf("Enter the destination to search:");
    scanf("%s", searchDest);

    searchByDestination(n, f, searchDest);

    return 0;
}

void readFlights(int n, Flight_t f[]){
    int i;
    for(i=0;i<n;i++){
        printf("Enter the details of flight %d\n",i+1);

        printf("Enter the flight number:\n");
        scanf("%d", &f[i].flight_number);

        printf("Enter the destination:\n ");
        scanf("%s", f[i].destination);

        printf("Enter the available seats:\n");
        scanf("%d", &f[i].available_seats);
    }
}

void searchByDestination ( int n, Flight_t f[], char searchDest[]){
    int i, found = 0;
    for (i = 0; i<n ; i++){
       if(strcmp(f[i].destination, searchDest)==0){
        printf("Flight found!\n");
        printf("Flight number:%d\n", f[i].flight_number);
        printf("Available seats: %d\n", f[i].available_seats);
        found = 1; 
       }
       
    }
    if(found != 1){
        printf("No flight available at %s", searchDest);
    } 
    
}