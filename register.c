#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <direct.h>
void registers(){
    system("cls");
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);    //������ɫ
    char name[20];
    char password[20];
    char temp[20];
    char str[20];
   // char tpwd[20],pwd[20];
    char c,d;
    int i,j;
    do
    {
        printf("\n");
        printf("\t\t\t\t     �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n       \n");
        printf("\t\t\t\t�X�T�T�T�k�k          �û�ע��          �k�k�T�T�T�[\n");
        printf("�������û���:");
        scanf("%s",&name);
        FILE *fp1=fopen("users.txt","r");/*��дģʽ("w")���ļ�user.txt,���������,���Զ�����*/

    /*
	*�ж��˻��Ƿ����
	*/
	while(!feof(fp1))
	{
		fscanf(fp1,"%s",str);
		if(strcmp(str,name)==0)
		{
			 printf("\n\t���û����Ѵ���");
             fclose(fp1);
             printf("\n\t����ע��?(Y/N)");
             if(getch()=='Y'){ system("cls"); return registers();}
             else return ;

		}else{
          fscanf(fp1,"%s",str);
		}

	}
          /*ȷ���������������Ƿ�һ��*/
        printf("\n��  ��:");
       // scanf("%s",&password);
       j=0;
        while(1)//ѭ���������ַ�
        {
         c=getch();
         if(c=='\r')
         {
           password[j]=0;
           break;
         }
         printf("*");
          password[j]=c;
        j++;
        }
          printf("\nȷ������:");
         i=0;
        while(1)//ѭ���������ַ�
        {
         d=getch();
         if(d=='\r')
         {
           temp[i]=0;
           break;
         }
         printf("*");
          temp[i]=d;
           i++;
        }


       // scanf("%s",&temp);
        if(strcmp(password,temp)!=0)
        printf("\n\t\t�������벻һ��,����������");
    }while(strcmp(password,temp)!=0);
     FILE *fp;
     fp=fopen("users.txt","a");
      if(fp==NULL)
       {
          printf("\n\tע��ʧ��\n");
          system("pause");
          exit(0);
       }
       else
      {
        system("cls");

        fprintf(fp,"\n%s\t",name);
        fprintf(fp,"%s",password);
        fclose(fp);
        printf("\n\tע��ɹ�");
        system("pause");
         char newdir[50] = "./music/";
         strcat(newdir,name);
         char dirname[50] = "./musiclist/";
         char txt[10] = ".txt";
        strcat(name,txt);
        strcat(dirname,name);
         fp =fopen(dirname,"a+");
         fprintf(fp,"%s"," ");
         fclose(fp);


        _mkdir(newdir);   //�����ļ���

                   //�û���Ϣд�뺯�������¸���

       // denglu();             //������ת����½ģ��
      }
    fclose(fp);

}
