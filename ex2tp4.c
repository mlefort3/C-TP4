//
//  ex2tp4.c
//  
//
//  Created by Maxence Lefort on 17/03/2017.
//
//
#include <stdlib.h>
#include <stdio.h>

void copie(char source[], char destination[]) {
    char str1;
    FILE * fp;
    FILE * fdest;
    
    fp = fopen (source, "r");
    fdest = fopen(destination,"w+");
    while (!feof(fp)) {
        fscanf(fp, "%c", &str1);
        fprintf(fdest, "%c", str1);
    }
    fclose(fp);
}

int main(int argc, char *argv[]) {
    if (argc==1) {
        char source[20], destination[20];
        printf("Rentrez le chemin de la source : \n");
        scanf("%s",source);
        printf("\nRentrez le chemin de la destination : \n");
        scanf("%s",destination);
        copie(source,destination);
    }
    else if (argc==3) {
        copie(argv[1],argv[2]);
    }
    return(0);
}
