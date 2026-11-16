#include<stdio.h>
#include<string.h>
struct Movie{
    char title[50];
    char genre[30];
    char director[50];
    int year;
    float rating;
};
void display(struct Movie m){
    printf("\nTitle: %s",m.title);
    printf("\nGenre: %s",m.genre);
    printf("\nDirector: %s",m.director);
    printf("\nYear: %d",m.year);
    printf("\nRating: %.1f\n",m.rating);
}
int main(){
    struct Movie m[100];
    int n=0,choice;
    char search[30];
    do{
        printf("\n1. Add Movie\n2. Search by Genre\n3. Display All\n4. Exit\n");
        scanf("%d",&choice);
        if(choice==1){
                printf("Enter title: ");
                scanf(" %49[^\n]",m[n].title);
                printf("Enter genre: ");
                scanf(" %29[^\n]",m[n].genre);
                printf("Enter director: ");
                scanf(" %49[^\n]",m[n].director);
                printf("Enter year: ");
                scanf("%d",&m[n].year);
                printf("Enter rating: ");
                scanf("%f",&m[n].rating);
                n++;
        }
        else if(choice==2){
            int found=0;
            printf("Enter genre: ");
            scanf(" %29[^\n]",search);
            for(int i=0;i<n;i++){
                if(strcmp(m[i].genre,search)==0){
                    display(m[i]);
                    found=1;
                }
            }
            if(found==0){
                printf("No movie found!\n");
            }
        }
        else if(choice==3){
            for(int i=0;i<n;i++){
                display(m[i]);
            }
        }
    }while(choice!=4);
    return 0;
}