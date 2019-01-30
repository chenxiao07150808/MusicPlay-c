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
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x09);    //设置颜色
    char tmpname[20],tmppwd[20];
    char c;
    int i=0,j;   //i记录输入次数
    while(i<3)
    {
      system("cls");
        printf("\n");
        printf("\t\t\t\t     ╪╪╪╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪╪╪       \n");
        printf("\t\t\t\t╔═══╧╧          用户登录          ╧╧═══╗\n");
      printf("请输入用户名：\n");
      scanf("%s",&(user1->username));
      printf("请输入密码：\n");
      j=0;
      while(1)//循环读单个字符
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
       strcpy(user1->password,tmppwd);   //赋值
      if((recog_pwd(user1->username,user1->password))==1)     //验证登录
	{
		printf("登录成功！");
        system("pause");
		return 1;
	}else{
         i++;
         printf("\n用户名或者密码错误!还有%d次机会。\n",3-i);
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
	*以只读方式打开文件
	*read.txt格式为 ：用户名 密码 （中间有一空格）无限循环
	*/
    if ((fp1=fopen("users.txt","rb"))==NULL)
    {
        printf("cannot open file\n");
        return 0;
     }
	/*
	*判断账户是否存在
	*/
	while(!feof(fp1))
	{
		fscanf(fp1,"%s",str);
		if(strcmp(str,name)==0)
		{
			printf("Welcome to %s\n",name);  //欢迎页
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
