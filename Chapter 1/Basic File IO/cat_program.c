#include<stdio.h>
#include<stdlib.h>

void show_usage_and_exit() {
    printf("cat_program <file>\n");
    exit(1);
}

int main(int argc, char* argv[]) {
    //first check to see that the function has been used correctly
    if(argc <= 1 || argc > 2) {
        show_usage_and_exit();
    }
    
    //the second argument should be a pointer to a file
    FILE *file_pointer;
    file_pointer = fopen(argv[1], "r");
    if(file_pointer == NULL) {
        printf("File not found.\n");
        show_usage_and_exit();
    }

    //if the file is found, then print out its contents
    char c = fgetc(file_pointer);
    while(c != EOF) {
        putchar(c);
        c = fgetc(file_pointer);
    }
    fclose(file_pointer);

}