#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
/*
 * author chenxiao
 * data 2018/12/03
 * 读取文件 并播放音乐
 */
char read_file(FILE *fp)//fp 为打开的可读文件的指针
{
    char buf[100]; //定义一个足够大的buf，具体空间依实际应用
    int ret, i=0;

    while(1)
    {
        ret = fgetc(fp);

        if(ret!=' '){

           // startsongs(ret);   //调用播放函数
            buf[i]=ret;
           //play(ret);
            i++;
        }

        if(ret == 'p')break;//到文件结尾退出。
    }
     playfilemusic(buf,i);
    printf("播放结束！\n");
    system("pause");
    fclose(fp);

    return buf;
}
char read_musiclist(FILE *fp,char name[50])//fp 为打开的可读文件的指针   name 为用户名，其为用户自己目录
{
   char str[100][100]; //定义一个足够大的buf，具体空间依实际应用

     int i;
     if ( fp==NULL )
    {
        printf("open file error\n");
         system("pause");
        return -1;
    }
    for( i=0;i<100;i++ ) //循环读取，控制不超过100个
    {
        if ( fscanf(fp, "%20s", str[i] )!= 1 ) //控制每个单词不超过20个
            break;
    }
    fclose(fp);
    int j;
    for( j=0;j<i;j++ ) //反向输出各单词
        printf( "\t\t\t\t\t%d、%s\n", j+1,str[j] ) ;
   int num1;

  loop: printf("请输入你的选择:（0退出）");
   scanf("%d",&num1);
   //printf("%d",num1);
   if(num1==0){
       printf("\n继续退出?(Y/N) 进入管理歌单？(M)");
        if(getch()=='Y'){ system("cls");
        return ;}
             else if(getch()=='N'){
                     printf("\n");
                    return '1';}else{
                        updatalist(name,str,i);
                        system("cls");
                        return ;
                        } ;
      //  system("pause");

   }

   char *url =  str[num1-1];

   char dirurl[50] = "./music/";
   strcat(dirurl,name);
   char b[5]="/";
   strcat(dirurl,b);
   // printf("%s",url);

   strcat(dirurl,url);

  // printf("%s",dirurl);

  //  printf("%s",str[0]);
   fp=fopen(dirurl,"r");
   if(fp == NULL)
     {
     perror("fail to read");

     }
   read_file(fp);
  //SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0x0b);
      system("cls");
      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0x0b);
 // goto loop;

    return '1';
}

void updatalist(char name[50],char str[100][100],int i)
{

    system("cls");
    printf("\n");
    printf("\t\t\t\t     ╪╪╪╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪╪╪       \n");
    printf("\t\t\t\t╔═══╧╧          管理我的音乐          ╧╧═══╗\n");
    int j;
    for( j=0;j<i;j++ ) //反向输出各单词
        printf( "\t\t\t\t\t%d、%s\n", j+1,str[j] ) ;

    //==========================上面为显示========================
     int choose;
     printf("请输入你要删除的歌曲编号:(0退出)");
     scanf("%d",&choose);
     if(choose==0){return;}
    // str[choose]="\0";
   //printf("删除的%d\n",choose-1);
    printf("删除的%s",str[choose-1]);
    char rename[50];      //记录删除歌曲的名字
    strcpy(rename,str[choose-1]);
    strcpy(str[choose-1],"");
    //i--;
     printf("删除歌曲成功");

     FILE *fp;
     char txt[10] =".txt";
     char namelist [50];
     strcpy(namelist,name);
     strcat(namelist,txt);
  //歌单写入
   char dirs[50] = "./musiclist/";
   strcat(dirs,namelist);
   printf("删除歌曲成功");
  // system("pause");

   fp = fopen(dirs,"w");
   if(fp==NULL)return 0;
   for( j=0;j<i;j++ ){
    if(str[j]!=NULL)
    {
       fprintf(fp,"%s\n"," ");
       fprintf(fp,"%s",str[j]);
    }
    }
  fclose(fp);

   char dirurl[100] = "./music/";
   strcat(dirurl,name);
   char b[5]="/";
   strcat(dirurl,b);
   strcat(dirurl,rename);
   printf("%s",dirurl);

   if (!remove(dirurl))
    printf("Removed %s.\n",dirurl); //删除成功
   else
   perror("Remove");//打印错误信息

   system("pause");

}
