#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
/*
 * author chenxiao
 * data 2018/12/03
 * ��ȡ�ļ� ����������
 */
char read_file(FILE *fp)//fp Ϊ�򿪵Ŀɶ��ļ���ָ��
{
    char buf[100]; //����һ���㹻���buf������ռ���ʵ��Ӧ��
    int ret, i=0;

    while(1)
    {
        ret = fgetc(fp);

        if(ret!=' '){

           // startsongs(ret);   //���ò��ź���
            buf[i]=ret;
           //play(ret);
            i++;
        }

        if(ret == 'p')break;//���ļ���β�˳���
    }
     playfilemusic(buf,i);
    printf("���Ž�����\n");
    system("pause");
    fclose(fp);

    return buf;
}
char read_musiclist(FILE *fp,char name[50])//fp Ϊ�򿪵Ŀɶ��ļ���ָ��   name Ϊ�û�������Ϊ�û��Լ�Ŀ¼
{
   char str[100][100]; //����һ���㹻���buf������ռ���ʵ��Ӧ��

     int i;
     if ( fp==NULL )
    {
        printf("open file error\n");
         system("pause");
        return -1;
    }
    for( i=0;i<100;i++ ) //ѭ����ȡ�����Ʋ�����100��
    {
        if ( fscanf(fp, "%20s", str[i] )!= 1 ) //����ÿ�����ʲ�����20��
            break;
    }
    fclose(fp);
    int j;
    for( j=0;j<i;j++ ) //�������������
        printf( "\t\t\t\t\t%d��%s\n", j+1,str[j] ) ;
   int num1;

  loop: printf("���������ѡ��:��0�˳���");
   scanf("%d",&num1);
   //printf("%d",num1);
   if(num1==0){
       printf("\n�����˳�?(Y/N) �������赥��(M)");
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
    printf("\t\t\t\t     �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n       \n");
    printf("\t\t\t\t�X�T�T�T�k�k          �����ҵ�����          �k�k�T�T�T�[\n");
    int j;
    for( j=0;j<i;j++ ) //�������������
        printf( "\t\t\t\t\t%d��%s\n", j+1,str[j] ) ;

    //==========================����Ϊ��ʾ========================
     int choose;
     printf("��������Ҫɾ���ĸ������:(0�˳�)");
     scanf("%d",&choose);
     if(choose==0){return;}
    // str[choose]="\0";
   //printf("ɾ����%d\n",choose-1);
    printf("ɾ����%s",str[choose-1]);
    char rename[50];      //��¼ɾ������������
    strcpy(rename,str[choose-1]);
    strcpy(str[choose-1],"");
    //i--;
     printf("ɾ�������ɹ�");

     FILE *fp;
     char txt[10] =".txt";
     char namelist [50];
     strcpy(namelist,name);
     strcat(namelist,txt);
  //�赥д��
   char dirs[50] = "./musiclist/";
   strcat(dirs,namelist);
   printf("ɾ�������ɹ�");
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
    printf("Removed %s.\n",dirurl); //ɾ���ɹ�
   else
   perror("Remove");//��ӡ������Ϣ

   system("pause");

}
