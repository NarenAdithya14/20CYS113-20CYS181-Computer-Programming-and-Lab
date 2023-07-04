#include <stdio.h>

int main() {
	    FILE *file;          Declare a pointer to a FILE structure
				     char filename[100]; 
				         char ch;            
			
				             printf("Enter the filename: ");
				                 scanf("%s", filename);
				                         file = fopen(filename, "r");
				                                 if (file == NULL) {
				                                         printf("Error opening the file.\n");
				                                                 retu
				                                                             printf("File contents:\n");
				                                                                 while ((ch = fgetc(file)) != E printf("%c", ch);} fclose(file);				
			                                                                                       return 0;
}
