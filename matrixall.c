#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int choice,sum,temp;
    int matrix1[3][3],matrix2[3][3],matrix3[3][3];
    while(1)
    {
        printf("\nenter 1 for operation(lower/upper triangular matrix or transpose matrix) which require 1 matrix\n\n");
        printf("\n enter 2 for operation(sum,subtraction and multiplication) which require 2 matrix\n\n enter 0 to exit code:\n\n");
        scanf("%d",&choice);
        if(choice==1){
             printf("Enter the matrix elements: \n--> ");
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    scanf("%d",&matrix1[i][j]);
                }

        }
        printf("The matrix is: \n");
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    printf("%d    ",matrix1[i][j]);
                }
                printf("\n\n");
            }
            printf("The lower trianguar matrix is: \n");
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    matrix2[i][j]=matrix1[i][j];
                }
            }
             for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    if(i<j){
                        matrix2[i][j]=0;
                    }
                }
            }
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    printf("%d    ",matrix2[i][j]);
                }
                printf("\n\n");
            }
             printf("The upper trianguar matrix is: \n");
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    matrix2[i][j]=matrix1[i][j];
                }
            }
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    if(i>j){
                        matrix2[i][j]=0;
                    }
                }
            }
             for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    printf("%d    ",matrix2[i][j]);
                }
                printf("\n\n");
            }
             printf("The Transpose matrix is: \n");
            for (int i=1; i<3; i++) {
                for (int j = 0; j < i; j++) {
                    temp = matrix1[i][j];
                    matrix1[i][j] = matrix1[j][i];
                    matrix1[j][i] = temp;
                }
            }
             for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    printf("%d    ",matrix1[i][j]);
                }
                printf("\n\n");
            }
            printf("\n\n");
        }
     else if(choice==2){
            printf("Enter the matrix1 elements: \n--> ");
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    scanf("%d",&matrix1[i][j]);
                }
            }
            printf("Enter the matrix2 elements: \n--> ");
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    scanf("%d",&matrix2[i][j]);
                }
            }
             printf("The matrices are: \n");
            printf("Matrix 1: \n");
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    printf("%d    ",matrix1[i][j]);
                }
                printf("\n\n");
            }
            printf("Matrix 2: \n");
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    printf("%d    ",matrix2[i][j]);
                }
                printf("\n\n");
            }
            printf("The addition of the two matrices: \n");
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
                }
            }
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    printf("%d    ",matrix3[i][j]);
                }
                printf("\n\n");
            }
            printf("The subraction of the two matrices: \n");
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    matrix3[i][j]=matrix1[i][j]-matrix2[i][j];
                }
            }
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    printf("%d    ",matrix3[i][j]);
                }
                printf("\n\n");
            }
            printf("The multiplication of the two matrices: \n");
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                sum = 0;
                    for(int k=0;k<3;k++){
                        sum = sum + matrix1[i][k] * matrix2[k][j];
                    }
                matrix3[i][j] = sum;
                }
            }
             for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    printf("%d    ",matrix3[i][j]);
                }
                printf("\n\n");
            }
     }
            else if(choice==0)
            {
            exit(0);
        }
        else
        {
            printf("Invalid choice, Please choose among 1 and 2!\n\n");
        }
    }
    return 0;
}