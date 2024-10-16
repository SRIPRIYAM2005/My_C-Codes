#include <stdio.h>

int main() {
    int n,flag = 0;
    scanf("%d",&n);
    int a[n][n];
    for (int i = 0;i<n;i++)
        for (int j = 0;j<n;j++)
            scanf("%d",&a[i][j]);

    for (int i = 0;i<n;i++) {
        for (int j = 0;j<n;j++) {
            if (a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
            else
            flag++;
        }
    }
    if (flag > 0)    
    printf("its a symmetric matrix") ;
    else // flag = 0
    printf("its not a symmetric matrix");
}