#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
//��ʾ�˵�
char musicShowMenu()
{

   system("cls");
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
    printf("\n");
      printf("\t\t\t\t     �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n       \n");
    printf("\t\t\t\t�X�T�T�T�k�k          C���Բ�����       �k�k�T�T�T�[\n");
    printf("\t\t\t\t�U����������ñ������ʽ��������                  �U\n");
    printf("\t\t\t\t�U���ü��±��༭���ף�Ȼ��ͨ�������ļ�����������  �U\n");
    printf("\t\t\t\t�U�������ļ������Դ���Ҳ���Բο����˵�            �U\n");
    printf("\t\t\t\t�U��1.��ʾ�����б�                                �U\n");
    printf("\t\t\t\t�U��2.ģ�����                                    �U\n");
    printf("\t\t\t\t�U��3.��¼ע��                                    �U\n");
    printf("\t\t\t\t�U��4.�򿪱�������                                �U\n");
    printf("\t\t\t\t�U��5. �˳���¼                                   �U\n");
    printf("\t\t\t\t�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
    printf("��ѡ��\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
    return getch();
}
