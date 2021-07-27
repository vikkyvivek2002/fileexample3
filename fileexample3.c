#include <stdio.h>
#include <stdlib.h>
 int main()
{

 FILE *fp1 = fopen("sample1.txt", "r");
 FILE *fp2 = fopen("sample2.txt", "r");
 
 FILE *fp3 = fopen("sample3.txt", "w");
 char c;
 if (fp1 == NULL || fp2 == NULL )
 {
 puts("Could not open files");
 exit(0);
 }
 
 while ((c = fgetc(fp1)) != EOF)
 fputc(c, fp3);
 
 while ((c = fgetc(fp2)) != EOF)
 fputc(c, fp3);
 printf("Merged sample1.txt and sample2.txt into sample3.txt\n");
 fclose(fp1);
 fclose(fp2);
 fclose(fp3);
 return 0;
}
