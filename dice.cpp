#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 

int main(void)

{

        int arr[1000]; //ũ�Ⱑ 1000�� �迭

        int frequency[6] = { 0, }; //���� �迭

        srand((unsigned)time(NULL));

        for (int i = 0; i < 1000; i++)

        {

               arr[i] = rand() % 6 + 1;

        }

        for (int i = 0; i < 1000; i++)

        {

               switch (arr[i])

               {

               case 1:

                       frequency[0]++;

                       break;

               case 2:

                       frequency[1]++;

                       break;

               case 3:

                       frequency[2]++;

                       break;

               case 4:

                       frequency[3]++;

                       break;

               case 5:

                       frequency[4]++;

                       break;

               case 6:

                       frequency[5]++;

                       break;

               }

        }

        for (int i = 0; i < 6; i++)

        {

               //printf("%d\n", frequency[i]);

               printf("�ֻ����� ���� �� %d ������ ���� Ȯ����:%g\n", i, (double)(frequency[i] / 1000.0));

        }

        return 0;

}
