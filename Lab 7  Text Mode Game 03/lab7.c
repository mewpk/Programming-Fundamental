#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


int point = 0;


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
void randomStar()
{
    srand(time(NULL));
    for (int i = 1; i <= 20; i++)
    {
        gotoxy(rand() % 70 + 10, -rand() % 4 + 2);
        printf("%c", '*');
    }
}
char cursor(int x, int y)
{
    HANDLE hStd = GetStdHandle(STD_OUTPUT_HANDLE);
    char buf[2];
    COORD c = {x, y};
    DWORD num_read;
    if (!ReadConsoleOutputCharacter(hStd, (LPTSTR)buf, 1, c, (LPDWORD)&num_read))
        return '\0';
    else
        return buf[0];
}
void score(){
    gotoxy(100,0);
    printf(" ");
    gotoxy(100,0);
    printf("%d",point);
}
void setup(int x, int y)
{
    system("cls");
    setcursor(0);
    setcolor(2, 4);

    system("CLS");
    draw_ship(x, y);
    randomStar();
}

int main()
{

    char ch = ' ', vac = ' ';
    int x = 38, y = 20;
    int bullet = 0, bx, by, ammo = 5;
    setup(x, y);
    
    score();
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
            if (ch == ' ' && bullet == 0 && ammo > 0)
            {
                vac = ' ';
                bullet = 1;

                bx = x + 3;
                by = y - 1;

                Beep(700, 100);
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
        if (vac == 's' && x > 0 && x < 80)
        {
            draw_ship(x, y);
        }
        if (bullet == 1)
        {
            clear_bullet(bx, by);
            if (by == 0)
            {

                bullet = 0;
                // ammo -= 1;
            }
            else if (cursor(bx, by - 1) == '*')
            {
                gotoxy(bx, by - 1);
                printf(" ");
                Beep(700, 100);
                bullet = 0;
                gotoxy(rand() % 70 + 10, -rand() % 4 + 2);
                printf("%c", '*');
                point++;
                score();
                // ammo -= 1;
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