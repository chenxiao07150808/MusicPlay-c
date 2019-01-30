   #include <stdio.h>
   #include <stdlib.h>
   #include <string.h>
   #include <conio.h>
   #include <windows.h>

    void piano(char name[20]){
    int num =0;    //记录个数
    char a;         //获取输出的请求
    char str[100];   //保存音符
     char ch;

     // char name [20];
    start:system("cls");      //清除屏幕
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);    //设置颜色

     //显示模拟钢琴的菜单
    printf("\n");
    printf("\t\t\t\t     ╪╪╪╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪╪╪       \n");
    printf("\t\t\t\t╔═══╧╧          模拟钢琴          ╧╧═══╗\n");
    printf("\t\t\t\t║※本程序采用编码的形式播放音乐                  ║\n");
    printf("\t\t\t\t║※  高音: --------------------------------------║\n");
    printf("\t\t\t\t║※  1     2     3    4    5    6    7           ║\n");
    printf("\t\t\t\t║※ DOH   RAY   MI   FA   SOH  LA   TEE          ║\n");
    printf("\t\t\t\t║※ 半弦音 : ------------------------------------║\n");
    printf("\t\t\t\t║※  q      w    e    r    t    y     u          ║\n");
    printf("\t\t\t\t║※ DOHH  RAYH  MIH  FAH SOHH  LAH   TEEH        ║\n");
    printf("\t\t\t\t║※ 低音 : --------------------------------------║\n");
    printf("\t\t\t\t║※  a      s    d    f    g    h     j          ║\n");
    printf("\t\t\t\t║※ DOHH  RAYH  MIH  FAH SOHH  LAH   TEEH        ║\n");
    printf("\t\t\t\t║※ 节拍 : --------------------------------------║\n");
    printf("\t\t\t\t║※  8      0     -     =      o                 ║\n");
    printf("\t\t\t\t║※ 四拍  两拍   一拍  1/4拍  半拍               ║\n");
    printf("\t\t\t\t║※ p----退出并自动播放                          ║\n");
    printf("\t\t\t\t╚════════════════════════╝\n");
    printf("\t\t\t\t****************************************************\n");
        int tick = 540;    //设置默认节拍
        int own=0;    //保存文件
		  while (1)
		  {
			a = pianoPlay(&tick);
			if (a == 'p')    //退出或者自动播放
				break;

            if(a=='8')        //切换节拍
                tick = 1600;
            if(a=='0')
                tick = 800;
            if(a=='-')
                tick = 400;
            if(a=='=')
                tick =100;

				str[num]=a;      //存储用户输入的编码音符
				num++;            //数组长度自增
				 //newsong(&a);
		    }

                 play(str,num);      //弹奏退出，自动播放。
                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);  //控制屏幕颜色
                 printf("\n播放结束！\n");
             while(1){
                 int choosenum;
                 printf("--------------------------------------------------------------------------\n");
                 printf("|1、需要重新播放 2、保存为我的音乐文件 3、exit 4、返回上一级 5、编辑音谱 |\n");
                 printf("--------------------------------------------------------------------------\n");
                 printf("请输入你的选择，回车键执行!");
                 scanf("%d",&choosenum);
                 switch(choosenum)
                 {
                case 1:
                    play(str,num);   //songs.c
                    break;
                case 2:
                    printf("请输入保存的文件名");
                    char filename[50];
                    scanf("%s",&filename);
                  // name =strcpy(name,user1->username);
                    own= createmusic(name,str,filename);
                    if(own==1){
                        printf("保存成功,请在我的音乐中查看。");
                        system("pause");
                    }else{
                        printf("保存失败");
                        system("pause");
                    }
                    break;
                case 3:
                    choosenum =-1;     //跳出钢琴模式
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
                    break;
                case 4:

                   num =0;
                   goto start;        //返回钢琴弹奏
                   break;
                case 5:
                  updatemusic(str,num);
                  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);  //控制屏幕颜色
                   printf("\n0、返回上一层 1、修改音谱 2、删除音谱\n");
                     int choose;
                     scanf("%d",&choose);
                     int numusic;
                     char ch;
                     char ch2='/0';
                     if(choose==1){
                     printf("\n请输入编号！");
                     scanf("%d",&numusic);
                     printf("请输入修改的音谱");
                     ch = getch();
                    printf("%c\n ",ch);
                    // strcpy(str[numusic],temp);
                    str[numusic] = ch;
                    printf("修改成功\n");
                        system("pause");
                    updatemusic(str,num);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);  //控制屏幕颜色
                    printf("\n");
                     }else if(choose==2)
                     {

                           printf("\n请输入需要删除音符的编号！");
                           scanf("%d",&numusic);
                           str[numusic] = ch2;
                            printf("删除成功\n");
                            system("pause");
                            updatemusic(str,num);
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);  //控制屏幕颜色
                            printf("\n");
                     }else{

                        system("pause");
                     }




                    break;
                default:
                    break;
                 }
                 if(choosenum==-1)break;
		    }

		    num =0;       //装音符数组下标置零  （数组重新赋值后自动覆盖之前的保存的）
      }
