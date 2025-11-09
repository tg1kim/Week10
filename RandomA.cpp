#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#pragma warning(disable: 4326 4996 6031)

int main(void)
{
        srand(time(NULL));		// ¾¾¾Ñ
        for (int i = 0; i < 5; i++)
                printf("%d\n", rand());
}
