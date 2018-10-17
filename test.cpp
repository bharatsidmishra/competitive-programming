#include<bits/stdc++.h>
#include<algorithm>

int countSpecialElements(int matrix_rows, int matrix_columns, int matrix[][3]){
    int row_mat[matrix_rows][matrix_columns];
    int col_mat[matrix_rows][matrix_columns];
    
    for (int i=0; i<matrix_rows; i++){
        int min_i=i, min_j=0, max_i=i, max_j=0;
        int maximum = matrix[i][0], minimum = matrix[i][0];
        
        for (int j=0; j<matrix_columns; j++){
                if ( matrix[i][j] <=  matrix[min_i][min_j] ){
                    min_i = i;
                    min_j = j;
                    minimum = matrix[i][j];
                }
                if (matrix[max_i][max_j] <= matrix[i][j]){
                    max_i = i;
                    max_j = j;
                    maximum = matrix[i][j];
                }
              
                row_mat[i][j] = INT_MIN;
        }
        row_mat[min_i][min_j] = minimum;
        row_mat[max_i][max_j] = maximum;
    }
    
    
    for(int j=0; j<matrix_columns; j++){
        int min_i=0, min_j=j, max_i=0, max_j=j;
        int maximum = INT_MIN, minimum = INT_MAX;
        
        for(int i=0; i < matrix_rows; i++){
            if ( matrix[min_i][min_j] > matrix[i][j]){
                    min_i = i;
                    min_j = j;
                    minimum = col_mat[i][j];
                }
                if (matrix[max_i][max_j] < matrix[i][j]){
                    max_i = i;
                    max_j = j;
                    maximum = matrix[i][j];
                }
                col_mat[i][j] = INT_MIN;
        }
        col_mat[min_i][min_j] = minimum;
        col_mat[max_i][max_j] = maximum;
    }
    
    int count = 0;
    
    for (int i=0; i<matrix_rows; i++){
        for(int j=0; j< matrix_columns; j++){
            if (row_mat[i][j] != INT_MIN || col_mat[i][j] != INT_MIN){
                count ++;
            }
        }
    }
    
    printf("%d", count);
    return count;

}

int main()
{
    int matrix[3][3] = {
        {1,3,4},
        {5,2,9},
        {8,7,6}
    };
    countSpecialElements(3,3,matrix);

    return 0;
}
