#include <stdio.h> 
#include <stdlib.h>
#include "input.h"
#include "list.h"

int main() {
    int numbers[15] = {4, 19, 11, 8, 18, 15, 9, 13, 20, 1, 17, 7, 2};

    PtList l = listCreate();
    printf("Instance address = %p\n", l);

    printf("Adding elements to list...\n");
    for(int i=0; i < 15; i++) {
        listAdd(l, i, numbers[i]);
    }

    int size;
    listSize(l, &size);

    /* TODO: Print all elements inside 'l' */

    printf("List contains %d elements.\n", size);

    listDestroy(&l);
    printf("Instance address = %p\n", l);

    return EXIT_SUCCESS;
}

/*

// Adapt the following code to import the students' information
// into an instance of ADT List

int loadStudents(Student arr[], int howMany) {

    FILE* stream = fopen("students.csv", "r");

    int count = 0;
    char line[1024];
    while (fgets(line, 1024, stream))
    {
        if(count == howMany) break;

        char* tmp = strdup(line);
        
        char** tokens = splitString(tmp, 3, ";");
        
        int grade = atoi(tokens[2]);
        arr[count++] = studentCreate(tokens[0], tokens[1], grade);

	    free(tokens);
        free(tmp);
    }

    fclose(stream);

    return count;
}
*/