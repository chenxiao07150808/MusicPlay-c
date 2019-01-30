#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <direct.h>
void registers(){
    system("cls");
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);    //设置颜色
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
        printf("\t\t\t\t     ╪╪╪╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪╪╪       \n");
        printf("\t\t\t\t╔═══╧╧          用户注册          ╧╧═══╗\n");
        printf("请输入用户名:");
        scanf("%s",&name);
        FILE *fp1=fopen("users.txt","r");/*以写模式("w")打开文件user.txt,如果不存在,会自动创建*/

    /*
	*判断账户是否存在
	*/
	while(!feof(fp1))
	{
		fscanf(fp1,"%s",str);
		if(strcmp(str,name)==0)
		{
			 printf("\n\t该用户名已存在");
             fclose(fp1);
             printf("\n\t继续注册?(Y/N)");
             if(getch()=='Y'){ system("cls"); return registers();}
             else return ;

		}else{
          fscanf(fp1,"%s",str);
		}

	}
          /*确认两次密码输入是否一致*/
        printf("\n密  码:");
       // scanf("%s",&password);
       j=0;
        while(1)//循环读单个字符
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
          printf("\n确认密码:");
         i=0;
        while(1)//循环读单个字符
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
        printf("\n\t\t两次密码不一致,请重新输入");
    }while(strcmp(password,temp)!=0);
     FILE *fp;
     fp=fopen("users.txt","a");
      if(fp==NULL)
       {
          printf("\n\t注册失败\n");
          system("pause");
          exit(0);
       }
       else
      {
        system("cls");

        fprintf(fp,"\n%s\t",name);
        fprintf(fp,"%s",password);
        fclose(fp);
        printf("\n\t注册成功");
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


        _mkdir(newdir);   //创建文件夹

                   //用户信息写入函数，底下给出

       // denglu();             //这里跳转到登陆模块
      }
    fclose(fp);

}
