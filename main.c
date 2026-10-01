#include <stdio.h>

int main(void)
{
    int a, b;       
    char op;        

    printf("Enter the calculation : ");
    scanf("%d %c %d", &a, &op, &b);     

    switch (op)
    {
        case '+':
            printf("%d + %d = %d\n", a,b,a + b);
            break;
        case '-':
            printf("%d - %d = %d\n", a,b,a - b);
            break;
        case '*':
            printf("%d * %d = %d\n", a,b,a * b);
            break;
        case '/':
            if (b == 0)
                printf("Cannot divide by zero\n");
            else
                printf("%d / %d = %d\n", a,b, a / b);
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
