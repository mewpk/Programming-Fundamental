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
    int x = 38, y = 20, bullet = 0, bx, by, ammo = 5;
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
            if (ch == ' ' && bullet != 1 && ammo > 0)
            {
                vac = ' ';
                bullet = 1;
                bx = x + 3;
                by = y - 1;
            }

            fflush(stdin);
        }
        if (vac == 'a' && x > 0)
        {
            draw_ship(x -= 1, y);
        }
        if (vac == 'd' && x < 80)
        {
            draw_ship(x += 1, y);
        }
        if (bullet == 1)
        {
            clear_bullet(bx, by);
            if (by == 2)
            {
                bullet = 0;
                ammo -= 1;
            }
            else
            {
                draw_bullet(bx, --by);
            }
        }
        Sleep(100);
    } while (ch != 'x');
    return 0;
}