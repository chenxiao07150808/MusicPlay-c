#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
int createmusic(char name[50],char str[100],char filename[50]){

  FILE *fp;
   char txt[10] =".txt";
   char listname[50] ;
   strcpy(listname,name);
  //歌单写入
   char dirs[50] = "./musiclist/";
   strcat(listname,txt);
   strcat(dirs,listname);
   //printf("%s",dirs);
   system("pause");
  fp = fopen(dirs,"a+");
  if(fp==NULL)return 0;

  fprintf(fp,"%s\n"," ");
  fprintf(fp,"%s",filename);
  fclose(fp);

   //乐谱的写入
  FILE *fp2;
  char dirname[50] = "./music/";
  strcat(dirname,name);
  char a [5]="/";
  strcat(dirname,a);
  strcat(dirname,filename);
  fp2 = fopen(dirname,"w+");
  if(fp2==NULL)return 0;

  fprintf(fp2,"%s",str);
  fprintf(fp2,"%s","p");
  fclose(fp2);
  return 1;

}
