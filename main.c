#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
typedef struct User{
    char username[20];
    char password[20];
};
int inout(struct User * user1)
{
    printf("%s",user1->username);
    printf("%s",user1->password);
}
 struct User user1;
int main()
{

  char choice;
  char isLogin;
  int result =-1;
    while(1)
    {
        choice = musicShowMenu();    //��ʾ�˵�ҳ

        switch(choice)
        {
        case '1':
         //  plauMusicMenu();     //���ֲ����б�

         if(result!=-1){

             createNewsong(&user1);
         }else{
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x04);
             printf("���ȵ�¼���ſ��Կ��Լ��������б�Ŷ��");
             system("pause");

                 char a = startApp();
            if(a=='1')
             {
             result= Login(&user1);
              if(result==1)
              {
                createNewsong(&user1);
              }
            }else if(a=='2'){

            registers();
           }




         }

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
            break;
        case '4':
           MyMusic();      //���ű������� MyMusic.c
            break;
        case '3':
        if(result!=-1){
           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x04);
             printf("�Ѿ���¼������Ҫ�ظ���¼��\n");
             system("pause");
              system("cls");
         }else{

           char a = startApp();
            if(a=='1')
             {
             result =Login(&user1);

            }else if(a=='2'){

            registers();
           }
         }
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
            break;
        case '2':
      //ģ�����ģʽ
         if(result==1){
             piano(&user1);
         }else{
              SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x04);
             printf("���ȵ�¼������ʹ�ø���Ŷ��");
             system("pause");
               char a = startApp();
            if(a=='1')
             {
             result= Login(&user1);
              if(result==1)
              {
               piano(user1.username);
              }
            }else if(a=='2'){

            registers();
           }

         }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		  break;
        case '5':
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x04);
        printf("�����˳�?(Y/N)\n");
        if(getch()=='Y'){
             printf("�˳���¼�ɹ���");
             system("pause");
             result =-1;
               }
             else {
                 printf("\n");
                  system("pause");
                    } ;

            break;
        default:
            return;
        }



    }


    return 0;
}


void createNewsong(struct User *user1){
      char str = '1';
     while(str=='1'){

     system("cls");
      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0x00);
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0x0b);
     //printf("%s",user1->username);
     //��ʾģ����ٵĲ˵�
    printf("\n");
    printf("\t\t\t\t     �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n       \n");
    printf("\t\t\t\t�X�T�T�T�k�k          �ҵ�����          �k�k�T�T�T�[\n");
     FILE *fp;
     char txt[10]=".txt";
     char listname[50] ;
     strcpy(listname,user1->username);
     char dir[50] = "./musiclist/";

     strcat(listname,txt);
      strcat(dir,listname);
     // printf("%s",dir);
     fp=fopen(dir,"a+");
     if(fp==NULL){
        printf("�б�Ϊ�գ�");
        system("pause");
     }
     int num ;

        str = read_musiclist(fp,user1->username);   //read_songs.c

     //fp.close;
     fclose(fp);
     }


}
