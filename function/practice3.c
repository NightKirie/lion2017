#include<stdio.h>
int multiple(int a[10]){
    int ans = 1;
    for(int i = 0; i < 10; i++)
        ans *= a[i];
    printf("%d\n", ans);
}
int main(){
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    multiple(a);
}
