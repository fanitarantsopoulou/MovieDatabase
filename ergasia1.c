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
    scanf(" %s", &movies[x].title);
    printf("Insert Movie code: ");
    scanf(" %d", &temp);
    for (int i = 0; i <= 100; ++i)
    {

        if (movies[i].code == temp)
        {
            printf("The movie already exists!\n");
            return;
        }
        movies[x].code = temp;
    }
    printf("Insert Movie year: ");
    scanf(" %d", &movies[x].year);
}

void search() // Searching if a movie exists in the database
{
    int code;
    printf("Enter movie code to search: ");
    scanf("%d", &code);

    for (int i = 0; i <= 100; i++)
    {
        if (movies[i].code == code)
        {
            printf("Movie found:\n");
            printf("Title: %s\n", movies[i].title);
            printf("Year: %d\n", movies[i].year);
            return;
        }
    }

    printf("Movie not found.\n");
}

void update() // Updating the moving by its code
{
    int code;
    printf("Enter movie code to update: ");
    scanf(" %d", &code);

    for (int i = 0; i <= 100; i++)
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
}

void erase() //Erasing a movie from the database
{
    int code;
    printf("Enter movie code to erase: ");
    scanf(" %d", &code);

    for (int i = 0; i <= 100; i++)
    {

        if (movies[i].code == code)
        {
            printf("Enter code for erase: ");
            scanf(" %d", &movies[i].code);
            movies[i].code = 0;
            movies[i].year = 0;

            return;
        }
    }
    printf("Movie not found.\n");
}

void print() // Printing all the information which are located in the database
{
    printf("The movies are: \n");
    for (int i = 0; i <= 100; i++)
    {
        if (movies[i].year >= 1) // Movie year must be over 0, because there were no movies made in the year 0
        {
            printf("Title: %s, Year: %d, Code:%d\n", movies[i].title, movies[i].year, movies[i].code);
        }
    }
}

void quit(int *x) // Quiting the program
{
    *x = *x + 1;
}

int a = 1;

int main()
{

    printf("Welcome to movies adminstration system\n");
    printf("\ni for insert\n");
    printf("\ns for search\n");
    printf("\nu for update\n");
    printf("\ne for erase\n");
    printf("\np for print\n");
    printf("\nq for quit\n");

    while (a == 1)
    {
        char choice;
        scanf(" %c", &choice);
        switch (choice)
        {

        case 'q':
            quit(&a);
            break;

        case 'i':
            insert(counter);
            counter = counter + 1;
            break;

        case 's':
            search();
            break;

        case 'u':
            update();
            break;

        case 'e':
            erase();
            break;

        case 'p':
            print();
            break;
        }
        printf("\ni for insert\n");
        printf("\ns for search\n");
        printf("\nu for update\n");
        printf("\ne for erase\n");
        printf("\np for print\n");
        printf("\nq for quit\n");
    }

    return 0;
}
