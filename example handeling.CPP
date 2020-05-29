#include<stdio.h>
#include<conio.h>
main()
{
  FILE* file = fopen ("number.txt", "r");
  int i=0;

  fscanf (file, "%d", &i);
  while (!feof (file))
    {
      printf ("%d ", i);
      fscanf (file, "%d", &i);
    }



  fclose (file);
}
