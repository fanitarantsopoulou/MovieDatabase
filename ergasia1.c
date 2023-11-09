#include <stdio.h>

    struct Movie
{
    int code;
    char title[25];
    int year;
};

int counter = 0; // Counter represents the number of movies

struct Movie movies[100];

void insert(int x) // Inserting a movie in the database
{
    int temp; // Using a temporary variable which represents a movie code

    if (counter == 100)
    {
        printf("Database is full!\n");
        return;
    }

    printf("Insert Movie title: ");
    scanf(" %[^\n]24s", &movies[x].title); // Scanf will not stop reading when it encounters space, by default
    printf("Insert Movie code: ");
    scanf(" %d", &temp);
    for (int i = 0; i < counter; ++i)
    {

        if (movies[i].code == temp)
        {
            printf("The movie already exists!\n");
            return;
        }
    }
    movies[x].code = temp;
    printf("Insert Movie year: ");
    scanf(" %d", &movies[x].year);
    counter++;
} // end insert

void search() // Searching if a movie exists in the database
{
    int code;
    printf("Enter movie code to search: ");
    scanf("%d", &code);

    for (int i = 0; i <100; i++)
    {
        if (movies[i].code == code)
        {
            printf("Movie found:\n"); // Printing the movie elements
            printf("Title: %s\n", movies[i].title);
            printf("Year: %d\n", movies[i].year);
            return;
        }
    }

    printf("Movie not found.\n");
} // end search

void update() // Updating the movie year by its code
{
    int code;
    printf("Enter movie code to update: ");
    scanf(" %d", &code);

    for (int i = 0; i < 100; i++)
    {

        if (movies[i].code == code)
        {
            printf("Enter new year: ");
            scanf(" %d", &movies[i].year);
            printf("Year updated.\n");

            return;
        }
    }
    printf("Movie not found.\n");
} // end update

void erase() // Erasing a movie from the database
{
    int code;
    printf("Enter movie code to erase: ");
    scanf(" %d", &code);

    for (int i = 0; i < 100; i++)
    {

        if (movies[i].code == code)
        {
            printf("Enter code for erase: ");
            scanf(" %d", &movies[i].code);
            movies[i].code = 0; // Movie code and year equals to 0, means that the movie has deleted.
            movies[i].year = 0;

            return;
        }
    }
    printf("Movie not found.\n");
} // end erase

void print() // Printing all the information which are located in the database
{
    printf("The movies are: \n");
    for (int i = 0; i < 100; i++)
    {
        if (movies[i].year >= 1) // Movie year must be over 0, because there were no movies made in the year 0
        {
            printf("Title: %s, Year: %d, Code:%d\n", movies[i].title, movies[i].year, movies[i].code);
        }
    }
} // end print

void quit(int *x) // Quiting the program
{
    *x = *x + 1;
} // end quit

int a = 1;

int main()
{

    printf("Welcome to movies administration system\n");
    printf("Enter operation code:\n ");
    printf("\ni for insert\n");
    printf("\ns for search\n");
    printf("\nu for update\n");
    printf("\ne for erase\n");
    printf("\np for print\n");
    printf("\nq for quit\n");

    while (a == 1)
    {
        char operation;
        scanf(" %c", &operation);
        switch (operation)
        {
        case 'i': // I or i for inserting a movie
        case 'I':
            insert(counter);
            counter = counter + 1;
            break;

        case 's': // S or s for searching a movie
        case 'S':
            search();
            break;

        case 'u': // U or u for updating a movie
        case 'U':
            update();
            break;

        case 'e': // E or e for erasing a movie
        case 'E':
            erase();
            break;

        case 'p': // P or p for printing the database elements
        case 'P':
            print();
            break;

        case 'q': // Q or q for quitting the program
        case 'Q':
            quit(&a);
            break;
        } // end switch
        printf("Enter your choice:\n "); // Choosing one of the previous operations
    } // end while

    return 0;
} // end main
