#include<stdio.h>
#include<string.h>
struct Flight{
    int flightNo;
    char departure[30];
    char destination[30];
    char date[20];
    int seats;
};
void display(struct Flight f){
    printf("\nFlight Number: %d",f.flightNo);
    printf("\nDeparture: %s",f.departure);
    printf("\nDestination: %s",f.destination);
    printf("\nDate: %s",f.date);
    printf("\nAvailable Seats: %d\n",f.seats);
}
struct Flight book(struct Flight f){
    if(f.seats>0){
        f.seats--;
        printf("Seat booked successfully!\n");
    }
    else{
        printf("No seats available!\n");
    }
    return f;
}
int main(){
    struct Flight f;
    int choice;
    printf("Enter flight number: ");
    scanf("%d",&f.flightNo);
    printf("Enter departure city: ");
    scanf("%29s",f.departure);
    printf("Enter destination city: ");
    scanf("%29s",f.destination);
    printf("Enter date: ");
    scanf("%19s",f.date);
    printf("Enter available seats: ");
    scanf("%d",&f.seats);
    do{
        printf("\n1. Book Seat\n2. Display Flight\n3. Exit\n");
        scanf("%d",&choice);
        if(choice==1){
            f=book(f);
        }
        else if(choice==2){
            display(f);
        }
    }while(choice!=3);
    return 0;
}