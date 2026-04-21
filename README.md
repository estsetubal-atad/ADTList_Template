# ADT List (Usage Template)

Created from [CProgramTemplate](https://github.com/estsetubal-atad/CProgram_Template.git).

## Included example program

```cpp
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
```


### Example output

```console
Instance address = 0x255272a0
Adding elements to list...
List contains 15 elements.
Instance address = (nil)
```