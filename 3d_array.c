#include <stdio.h>
int main(){
    int arr[2][3][2];
    int a,b,c;
    int e_sum = 0, o_sum = 0;
    printf("enter the elements of array:\n");
    for(a=0; a<2; a++){
        for(b=0; b<3; b++){
            for(c=0; c<2; c++){
                printf("arr[%d][%d][%d] = ", a,b,c );
                scanf("%d", &arr[a][b][c]);
            }
        }
    }
    // to print the sum
    for(a=0; a<2; a++){
        for(b=0; b<3; b++){
            for(c=0; c<2; c++){
                if(arr[a][b][c] % 2 == 0)
                   e_sum += arr[a][b][c];
                else 
                   o_sum += arr[a][b][c];
            }
        }
    }
    printf("\nThe even sum: %d ", e_sum);
    printf("\nThe odd sum: %d ", o_sum);
    return 0;
}
