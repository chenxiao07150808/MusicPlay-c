#include <windows.h>
#include <stdio.h>
void MyMusic()
{

  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0x04);
  char url[50];
  while(1){
  start:printf("请输入本地音乐的绝对路径:(q回车退出)");
  gets(url);
  //printf("%s",url);

 // int num =0;
  char *str2  = "q";
  char *str1 = url;
  if(strcmp(str1, str2)==0)  //退出
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
   read_file(fp);   //读取文件

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0x04);
  }
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x01);
}
