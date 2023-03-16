#include <stdio.h>

int main() {
    FILE* fp = fopen("main2.txt" ,"w+");
    FILE* fpk = fopen("main2.c","r+");
    fprintf(fp,"01 ");
    int i = 1;
    char a;
    while ( ( a=fgetc(fpk) ) != EOF ) {
        (a == '\n') ? fprintf(fp,"\n%02d ",++i) : fputc(a,fp);
    }
    fclose(fp);
    return 0;
}
