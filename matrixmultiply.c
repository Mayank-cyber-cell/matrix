#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c, d;
    printf("enter the rows and columns of first matrix: ");
    scanf("%d %d", &a, &b);
    printf("enter the rows and columns of second matrix: ");
    scanf("%d %d", &c, &d);
    int arr[a][b];
    int arr1[c][d];
    int arr2[a][d];
    if (b != c)
    {
        printf("please give correct rows and columns to be multiplied\n");
    }
    else
    {
        printf("enter the elements of first matrix: ");
        for (int k = 0; k < a; k++){
            for (int l = 0; l < b; l++){
                scanf("%d", &arr[k][l]);
            }
        }
        printf("enter the elements of second matrix: ");
        for (int m = 0; m < c; m++)
        {
            for (int n = 0; n < d; n++)
            {
                scanf("%d", &arr1[m][n]);
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < d; j++)
        {
            arr2[i][j]=0;
        }
        
    }
    //calculation of matrices
    for (int i = 0; i < a; i++){
        for (int j = 0; j < d; j++){
            for (int k = 0; k < b; k++){
                arr2[i][j] += arr[i][k] * arr1[k][j];
            }
        }
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < d; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
