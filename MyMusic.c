#include <windows.h>
#include <stdio.h>
void MyMusic()
{

  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0x04);
  char url[50];
  while(1){
  start:printf("�����뱾�����ֵľ���·��:(q�س��˳�)");
  gets(url);
  //printf("%s",url);

 // int num =0;
  char *str2  = "q";
  char *str1 = url;
  if(strcmp(str1, str2)==0)  //�˳�
  {
      break;
  }
  FILE *fp;
  fp=fopen(url,"r");
  if(fp == NULL)
     {
     perror("fail to read");
    goto start;
    break;
     }
   read_file(fp);   //��ȡ�ļ�

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0x04);
  }
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x01);
}
