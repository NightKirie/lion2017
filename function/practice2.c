#include<stdio.h>
#include<math.h>
double calculation(double a, double b, double c){
    return (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
}
int main(){
    double a, b, c;
    while(scanf("%lf%lf%lf", &a, &b, &c) != EOF){  
        if(b * b - 4 * a * c < 0)
            printf("No real number answer in this function\n");
        else
            printf("%lf\n", calculation(a, b, c));
    }        
}
