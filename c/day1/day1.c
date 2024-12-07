
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 10000


typedef struct {
    int left;
    int right;
} tuple; 



tuple* get_columns(char* line) {
    tuple* t = malloc(sizeof(tuple));

    line = strtok(line, " ");
    t->left = atoi(line);

    line = strtok(NULL, " ");
    t->right = atoi(line);

    return t;

}


void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}



void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}







int main(void) {

    char line[MAX_LINES];

    int right[MAX_LINES]; 
    int left[MAX_LINES]; 

    int count = 0; 


    while (fgets(line, MAX_LINES, stdin) != NULL) {
        // printf("%s", line);
        
        tuple* t = get_columns(line);
        left[count] = t->left;
        right[count] = t->right;

        printf("Left: %d, Right: %d\n", left[count], right[count]);

        count++;
    }

    printf("Count: %d\n", count);


    bubbleSort(left, count);
    bubbleSort(right, count);

    int output = 0; 

    for (int i = 0; i < count; i++) {
        output += abs(left[i] - right[i]);
    }

    printf("Output: %d\n", output);


    return 0;

} 





