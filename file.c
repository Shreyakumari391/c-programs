#include <stdio.h> 
#include <stdlib.h>

int main() {
    FILE *fp;
    char data [100];

// Create / Write

fp = fopen("myfile.txt", "w"); 
if(fp == NULL) { 
    printf("File not created.\n");
    exit(0);
}

fprintf(fp, "Hello, this is a file.\n"); 
fclose(fp);

// Read

fp = fopen("myfile.txt", "r"); 
while(fgets(data, 100, fp) != NULL)
printf("%s", data);
fclose(fp);

// Delete

if(remove("myfile.txt") == 0) 
printf("File deleted successfully.\n");

else 
printf("File deletion failed.\n");

return 0;
}