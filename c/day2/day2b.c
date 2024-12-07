
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LINES 10000

int main(void) {

    char line[MAX_LINES];
    char lines[MAX_LINES][100];
    int count = 0; 
    
    while (fgets(line, MAX_LINES, stdin) != NULL) {
       strcpy(lines[count], line); 
       count++;
    }

    char* str_number;

    int count_safe = 0; 
    int current, previous; 
    bool safe; 
    
    // 1 uptrend
    // -1 downtrend
    int trend; 
    int fail_count;



    for (int i = 0; i < count; i++) {
   
        strcpy(line, lines[i]);
        // printf("%s", lines[i]);

        str_number = strtok(lines[i], " "); 
        previous = atoi(str_number);

        safe = true;
        trend = 0;
        fail_count = 0;

        while (str_number != NULL) {

            str_number = strtok(NULL, " ");
            if(str_number == NULL) {break;} 

            current = atoi(str_number);   

            // Equal Number Guard 
            if(previous==current) {
                fail_count++; 
                continue;
            } 

            // Large Change Guard 
            if(abs(previous-current) > 3) { 
                fail_count++; 
                continue; 
            }

            // Trend Guards            
            if(trend<0 && current>previous) { 
                fail_count++; 
                continue;
            }
           
            if(trend>0 && current<previous) { 
                fail_count++; 
                continue;
            }

            trend = (current>previous) ? 1: -1;

            // Shift Number. 
            previous = current;

        }

        if(fail_count>1) { safe = false; }

        if(safe==true) {
            printf("SAFE %s", line);
        } else {
            printf("UNSAFE %s", line);
        }

        if (safe == true) { count_safe++; }

    } 
    
    printf("\nSafe: %d\n", count_safe);

    return 0;

} 





