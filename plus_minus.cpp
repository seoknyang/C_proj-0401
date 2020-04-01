#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#define X_MAX 79
#define Y_MAX 24

 

void gotoxy(int x, int y);

void move_arrow_key(char key, int *num, int *unit);

 

int main(void)

{

        char key;

        int num = 100;

        int unit = 1;

        do

        {

               gotoxy(20, 10);

               printf("증가/감소 시키는 단위:%d", unit);

               gotoxy(20, 5);

               printf("%d", num);

                key = getch();

               move_arrow_key(key, &num, &unit);

        } while (key != 27);

        return 0;

}

 

void gotoxy(int x, int y)

{

        COORD Pos = { x - 1, y - 1 };

        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);

}

 

void move_arrow_key(char key, int *num, int *unit)

{

        switch (key)

        {

        case 72:

               *num = *num + *unit;

               break;

        case 75:

               *unit = *unit - 1;

               if (*unit < 1) //최소 1

                       *unit = 1;

               break;

        case 77:

               *unit = *unit + 1;

               break;

        case 80:

               *num = *num - *unit;

               if (*num < 100) //최소 100

                       *num = 100;

               break;

        default:

               return;

        }

}
