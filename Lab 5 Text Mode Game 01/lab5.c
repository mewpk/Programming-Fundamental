#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

void draw_ship(int x, int y)
{   
    
    COORD c = { x, y };
    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf(" <-0-> ");
    
}
int main()
{
    system("cls");
    char ch = ' ';
    int x = 38, y = 20;
    draw_ship(x, y);
    
    do
    {
        
        if (_kbhit())
        {   
            ch = _getch();
           system("CLS");
            if (ch == 'a' && x > 0)
            {   
                draw_ship(x -= 2, y);
                
            }
            else if (ch == 'w' && y > 0)
            {  
                draw_ship(x, --y);
                
            }
            else if (ch == 's' && y < 30)
            {
                
             
                draw_ship(x, ++y);
              
            }
            else if (ch == 'd' && x < 80)
            {
                draw_ship(x += 2, y);
              
            }
            else {
                draw_ship(x, y);
            }
            fflush(stdin);
        }
        Sleep(100);
    } while (ch != 'x');
    return 0;
}