#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
//显示菜单
char musicShowMenu()
{

   system("cls");
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
    printf("\n");
      printf("\t\t\t\t     ╪╪╪╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪╪╪       \n");
    printf("\t\t\t\t╔═══╧╧          C语言播放器       ╧╧═══╗\n");
    printf("\t\t\t\t║※本程序采用编码的形式播放音乐                  ║\n");
    printf("\t\t\t\t║※用记事本编辑乐谱，然后通过输入文件名播放音乐  ║\n");
    printf("\t\t\t\t║※乐谱文件可以自创，也可以参考别人的            ║\n");
    printf("\t\t\t\t║※1.显示播放列表                                ║\n");
    printf("\t\t\t\t║※2.模拟钢琴                                    ║\n");
    printf("\t\t\t\t║※3.登录注册                                    ║\n");
    printf("\t\t\t\t║※4.打开本地音乐                                ║\n");
    printf("\t\t\t\t║※5. 退出登录                                   ║\n");
    printf("\t\t\t\t╚════════════════════════╝\n");
    printf("请选择\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
    return getch();
}
