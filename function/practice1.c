#include<stdio.h>
int power(int x, int n){
    int ans = 1;
    for(int i = 0; i < n; i++)
        ans *= x; 
    return ans;
}
int main(){
    int x, n, ans;
    scanf("%d%d", &x, &n);
    ans = power(x, n);
    printf("%d\n", ans);
}
