#include <stdio.h> 
#include <stdlib.h>
#include "input.h"

int main() {

    /* Program code. */
    printf("I do nothing at this moment.\n");

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