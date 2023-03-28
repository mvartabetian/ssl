#include "stdio.h"

int main(){
    printf("Hello, world!\n");

    //to file
    FILE *file= fopen("output.txt","w");
    fprintf(file, "Hello, world!\n");
    fclose(file);
    
    return 0;
}