#include <stdio.h>
struct movie
{
   char code[10];
   char title[26];
   int *year;
};
int count = 0;
int max_movies = 100;
void insert(char code[], char title[], int *year)
{
   // Inserting a movie at the database of the store
}

void search(char code[])
{
   // Searching if the movide exists by entering its code
}

void update(char code[])
{
   // Updating the year the movie was filmed by entering its code
}

void erase(char code[])
{
   // Erasing the movie by entering its code
}

void print(char code[], char title[], int *year)
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
      scanf("%s", newMovie.code);
      printf("Enter movie title: ");
      scanf("%s", newMovie.title);
      printf("Enter year of movie: ");
      scanf("%d", &newMovie.year);
      printf("%d", newMovie.year);
      insert(newMovie.code, newMovie.title, newMovie.year);
      break;

   case 's':
   case 'S':
      printf("Enter movie code: ");
      scanf("%s", newMovie.code);
      search(newMovie.code);
      break;

   case 'u':
   case 'U':
      printf("Enter movie code: ");
      scanf("%s", newMovie.code);
      update(newMovie.code);

      break;

   case 'e':
   case 'E':
      printf("Enter movie code: ");
      scanf("%s", newMovie.code);
      erase(newMovie.code);

      break;

   case 'p':
   case 'P':
      printf("Enter movie code: ");
      scanf("%s", newMovie.code);
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
   }
}
