#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
typedef struct User{
    char username[20];
    char password[20];
};
int Login(struct User * user1)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x09);    //������ɫ
    char tmpname[20],tmppwd[20];
    char c;
    int i=0,j;   //i��¼�������
    while(i<3)
    {
      system("cls");
        printf("\n");
        printf("\t\t\t\t     �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n       \n");
        printf("\t\t\t\t�X�T�T�T�k�k          �û���¼          �k�k�T�T�T�[\n");
      printf("�������û�����\n");
      scanf("%s",&(user1->username));
      printf("���������룺\n");
      j=0;
      while(1)//ѭ���������ַ�
      {
         c=getch();
         if(c=='\r')
         {
           tmppwd[j]=0;
           break;
         }
       printf("*");
       tmppwd[j]=c;
        j++;
      }
      printf("\n");
       strcpy(user1->password,tmppwd);   //��ֵ
      if((recog_pwd(user1->username,user1->password))==1)     //��֤��¼
	{
		printf("��¼�ɹ���");
        system("pause");
		return 1;
	}else{
         i++;
         printf("\n�û��������������!����%d�λ��ᡣ\n",3-i);
         system("pause");
         if(i==3)
         return 0;
       }
    }
}





int recog_pwd(char name[20],char pwd[20])
{
	int s;
    FILE *fp1;
    char str[20];
	/*
	*��ֻ����ʽ���ļ�
	*read.txt��ʽΪ ���û��� ���� ���м���һ�ո�����ѭ��
	*/
    if ((fp1=fopen("users.txt","rb"))==NULL)
    {
        printf("cannot open file\n");
        return 0;
     }
	/*
	*�ж��˻��Ƿ����
	*/
	while(!feof(fp1))
	{
		fscanf(fp1,"%s",str);
		if(strcmp(str,name)==0)
		{
			printf("Welcome to %s\n",name);  //��ӭҳ
			fscanf(fp1,"%s",str);
			if(strcmp(str,pwd)==0)
			{

				return 1;
			}else
			{
				printf("the pwd :%s is wrong\n",pwd);
				fclose(fp1);
				return 0;
			}

		}
	fscanf(fp1,"%s",str);

	}
	fclose(fp1);
    return 0;

}
