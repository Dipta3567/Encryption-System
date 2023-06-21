#include <stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
char text[1000000],encrypted[1000000],t,e,r,temp=0;
int n,x,i=0,k;
struct userdata
{
    char Name[100],ID[100],Section[100];
    int number;
};
void add_user_data()
{
    int i;
    struct userdata data[100];
    FILE *a;
    a=fopen("userdata.txt", "w");
    int x;
    printf("Total user: ");
    scanf("%d", &x);
    getchar();
    for (i=0;i<x;i++)
    {
        printf("Enter Name: ");
        fgets(data[i].Name, sizeof(data[i].Name),stdin);
        printf("Enter ID: ");
        fgets(data[i].ID, sizeof(data[i].ID),stdin);
        printf("Enter Section: ");
        fgets(data[i].Section, sizeof(data[i].Section),stdin);
        printf("Enter Number: ");
        scanf("%d", &data[i].number);
        getchar();


    }
    for (i=0;i<x;i++)
    {
        fprintf(a,"Member %d:\n",i+1);
        fprintf(a,"\nName: %s\n",data[i].Name);
        fprintf(a, "ID: %s\n",data[i].ID);
        fprintf(a, "Section: %s\n",data[i].Section);
        fprintf(a, "Mobile Number: 0%d\n\n",data[i].number);
    }
    fclose(a);
    printf("\n\nData Added Successfull");
    printf ("\n\n");
    screen();
    print_ascii_art();
    user_choice();
}

void read_user_data()
{
    char strings[1000][1000];
    int i=0;
    FILE *a;
    a=fopen("userdata.txt", "r");
    if (a==NULL)
    {
        printf("File is missing\n");
        screen();
        print_ascii_art();
        user_choice();
    }
    while (fgets(strings[i],1000,a)!=NULL)
    {
        i++;

    }

    fclose(a);
    for (int j=0;j<=i;j++)
        printf("%s\n",strings[j]);
    printf ("\n\n");
    screen();
    print_ascii_art();
    user_choice();
}

void welcome()
{
    printf("\n");
    printf("\n");
    printf("           WW       WW    EEEEEEEEEEE    LL             CCCCCCCCCCC       OOOOO        MM       MM    EEEEEEEEEEE\n");
    printf("           WW       WW    EE             LL             CC              OOO   OOO      MMM     MMM    EE         \n");
    printf("           WW       WW    EE             LL             CC             OO       OO     MM MM MM MM    EE         \n");
    printf("           WW   W   WW    EEEEEEE        LL             CC             OO       OO     MM   M   MM    EEEEEEE    \n");
    printf("           WW  WWW  WW    EE             LL             CC             OO       OO     MM       MM    EE         \n");
    printf("             WWW WWW      EE             LL             CC              OOO   OOO      MM       MM    EE         \n");
    printf("              W   W       EEEEEEEEEEE    LLLLLLLLLLL    CCCCCCCCCCC       OOOOO        MM       MM    EEEEEEEEEEE\n");
    printf("\n");
    printf("\n");
}
void screen()
{
    printf("Press Enter To Continue...\n\n");
    getch();
    system("cls");
}
int input_password()
{
    int pass,identity,i=3,cnt,x[100],j;
    FILE *a;
    a=fopen("password.txt", "r");
    fscanf(a,"%d", &cnt);
    for (j=2;j<=cnt+1;j++)
        fscanf(a, "%d", &x[j]);
    printf("User Identity: \n\n");
    printf("1. Dipta\n\n");
    printf("2. Imam\n\n");
    printf("3. Mehedi\n\n");
    printf("4. Muntasir\n\n");
    printf("Choose a option: ");
    scanf("%d", &identity);
    printf("\n");
    switch (identity)
    {
    case 1:

        while (1)
        {

            printf("Enter The 4 digit Password: ");
            scanf("%d", &pass);
            if (pass==x[identity+1])
            {
                printf("\n");
                Beep(3900, 2000);// access granted password sound.
                Beep(3900, 50);
                printf("Access Granted\n\n");
                break;
            }
            else
            {
                printf("\n");
                i--;
                Beep(2900, 800); // wrong password sound.
                Beep(2900, 800);
                Beep(2900, 800);
                printf("Invalid Password\n\n");
                printf ("%d chance remaining\n\n", i);
                if (i==0)
                break;
            }

        }

        break;


    case 2:
        while (1)
        {

            printf("Enter The 4 digit Password: ");
            scanf("%d", &pass);
            if (pass==x[identity+1])
            {
                printf("\n");
                Beep(3900, 2000);// access granted password sound.
                Beep(3900, 50);
                printf("Access Granted\n\n");
                break;
            }
            else
            {
                printf("\n");
                i--;
                Beep(2900, 800); // wrong password sound.
                Beep(2900, 800);
                Beep(2900, 800);
                printf("Invalid Password\n\n");
                printf ("%d chance remaining\n\n", i);
                if (i==0)
                break;
            }

        }

        break;

    case 3:
        while (1)
        {

            printf("Enter The 4 digit Password: ");
            scanf("%d", &pass);
            if (pass==x[identity+1])
            {
                printf("\n");
                Beep(3900, 2000);// access granted password sound.
                Beep(3900, 50);
                printf("Access Granted\n\n");
                break;
            }
            else
            {
                printf("\n");
                i--;
                Beep(2900, 800); // wrong password sound.
                Beep(2900, 800);
                Beep(2900, 800);
                printf("Invalid Password\n\n");
                printf ("%d chance remaining\n\n", i);
                if (i==0)
                break;
            }

        }

        break;

    case 4:
        while (1)
        {

            printf("Enter The 4 digit Password: ");
            scanf("%d", &pass);
            if (pass==x[identity+1])
            {
                printf("\n");
                Beep(3900, 2000);// access granted password sound.
                Beep(3900, 50);
                printf("Access Granted\n\n");
                break;
            }
            else
            {
                printf("\n");
                i--;
                Beep(2900, 800); // wrong password sound.
                Beep(2900, 800);
                Beep(2900, 800);
                printf("Invalid Password\n\n");
                printf ("%d chance remaining\n\n", i);
                if (i==0)
                break;
            }

        }

        break;
    default:
        printf("Invalid User\n");
        return 0;
    }
    if (i !=0)
    {
        screen();
    }
    return i;
}
void print_ascii_art()
{
printf("\n");
printf("\n");
printf("\n");
printf("                                  TTTTTTT    EEEEEEE     AAA    MM   MM \n");
printf("                                     T       E          A   A   M M M M \n");
printf("                                     T       EEEEE      AAAAA   M  M  M \n");
printf("                                     T       E          A   A   M     M \n");
printf("                                     T       EEEEEEE    A   A   M     M \n");
printf("\n");
printf("\n");
printf("                              AAA     RRRR     CCCCCCC   EEEEEEE   UU   UU   SSSSSSS \n");
printf("                             A   A    R   R    C         E         UU   UU   S       \n");
printf("                             AAAAA    RRRR     C         EEEEE     UU   UU   SSSSSSS \n");
printf("                             A   A    R   R    C         E         UU   UU         S \n");
printf("                             A   A    R    R   CCCCCCC   EEEEEEE    UUUUU    SSSSSSS \n");
}
void ceasar_Encrypt()
{
    printf("\nEnter The Message: ");

        getchar();

        fgets(text,1000000,stdin);

        printf("Enter The Key: ");

        scanf("%d", &k);

        for (i=0; text[i]!='\0'; i++)
        {
            t=text[i];
            if (isalpha(t))
            {
                if (isupper(t))
                t=(((t-'A')+k)%26)+'A';
                else
                t=(((t-'a')+k)%26)+'a';
            }
            encrypted[i]=t;
        }
        encrypted[i]='\0';
        printf("\n");
        printf("The Encrypted Message is: %s", encrypted);
        printf("\n\n");
        screen();
        print_ascii_art();
        user_choice();
}
void ceasar_Decrypt()
{
    printf("\nEnter The Message: ");
        getchar();
        fgets(encrypted,1000000,stdin);
        printf("\n1. Use Key\n\n");
        printf("2. Use BruteForce\n\n");
        printf("Choose a option: ");
        scanf("%d", &x);
        switch(x)
        {
        case 1:
            printf("\nEnter The Key: ");
            scanf("%d", &k);
            for (i=0; encrypted[i]!='\0'; i++)
            {
                e=encrypted[i];
                if (isalpha(e))
                {
                    if (isupper(e))
                    e=(e-k-'A'+26)%26+'A';
                    else
                    e=(e-k-'a'+26)%26+'a';
                }
                text[i]=e;
            }
            text[i]='\0';
            printf("\n");
            printf("The Decrypted Message Is: %s", text);
            printf ("\n\n");
            screen();
            print_ascii_art();
            user_choice();

            break;


        case 2:
            for (k=1; k<=26; k++)
            {
                for (i=0; encrypted[i]!='\0'; i++)
                {
                    e=encrypted[i];
                    if (isalpha(e))
                    {
                        if (isupper(e))
                        e=(e-k-'A'+26)%26+'A';
                        else
                        e=(e-k-'a'+26)%26+'a';
                    }
                    text[i]=e;
                }
                text[i]='\0';
                printf("\n");
                printf("%d. The Decrypted Message Is: %s\n",k, text);
            }
            printf("\n\n");
            screen();
            print_ascii_art();
            user_choice();
            break;
        }
}
void Arceus_Encrypt()
{

        printf("\nEnter The Message: ");
        getchar();
        fgets(text,1000000,stdin);
        printf("\nThe Encrypted Message: ");
        for (i=0; text[i]!='\0'; i++)
        {
            r=text[i];
            if (i%2==0)
            {



                    r+=4;
            }
            else
            {


                    r+=9;

            }
            printf("%c",r);
        }
        printf("\n\n");
        screen();
        print_ascii_art();
        user_choice();
}
void Arceus_Decrypt()
{

        printf("\nEnter The Message: ");
        getchar();
        fgets(text,1000000,stdin);
        printf("\nThe Decrypted Message: ");
        for (i=0; text[i]!='\0'; i++)
        {
            r=text[i];
            if (i%2==0)
            {


                    r-=4;
            }
            else
            {

                    r-=9;
            }
            if (r!=6)
            {
                printf("%c",r);
            }
            else
            {
                continue;
            }
        }
        printf("\n\n");
        screen();
        print_ascii_art();
        user_choice();
}
void Caesar_Cipher_Encryption()
{

    printf("Hello Everyone To My Caesar Cipher Encryption and Decryption Program.....\n\n");

    printf("1. Encrypt a message \n\n");

    printf("2. Decrypt a message \n\n");
    printf("Choose a option: ");

    scanf("%d", &n);
    switch(n)
    {
    case 1:

        ceasar_Encrypt();

        break;


    case 2:
        ceasar_Decrypt();
        break;
    default:
        printf("Invalid Choice\n\n");
        screen();
        print_ascii_art();
        user_choice();
    }

}
void Arceus_Encryption()
{

    printf("Hello Everyone Welcome To Our Arceus Encryption and Decryption Program.....\n\n\n");

    printf("1. Encrypt a message \n\n");

    printf("2. Decrypt a message \n\n");
    printf("Choose a option: ");

    scanf("%d", &n);

    if(n==1)
    Arceus_Encrypt();
    else if(n==2)
    Arceus_Decrypt();
    else
    {
        printf("Invalid Choice\n\n");
        screen();
        print_ascii_art();
        user_choice();
    }
}
void user_choice()
{
    printf("\n\n");
    printf("\nIn our program, we added two types of encryption system. Which one you like to choose?\n\n");
    printf ("1. Caesar Cipher Encryption\n\n");
    printf("2. Arceus Encryption\n\n");
    printf("3. Add User Data\n\n");
    printf("4. Read User Data\n\n");
    printf("5. Exit\n\n");
    printf("Choose a option: ");
    scanf("%d", &n);
    printf("\n");
    system("cls");
    print_ascii_art();
    printf("\n\n");
    switch (n)
    {
    case 1:
        Caesar_Cipher_Encryption();
        break;
    case 2:
        Arceus_Encryption();
        break;
    case 3:
        add_user_data();
        break;
    case 4:
        read_user_data();
        break;
    case 5:
        return 0;
    default:
        printf("Invalid\n");
        break;
    }
}
int main()
{
    welcome();
    int n;
    int x=input_password();
    if (x==0)
        return 0;
    print_ascii_art();
    user_choice();


    return 0;
}
