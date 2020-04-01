#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

 

int menu_display(void);

int sub_menu_display01(void);

int sub_menu_display02(void);

void sub_main01(void);

void sub_main02(void);

 

void add(void);

void subtract(void);

void multiply(void);

void divide(void);

void remain(void);

void press_any_key(void);

 

void naturallog(void);

void decimallog(void);

 

int main(void)

{

        int c;

        while ((c = menu_display()) != 3)

        {

               switch (c)

               {

               case 1:

                       sub_main01();

                       break;

               case 2:

                       sub_main02();

                       break;

               default:

                       break;

               }

        }

        return 0;

}

 

int menu_display(void)

{

        int select;

        system("cls");

        printf("1.��Ģ ����\n");

        printf("2.�α� ����\n");

        printf("3.���α׷� ����\n\n");

        printf("�޴���ȣ �Է�>");

        select = getch() - 48;

        return select;

}

 

void sub_main01(void)

{

        int c;

        while ((c = sub_menu_display01()) != 6)

        {

               switch (c)

               {

               case 1:

                       add();

                       break;

               case 2:

                       subtract();

                       break;

               case 3:

                       divide();

                       break;

               case 4:

                       multiply();

                       break;

               case 5:

                       remain();

                       break;

               default:

                       break;

               }

        }

}

 

void sub_main02(void)

{

        int c;

        while ((c = sub_menu_display02()) != 3)

        {

               switch (c)

               {

               case 1:

                       naturallog();

                       break;

               case 2:

                       decimallog();

                       break;

               default:

                       break;

               }

        }

}

 

int sub_menu_display01(void)

{

        int select;

        system("cls");

        printf("��Ģ ����\n\n");

        printf("1.����(+) ����\t");

        printf("2.����(-) ����\n");

        printf("3.������(/) ����\t");

        printf("4.����(*) ����\n");

        printf("5.������(%) ����\t");

        printf("6.���� �޴��� �̵�\n");

        select = getch() - 48;

        return select;

}

 

int sub_menu_display02(void)

{

        int select;

        system("cls");

        printf("�α� ����\n\n");

        printf("1.�ڿ��α�(log) ���\t");

        printf("2.���α�(log10) ���\n");

        printf("3.���� �޴��� �̵�\n");

        select = getch() - 48;

        return select;

}

 

void add(void)

{

        int num1, num2;

        printf("�� ���� �Է�:");

        scanf("%d %d", &num1, &num2);

        printf("%d+%d=%d\n", num1, num2, num1 + num2);

        press_any_key();

}

 

void subtract(void)

{

        int num1, num2;

        printf("�� ���� �Է�:");

        scanf("%d %d", &num1, &num2);

        printf("%d-%d=%d\n", num1, num2, num1 - num2);

        press_any_key();

}

 

void divide(void)

{

        int num1, num2;

        printf("�� ���� �Է�:");

        scanf("%d %d", &num1, &num2);

        printf("%d/%d=%d\n", num1, num2, num1 / num2);

        press_any_key();

}

 

void multiply(void)

{

        int num1, num2;

        printf("�� ���� �Է�:");

        scanf("%d %d", &num1, &num2);

        printf("%d*%d=%d\n", num1, num2, num1 * num2);

        press_any_key();

}

 

void remain(void)

{

        int num1, num2;

        printf("�� ���� �Է�:");

        scanf("%d %d", &num1, &num2);

        printf("(%d)%%(%d)=%d\n", num1, num2, num1 % num2);

        press_any_key();

}

 

void press_any_key(void)

{

        printf("\n\n");

        printf("�ƹ�Ű�� ������ ���� �޴���...");

        getch();

}

 

void naturallog(void)

{

        double num;

        printf("���� �Է�:");

        scanf("%lf", &num);

        printf("%f�� �ڿ��α׿��� ��Ű�� %f\n", num, log(num));

        press_any_key();

}

 

void decimallog(void)

{

        double num;

        printf("���� �Է�:");

        scanf("%lf", &num);

        printf("%f�� �α׿��� ��Ű�� %f\n", num, log10(num));

        press_any_key();

}
