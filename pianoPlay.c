
#include<windows.h>
#define turn 54

#define A 1600 //四拍
#define B 800  //两拍
#define C 400  //一拍
#define D 200   //半拍
#define E 100   //1/4拍
#define F 50    //1/8拍

//低音
#define L1 262
#define L2 294
#define L3 330
#define L4 349
#define L5 392
#define L6 440
#define L7 493

//#define TICK 450  //节拍
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
//弹奏的时候调用
char pianoPlay(int *tick) //发声并设置颜色
{

	char a = getch();
	int TICK = *tick;

	switch (a)
	{
	case '1':Beep(DOH, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30); printf("DOH "); return a;break;
	case '2':Beep(RAY, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 60); printf("RAY ");return a; break;
	case '3':Beep(MI, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 90); printf("MI "); return a;break;
	case '4':Beep(FA, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 120); printf("FA ");return a; break;
	case '5':Beep(SOH, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 150); printf("SOH ");return a; break;
	case '6':Beep(LA, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 180); printf("LA ");return a; break;
	case '7':Beep(TEE, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 210); printf("TEE "); return a;break;
	case 'q':Beep(DOHH, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30); printf("DOHH ");return a; break;
	case 'w':Beep(RAYH, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 60); printf("RAYH "); return a;break;
	case 'e':Beep(MIH, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 90); printf("MIH "); return a;break;
	case 'r':Beep(FAH, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 120); printf("FA ");return a; break;
	case 't':Beep(SOHH, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 150); printf("SOH ");return a; break;
	case 'y':Beep(LAH, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 180); printf("LA "); return a;break;
	case 'u':Beep(TEEH, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 210); printf("TEE "); return a;break;
	case 'a':Beep(L1, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30); printf("DOHHH ");return a; break;
	case 's':Beep(L2, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 60); printf("RAYHH ");return a; break;
	case 'd':Beep(L3, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 90); printf("MIHH ");return a; break;
	case 'f':Beep(L4, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 120); printf("FAHH ");return a; break;
	case 'g':Beep(L5, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 150); printf("SOHHH ");return a; break;
	case 'h':Beep(L6, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 180); printf("LAHH "); return a;break;
	case 'j':Beep(L7, TICK); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 210); printf("TEEHH ");return a; break;
	case '8': return a; break;
	case '9':return a; break;
	case '0': return a; break;
	case '-': return a; break;
	case '=':return a; break;
	case '\n':return a;break;
	case 'p' :return a;break;
	default :break;
	}


	//return '';
}
