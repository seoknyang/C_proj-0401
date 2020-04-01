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

        printf("1.사칙 연산\n");

        printf("2.로그 연산\n");

        printf("3.프로그램 종료\n\n");

        printf("메뉴번호 입력>");

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

        printf("사칙 연산\n\n");

        printf("1.덧셈(+) 연산\t");

        printf("2.뺄셈(-) 연산\n");

        printf("3.나눗셈(/) 연산\t");

        printf("4.곱셈(*) 연산\n");

        printf("5.나머지(%) 연산\t");

        printf("6.메인 메뉴로 이동\n");

        select = getch() - 48;

        return select;

}

 

int sub_menu_display02(void)

{

        int select;

        system("cls");

        printf("로그 연산\n\n");

        printf("1.자연로그(log) 계산\t");

        printf("2.상용로그(log10) 계산\n");

        printf("3.메인 메뉴로 이동\n");

        select = getch() - 48;

        return select;

}

 

void add(void)

{

        int num1, num2;

        printf("두 정수 입력:");

        scanf("%d %d", &num1, &num2);

        printf("%d+%d=%d\n", num1, num2, num1 + num2);

        press_any_key();

}

 

void subtract(void)

{

        int num1, num2;

        printf("두 정수 입력:");

        scanf("%d %d", &num1, &num2);

        printf("%d-%d=%d\n", num1, num2, num1 - num2);

        press_any_key();

}

 

void divide(void)

{

        int num1, num2;

        printf("두 정수 입력:");

        scanf("%d %d", &num1, &num2);

        printf("%d/%d=%d\n", num1, num2, num1 / num2);

        press_any_key();

}

 

void multiply(void)

{

        int num1, num2;

        printf("두 정수 입력:");

        scanf("%d %d", &num1, &num2);

        printf("%d*%d=%d\n", num1, num2, num1 * num2);

        press_any_key();

}

 

void remain(void)

{

        int num1, num2;

        printf("두 정수 입력:");

        scanf("%d %d", &num1, &num2);

        printf("(%d)%%(%d)=%d\n", num1, num2, num1 % num2);

        press_any_key();

}

 

void press_any_key(void)

{

        printf("\n\n");

        printf("아무키나 누르면 이전 메뉴로...");

        getch();

}

 

void naturallog(void)

{

        double num;

        printf("숫자 입력:");

        scanf("%lf", &num);

        printf("%f를 자연로그연산 시키면 %f\n", num, log(num));

        press_any_key();

}

 

void decimallog(void)

{

        double num;

        printf("숫자 입력:");

        scanf("%lf", &num);

        printf("%f를 로그연산 시키면 %f\n", num, log10(num));

        press_any_key();

}
