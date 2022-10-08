#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>

void setcolor(int fg, int bg)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, bg * 16 + fg);
}

void setcursor(bool visible)
{
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO lpCursor;
    lpCursor.bVisible = visible;
    lpCursor.dwSize = 20;
    SetConsoleCursorInfo(console, &lpCursor);
}
void gotoxy(int x, int y)
{
    COORD c = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void erase_ship(int x, int y)
{
    printf("       ");
}

void draw_ship(int x, int y)
{
    erase_ship(x, y);
    gotoxy(x, y);
    printf(" <-0-> ");
}
void draw_bullet(int x, int y)
{
    gotoxy(x, y);
    printf("^");
}
void clear_bullet(int x, int y)
{
    gotoxy(x, y);
    printf(" ");
}

int main()
{
    system("cls");
    setcursor(0);
    setcolor(2, 4);
    char ch = ' ', vac = ' ';
    int x = 38, y = 20;
    int bullet[5][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, state = 0, ammo = 5; // {x,y,state}
    draw_ship(x, y);
    system("CLS");
    do
    {

        if (_kbhit())
        {

            ch = _getch();

            if (ch == 'a')
            {
                vac = 'a';
            }
            if (ch == 'd')
            {
                vac = 'd';
            }
            if (ch == 's')
            {
                vac = 's';
            }
            if (ch == ' ' && ammo > 0)
            {
                vac = ' ';

                bullet[state][2] = 1;
                bullet[state][0] = x + 3;
                bullet[state][1] = y - 1;
                state++;
                state = state % 5;
                ammo--;
            }
        }

        fflush(stdin);

        if (vac == 'a' && x > 0)
        {
            draw_ship(x -= 1, y);
        }

        if (vac == 'd' && x < 80)
        {
            draw_ship(x += 1, y);
        }
        if (vac == 's' && x > 0 && x < 80)
        {
            draw_ship(x, y);
        }

        for (size_t i = 0; i < 5; i++)
        {
            if (bullet[i][2] == 1)
            {
                clear_bullet(bullet[i][0], bullet[i][1]);
                if (bullet[i][1] == 2)
                {
                    bullet[i][2] = 0;
                    ammo++;
                }
                else
                {
                    draw_bullet(bullet[i][0], --bullet[i][1]);
                }
            }
        }

        Sleep(100);
    } while (ch != 'x');
    return 0;
}