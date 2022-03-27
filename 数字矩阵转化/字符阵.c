#include<stdio.h>
#include<stdlib.h>
#define RANGE 20
#define LINE 30
int main()
{
    char c[RANGE][LINE+1];/*更改后的数组*/
    int a[RANGE][LINE+1];//文件中数组
    FILE *f;
    FILE *fp;
    int i, j, k = 0;
    char s[31];
    char b[] = {' ','.','\'','\"','^','*','%','$','@','#'};
    f = fopen("123.txt", "r");
    fp = fopen("zcy.dat", "w");
    if(f == 0)
    {
        fprintf(stderr,"Open 123.txt is failed.");
        EXIT_FAILURE;
    }
    for(i=0; i<RANGE; i++)
        for(j=0; j < LINE ; j++)
        {
            while(fscanf(f,"%d",&a[i][j]) != 1)
            {
                fscanf(f,"%*c");
            }
        }
    for(i = 0; i < RANGE; i++)
    {
        for(j = 0 ; j < LINE ; j++)
        {
            c[i][j] = *(b+a[i][j]);
            c[i][LINE] = '\0';
            
        }
        fprintf(fp , "%s\n", c[i]);
    }
}