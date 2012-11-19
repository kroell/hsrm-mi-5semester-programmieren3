#include <stdio.h>

int compress(void)
{
  printf ("compress\n");
  return 0;
}

int decompress(void)
{
  printf ("Decompress\n");
  return 0;
}



/* argc Anzahl der uebergebenen Argumente */
int main(int argc, char* argv[])
{

  char *appName = "compress";

  if (argc > 1)
    {
      if (strcmp(argv[1],appName)==0){
	printf ("%s\n", appName);
      }
      else{
	printf ("bla");
      }
    }
}
