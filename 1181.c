#include <stdio.h>

int main(void)
{
    float M[12][12], soma = 0;
    int l;
    char t;

    scanf("%d %c", &l, &t);

    for(int i = 0;i<12; i++) 
    {
        for(int j = 0; j <12; j++)
        {
            scanf("%f", &M[i][j]);
        }
    }

    switch(t)
    {
        case 'S':
        for(int i =0; i<12;i++)
        {
            soma+= M[l][i];
        }
        printf("%.1f\n", soma);
        break;

        case 'M':
        for(int i =0; i<12;i++)
        {
            soma+= M[l][i];
        }
        printf("%.1f\n", soma/12);
        break;
    }
}