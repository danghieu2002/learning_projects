//
//  main.c
//  C programming code
//
//  Created by Dang Trung Hieu on 11/18/21.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char data_line[] = "5.2,4.5";
    
    // Extract the first token
    char *token = strtok(data_line, ",");
    
    
    //extract remaining tokens
    while (token != NULL)
        {
            printf("%s\n", token);
            token = strtok(NULL, ",");
        }
    return 0;
    
}
