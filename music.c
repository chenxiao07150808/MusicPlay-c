
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<windows.h>
#define turn 54

#define A 1600
#define B 800
#define C 400 //Ò»ÅÄ
#define D 200
#define E 100
#define F 50
//µÍÒô
#define L1 262
#define L2 294
#define L3 330
#define L4 349
#define L5 392
#define L6 440
#define L7 493
//¸ßÒô
#define N1 532
#define N2 588
#define N3 660
#define N4 698
#define N5 784
#define N6 880
#define N7 988
//°ëÏÒÒô
#define H1 1046
#define H2 1175
#define H3 1319
#define H4 1397
#define H5 1568
#define H6 1760
#define H7 1976



//#define TICK 450  //½ÚÅÄ
#define DOH 523
#define RAY 587
#define MI 659
#define FA  698
#define SOH  784
#define LA   880
#define TEE   980
#define DOHH  1060
#define RAYH  1175
#define MIH   1318
#define FAH  1397
#define SOHH  1568
#define LAH   1760
#define TEEH  1976


int TICK =450;
//×Ô¶¯²¥·ÅÒôÀÖ
void play(char num[],int cos)
{
    int i;
    for (i = 0; i <cos; i++)
    {
             // Beep(num[i], 450);
    switch (num[i])
	{
	case '1':Beep(DOH, TICK);  break;
	case '2':Beep(RAY, TICK);  break;
	case '3':Beep(MI, TICK);  break;
	case '4':Beep(FA, TICK);  break;
	case '5':Beep(SOH, TICK);  break;
	case '6':Beep(LA, TICK);  break;
	case '7':Beep(TEE, TICK);  break;
	case 'q':Beep(DOHH, TICK); break;
	case 'w':Beep(RAYH, TICK); break;
	case 'e':Beep(MIH, TICK); break;
	case 'r':Beep(FAH, TICK);break;
	case 't':Beep(SOHH, TICK); break;
	case 'y':Beep(LAH, TICK);break;
	case 'u':Beep(TEEH, TICK);break;
	case 'a':Beep(L1, TICK);  break;
	case 's':Beep(L2, TICK); break;
	case 'd':Beep(L3, TICK); break;
	case 'f':Beep(L4, TICK);break;
	case 'g':Beep(L5, TICK);break;
	case 'h':Beep(L6, TICK);break;
	case 'j':Beep(L7, TICK);break;
	case '8': TICK = 1600;break;
	case '9': TICK = 800;break;
	case '0': TICK = C;break;
	case '-':TICK = D;break;
	case '=':TICK = E;break;
	case '\n':break;
	default :break;
	}

    }
    TICK = 450;
}

void playfilemusic(char num[],int cos)
{
    int i;
    for (i = 0; i <cos; i++)
    {
             // Beep(num[i], 450);
    switch (num[i])
	{
	case '1':Beep(DOH, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30); printf("DOH "); break;
	case '2':Beep(RAY, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 60); printf("RAY "); break;
	case '3':Beep(MI, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 90); printf("MI "); break;
	case '4':Beep(FA, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 120); printf("FA "); break;
	case '5':Beep(SOH, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 150); printf("SOH "); break;
	case '6':Beep(LA, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 180); printf("LA "); break;
	case '7':Beep(TEE, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 210); printf("TEE "); break;
	case 'q':Beep(DOHH, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30); printf("DOHH "); break;
	case 'w':Beep(RAYH, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 60); printf("RAYH "); break;
	case 'e':Beep(MIH, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 90); printf("MIH "); break;
	case 'r':Beep(FAH, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 120); printf("FA "); break;
	case 't':Beep(SOHH, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 150); printf("SOH "); break;
	case 'y':Beep(LAH, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 180); printf("LA "); break;
	case 'u':Beep(TEEH, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 210); printf("TEE "); break;
	case 'a':Beep(L1, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30); printf("DOHHH "); break;
	case 's':Beep(L2, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 60); printf("RAYHH "); break;
	case 'd':Beep(L3, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 90); printf("MIHH "); break;
	case 'f':Beep(L4, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 120); printf("FAHH "); break;
	case 'g':Beep(L5, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 150); printf("SOHHH "); break;
	case 'h':Beep(L6, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 180); printf("LAHH "); break;
	case 'j':Beep(L7, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 210); printf("TEEHH "); break;
	case '8': TICK = 1600;break;
	case '9': TICK = 800;break;
	case '0': TICK = C;break;
	case '-':TICK = D;break;
	case '=':TICK = E;break;
	case '\n':break;
	default :break;
	}

    }
    TICK = 450;
}
