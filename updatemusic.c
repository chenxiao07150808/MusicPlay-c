

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<windows.h>

void updatemusic(char str[100],int num)
{

   printf("请输入音谱后面的编号进行修改或删除\n");
   int i;
    for (i = 0; i <num; i++)
    {
             // Beep(num[i], 450);
    switch (str[i])
	{
	case '1': SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30); printf("DOH %d",i); break;
	case '2': SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 60); printf("RAY %d",i); break;
	case '3': SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 90); printf("MI %d",i); break;
	case '4': SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 120); printf("FA %d",i); break;
	case '5':SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 150); printf("SOH %d",i); break;
	case '6': SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 180); printf("LA %d",i); break;
	case '7':SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 210); printf("TEE %d",i); break;
	case 'q': SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30); printf("DOHH %d",i); break;
	case 'w':SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 60); printf("RAYH %d",i); break;
	case 'e':SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 90); printf("MIH %d",i); break;
	case 'r':SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 120); printf("FA %d",i); break;
	case 't':SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 150); printf("SOH %d",i); break;
	case 'y': SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 180); printf("LA %d",i); break;
	case 'u':SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 210); printf("TEE %d",i); break;
	case 'a': SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30); printf("DOHHH %d",i); break;
	case 's':SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 60); printf("RAYHH %d",i); break;
	case 'd':SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 90); printf("MIHH %d",i); break;
	case 'f':SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 120); printf("FAHH %d",i); break;
	case 'g':SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 150); printf("SOHHH %d",i); break;
	case 'h':SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 180); printf("LAHH %d",i); break;
	case 'j':SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 210); printf("TEEHH %d",i); break;

	case '8':  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30); printf("8 "); break;
	case '9': SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 130); printf("9 "); break;
	case '0':SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 130); printf("0 ");break;
	case '-':SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 130); printf("- ");break;
	case '=':SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 130); printf("= ");break;
	case '\n':break;
	default :break;
	}

    }





}
