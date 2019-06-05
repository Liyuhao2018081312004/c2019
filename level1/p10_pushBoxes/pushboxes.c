#include <stdio.h>

#include <conio.h>


int map[7][10] =
{

    { 0, 0, 0, 1, 1, 1, 1, 1, 1, 0 },

    { 0, 1, 1, 1, 0, 0, 0, 0, 1, 0 },

    { 1, 1, 3, 0, 4, 1, 1, 0, 1, 1 },

    { 1, 3, 3, 4, 0, 4, 0, 0, 0, 1 },

    { 1, 3, 3, 0, 4, 0, 4, 0, 1, 1 },

    { 1, 1, 1, 1, 1, 1, 0, 5, 1, 0 },

    { 0, 0, 0, 0, 0, 1, 1, 1, 1, 0 }
};

void DrawMap()

{


    for (int i = 0; i < 7; i++)

    {

        for (int j = 0; j < 10; j++)

        {

            switch (map[i][j])

            {

            case 0:

                printf("  ");

                break;

            case 1:

                printf("¡ö");

                break;

            case 3:

                printf("¡î");

                break;

            case 4:

                printf("¡õ");

                break;

            case 5:

                printf("¡ø");

                break;

            case 7:

                printf("¡ï");

                break;

            case 8:

                printf("¡ø");

                break;

            }

        }

        printf("\n");

    }

}

void PlayGame()

{

    int row, col;

    for (int i = 0; i < 7; i++)

    {

        for (int j = 0; j < 10; j++)

        {

            if (map[i][j] == 5||map[i][j] == 8)

            {

                row = i;

                col = j;

            }

        }

    }

    printf("(%d,%d)\n", row, col);

    char input;

    input = getch();


    switch (input)

    {

    case 'w':

        if (map[row - 1][col] == 0||map[row-1][col]==3)

        {

            map[row][col] -= 5;

            map[row - 1][col] += 5;

        }

        else if (map[row - 1][col] == 4 || map[row - 1][col] == 7)

        {

            if (map[row - 2][col] == 0 || map[row - 2][col] == 3)

            {

                map[row - 2][col] += 4;

                map[row - 1][col] += 1;

                map[row][col] -= 5;

            }

        }

        break;

    case 's':
        if (map[row + 1][col] == 0 || map[row + 1][col] == 3)

        {

            map[row][col] -= 5;

            map[row + 1][col] += 5;

        }

        else if (map[row + 1][col] == 4 || map[row + 1][col] == 7)

        {

            if (map[row + 2][col] == 0 || map[row + 2][col] == 3)

            {

                map[row + 2][col] += 4;

                map[row + 1][col] += 1;

                map[row][col] -= 5;

            }

        }

        break;

    case 'a':

        if (map[row][col - 1] == 0 || map[row][col - 1] == 3)

        {

            map[row][col] -= 5;

            map[row][col - 1] += 5;

        }

        else if (map[row][col - 1] == 4 || map[row][col - 1] == 7)

        {

            if (map[row][col - 2] == 0 || map[row][col - 2] == 3)

            {

                map[row][col - 2] += 4;

                map[row][col - 1] += 1;

                map[row][col] -= 5;

            }

        }

        break;

    case 'd':

        if (map[row][col + 1] == 0 || map[row][col + 1] == 3)

        {

            map[row][col] -= 5;

            map[row][col + 1] += 5;

        }

        else if (map[row][col + 1] == 4 || map[row][col + 1] == 7)

        {

            if (map[row][col + 2] == 0 || map[row][col + 2] == 3)

            {

                map[row][col + 2] += 4;

                map[row][col + 1] += 1;

                map[row][col] -= 5;

            }

        }

        break;

        break;

    }

}

int main()

{

    while (1)

    {

        system("cls");

        DrawMap();

        PlayGame();

    }

    return 0;

}
