#include <stdio.h>
int main()
{
    double n;

    printf("Enter a number: ");
    scanf("%lf", &nr);

    if (n <= 0.0)
    {
        if (n == 0.0)
            printf("You entered 0.");
        else
            printf("You entered a negative number.");
    }
    else
        printf("You entered a positive nuuumber.");
    return 0;
}
