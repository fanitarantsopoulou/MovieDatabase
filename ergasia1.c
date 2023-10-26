#include <stdio.h>
struct movie
{
    char code[10];
    char title[26];
    int year;
};
void insert(char code, char title, int year)
{
    // Inserting a movie at the database of the store
}

void search(char code)
{
    // Searching if the movide exists by entering its code
}

void update(char code)
{
    // Updating the year the movie was filmed by entering its code
}

void erase(char code)
{
    // Erasing the movie by entering its code
}

void print(char code, char title, int year)
{
    // Printing all the information that are located at the store's database
}

void quit()
{
    // Quitting the program
}

int main(int argc, char *argv[])
{
    printf("Welcome to movies adminstration system");

    char choice;
    struct movie newMovie;

    // The user is asked to select a function
    scanf("Enter your choice %c:", &choice);
    // All the letters at the case command, are the first letters of each function.
    switch (choice){
    case 'i':
    case 'I':
        printf("Enter movie code: %c", newMovie.code);
        printf("Enter movie title: %c", newMovie.title);
        printf("Enter year of movie: %d", newMovie.year);
        insert(newMovie.code, newMovie.title, newMovie.year);
        break;

    case 's':
    case 'S':
        printf("Enter movie code: %c", newMovie.code);
        break;

    case 'u':
    case 'U':
        printf("Enter movie code: %c", newMovie.code);

        break;

    case 'e':
    case 'E':
        printf("Enter movie code: %c", newMovie.code);

        break;

    case 'p':
    case 'P':
        printf("Enter movie code: %c", newMovie.code);
        printf("Enter movie title: %c", newMovie.title);
        printf("Enter year of movie: %d ", newMovie.year);
        break;

    case 'q':
    case 'Q':
        printf("Enter movie code: %c", newMovie.code);
        printf("Enter movie title: %c", newMovie.title);
        printf("Enter year of movie: %d ", newMovie.year);
        break;

    default:
        printf("The function you have selected doesn't exist.");
        // default statements
    }
}