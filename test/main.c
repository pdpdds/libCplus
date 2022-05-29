#include "cvector.h"
#include <stdio.h>

int main()
{
    cvector* vec = cvector_create();
    cvector_push_back(vec, (void*)100);
    cvector_push_back(vec, (void*)654);
    cvector_push_back(vec, (void*)201);
    cvector_swap(vec, 2, 1);

    for (int i = 0; i < vec->idx; i++)
        printf("%d\n", (int)vec->data[i]);
    
    cvector_delete(vec, 0);

    return 0;
}