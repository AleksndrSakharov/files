#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
// 0...1000

void main() {
    FILE* f;
    f = fopen("text.txt", "wt"); //rt, at
    // fprintf - запись в файл, fscanf - для чтения файла
    char* out = "Helllo wwordl!";
    fprintf(f, "%s", out);
    // printf("%s", out);
    fclose(f);
}