#include "stdio.h"
int result = 0;
int add(int num1, int num2) {
    result = num1 + num2;
    return result;
}
int sub(int num1, int num2) {
    result = num1 - num2;
    return result;
}
int mul(int num1, int num2) {
    result = num1 * num2;
    return result;
}
int div(int num1, int num2) {
    result = num1 / num2;
    return result;
}

int main() {
    int opt = 0;
    int n1 = 0;
    int n2 = 0;
    int result = 0;
    printf("************ Welcome to Calculator Program ****************** \n");
    printf("enter no '1' to add \n enter no '2' to sub \n enter no '3' to mul \n enter no '4' to div \n");
    scanf("%d", &opt);
    printf("enter first number: ");
    scanf("%d", &n1);
    printf("enter second number: ");
    scanf("%d", &n2);

    if (opt == 1) {
        result = add(n1, n2);
    } else if (opt == 2) {
        result = sub(n1, n2);
    } else if (opt == 3) {
        result = mul(n1, n2);
    } else if (opt == 4) {
        result = div(n1, n2);
    } else {
        printf("wrong option");
    }
    printf("Your Result is : %d ",result);
    return 0;
}