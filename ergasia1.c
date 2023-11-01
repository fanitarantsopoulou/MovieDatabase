#include <stdio.h>
struct movie
{
    int code;
    char title[25];
    int year;
};

#define NAX_MOVIES 100;
struct movie movies[MAX_MOVIES];
int nmMovies=0;

void insert()
{
    // Inserting a movie at the database of the store
    struct movie newMovie;
    for (int i=0;i<=max_movies;i++){
        if (newMovie.code==.code){
            printf("The movie doesn't exist in the database.\n");
        }
    }
}

void search(int code)
{
    // Searching if the movide exists by entering its code
}

void update(int code)
{
    // Updating the year the movie was filmed by entering its code
}

void erase(int code)
{
    // Erasing the movie by entering its code
    printf("Enter the movie code\n");

}

void print(int code, char *title[25], int *year)
{
    // Printing all the information that are located at the store's database
}

void quit()
{
    // Quitting the program

}

int main(int argc, char *argv[])
{
    printf("Welcome to movies adminstration system\n");
    printf("\ni for insert\n");
    printf("\ns for search\n");
    printf("\nu for update\n");
    printf("\ne for erase\n");
    printf("\np for print\n");
    printf("\nq for quit\n");

    char choice;
    struct movie newMovie;
    printf("\nEnter your choice:");
    // The user is asked to select a function
    scanf("%C", &choice);
    // All the letters at the case command, are the first letters of each function.
    switch (choice)
    {
    case 'i':
    case 'I':
        printf("Enter movie code: ");
        scanf("%d", newMovie.code);
        printf("Enter movie title: ");
        scanf("%s", newMovie.title);
        printf("Enter year of movie: ");
        scanf("%d", &newMovie.year);
        insert(newMovie.code, newMovie.title, newMovie.year);
        break;

    case 's':
    case 'S':
        printf("Enter movie code: ");
        scanf("%d", newMovie.code);
        search(newMovie.code);
        break;

    case 'u':
    case 'U':
        printf("Enter movie code: ");
        scanf("%d", newMovie.code);
        update(newMovie.code);

        break;

    case 'e':
    case 'E':
        printf("Enter movie code: ");
        scanf("%d", newMovie.code);
        erase(newMovie.code);

        break;

    case 'p':
    case 'P':
        printf("Enter movie code: ");
        scanf("%d", newMovie.code);
        printf("Enter movie title: ");
        scanf("%s", newMovie.title);
        printf("Enter year of movie: ");
        scanf("%d", &newMovie.year);
        print(newMovie.code, newMovie.title, newMovie.year);
        break;

    case 'q':
    case 'Q':
        quit();
        break;
    default:
        printf("The function you have selected doesn't exist.");
        // default statements
    }
}
