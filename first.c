// Currency Converter using do-while loop

#include <stdio.h>

int main()
{
    int choice;
    int subchoice;
    int ct = 1;
    float amount, result;

    do
    {
        printf("\n========== Currency Converter ==========\n");
        printf("1. Rupee Converter\n");
        printf("2. Dollar Converter\n");
        printf("3. Euro Converter\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
        {
            do
            {
                printf("\n---- Rupee Converter ----\n");
                printf("1. Rupee to Dollar\n");
                printf("2. Rupee to Euro\n");
                printf("Enter your choice : ");
                scanf("%d", &subchoice);

                switch(subchoice)
                {
                case 1:
                    printf("Enter amount in Rupees : ");
                    scanf("%f", &amount);

                    result = amount / 95.95;
                    printf("Dollar = %.2f\n", result);
                    break;

                case 2:
                    printf("Enter amount in Rupees : ");
                    scanf("%f", &amount);

                    result = amount / 109.86;
                    printf("Euro = %.2f\n", result);
                    break;

                default:
                    printf("Invalid Choice\n");
                }

                printf("Press 1 to continue Rupee Converter otherwise 0 : ");
                scanf("%d", &ct);

            } while(ct == 1);

            break;
        }

        case 2:
        {
            do
            {
                printf("\n---- Dollar Converter ----\n");
                printf("1. Dollar to Rupee\n");
                printf("2. Dollar to Euro\n");
                printf("Enter your choice : ");
                scanf("%d", &subchoice);

                switch(subchoice)
                {
                case 1:
                    printf("Enter amount in Dollar : ");
                    scanf("%f", &amount);

                    result = amount * 95.95;
                    printf("Rupees = %.2f\n", result);
                    break;

                case 2:
                    printf("Enter amount in Dollar : ");
                    scanf("%f", &amount);

                    result = amount / 1.17;
                    printf("Euro = %.2f\n", result);
                    break;

                default:
                    printf("Invalid Choice\n");
                }

                printf("Press 1 to continue Dollar Converter otherwise 0 : ");
                scanf("%d", &ct);

            } while(ct == 1);

            break;
        }

        case 3:
        {
            do
            {
                printf("\n---- Euro Converter ----\n");
                printf("1. Euro to Rupee\n");
                printf("2. Euro to Dollar\n");
                printf("Enter your choice : ");
                scanf("%d", &subchoice);

                switch(subchoice)
                {
                case 1:
                    printf("Enter amount in Euro : ");
                    scanf("%f", &amount);

                    result = amount * 109.86;
                    printf("Rupees = %.2f\n", result);
                    break;

                case 2:
                    printf("Enter amount in Euro : ");
                    scanf("%f", &amount);

                    result = amount * 1.17;
                    printf("Dollar = %.2f\n", result);
                    break;

                default:
                    printf("Invalid Choice\n");
                }

                printf("Press 1 to continue Euro Converter otherwise 0 : ");
                scanf("%d", &ct);

            } while(ct == 1);

            break;
        }

        default:
            printf("Invalid Main Menu Choice\n");
        }

        printf("\nPress 1 to go to Main Menu otherwise 0 : ");
        scanf("%d", &ct);

    } while(ct == 1);

    printf("\nThank You!\n");

    return 0;
}