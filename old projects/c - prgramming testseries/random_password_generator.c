#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char random_alphabet_generator()
{
    char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    srand(time(NULL));
    return alphabet[rand() % 26];
}
char random_symbol_generator()
{
    char symbol[6] = {'!', '@', '#', '$', '%', '&'};
    srand(time(NULL));
    return symbol[rand() % 6];
}
char random_number_generator()
{
    char number[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    srand(time(NULL));
    return number[rand() % 10];
}
int main()
{
    int length;
    int entry;
    char *password;
    char alphabet, number, symbol;
    printf("\nEnter the length of your password : ");
    scanf("%d", &length);
    getchar();
label:
    printf("\nDo you want to add alphabets in your password\n");
    printf("Enter Here [y for yes and n for no] : ");
    scanf("%c", &alphabet);
    getchar();
    if (alphabet != 'y' && alphabet != 'Y' && alphabet != 'n' && alphabet != 'N')
    {
        printf("\nAre you blind!!\n");
        printf("Read the sentences carefully and then type.\n");
        goto label;
    }
label1:
    printf("\nDo you want to add numbers in you password\n");
    printf("Enter Here [y for yes and n for no] : ");
    scanf("%c", &number);
    getchar();
    if (number != 'y' && number != 'Y' && number != 'n' && number != 'N')
    {
        printf("\nAre you blind!!\n");
        printf("Read the sentences carefully and then type.\n");
        goto label1;
    }
label2:
    printf("\nDo you want to add special characters in you password\n");
    printf("Enter Here [y for yes and n for no] : ");
    scanf("%c", &symbol);
    getchar();
    if (symbol != 'y' && symbol != 'Y' && symbol != 'n' && symbol != 'N')
    {
        printf("Are you blind!!\n");
        printf("Read the sentences carefully and then type.\n");
        goto label2;
    }
    printf("\n");
    password = (char *)malloc(length * 1);
    for (int i = 0; i < length; i++)
    {
    retry:
        srand(time(NULL));
        entry = rand() % 3;
        if (entry == 0)
        {
            if (alphabet == 'n' || alphabet == 'N')
            {
                printf("Press enter to generate random digit of password [Note put some time delay between two random digits]: ");
                getchar();
                goto retry;
            }

            char a = random_alphabet_generator();
            password[i] = a;
        }
        else if (entry == 1)
        {
            if (symbol == 'n' || symbol == 'N')
            {
                printf("Press enter to generate random digit of password [Note put some time delay between two random digits]: ");
                getchar();
                goto retry;
            }
            char b = random_symbol_generator();
            password[i] = b;
        }
        else if (entry == 2)
        {
            if (number == 'n' || number == 'N')
            {
                printf("Press enter to generate random digit of password [Note put some time delay between two random digits]: ");
                getchar();
                goto retry;
            }
            char c = random_number_generator();
            password[i] = c;
        }
        else
        {
            password[i] = '+';
        }
        printf("Press enter to generate random digit of password [Note put some time delay between two random digits]: ");
        getchar();
    }
    printf("\nYour random password is : %s\n\n", password);
    free(password);

    return 0;
}