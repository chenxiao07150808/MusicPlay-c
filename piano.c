   #include <stdio.h>
   #include <stdlib.h>
   #include <string.h>
   #include <conio.h>
   #include <windows.h>

    void piano(char name[20]){
    int num =0;    //��¼����
    char a;         //��ȡ���������
    char str[100];   //��������
     char ch;

     // char name [20];
    start:system("cls");      //�����Ļ
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);    //������ɫ

     //��ʾģ����ٵĲ˵�
    printf("\n");
    printf("\t\t\t\t     �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n       \n");
    printf("\t\t\t\t�X�T�T�T�k�k          ģ�����          �k�k�T�T�T�[\n");
    printf("\t\t\t\t�U����������ñ������ʽ��������                  �U\n");
    printf("\t\t\t\t�U��  ����: --------------------------------------�U\n");
    printf("\t\t\t\t�U��  1     2     3    4    5    6    7           �U\n");
    printf("\t\t\t\t�U�� DOH   RAY   MI   FA   SOH  LA   TEE          �U\n");
    printf("\t\t\t\t�U�� ������ : ------------------------------------�U\n");
    printf("\t\t\t\t�U��  q      w    e    r    t    y     u          �U\n");
    printf("\t\t\t\t�U�� DOHH  RAYH  MIH  FAH SOHH  LAH   TEEH        �U\n");
    printf("\t\t\t\t�U�� ���� : --------------------------------------�U\n");
    printf("\t\t\t\t�U��  a      s    d    f    g    h     j          �U\n");
    printf("\t\t\t\t�U�� DOHH  RAYH  MIH  FAH SOHH  LAH   TEEH        �U\n");
    printf("\t\t\t\t�U�� ���� : --------------------------------------�U\n");
    printf("\t\t\t\t�U��  8      0     -     =      o                 �U\n");
    printf("\t\t\t\t�U�� ����  ����   һ��  1/4��  ����               �U\n");
    printf("\t\t\t\t�U�� p----�˳����Զ�����                          �U\n");
    printf("\t\t\t\t�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
    printf("\t\t\t\t****************************************************\n");
        int tick = 540;    //����Ĭ�Ͻ���
        int own=0;    //�����ļ�
		  while (1)
		  {
			a = pianoPlay(&tick);
			if (a == 'p')    //�˳������Զ�����
				break;

            if(a=='8')        //�л�����
                tick = 1600;
            if(a=='0')
                tick = 800;
            if(a=='-')
                tick = 400;
            if(a=='=')
                tick =100;

				str[num]=a;      //�洢�û�����ı�������
				num++;            //���鳤������
				 //newsong(&a);
		    }

                 play(str,num);      //�����˳����Զ����š�
                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);  //������Ļ��ɫ
                 printf("\n���Ž�����\n");
             while(1){
                 int choosenum;
                 printf("--------------------------------------------------------------------------\n");
                 printf("|1����Ҫ���²��� 2������Ϊ�ҵ������ļ� 3��exit 4��������һ�� 5���༭���� |\n");
                 printf("--------------------------------------------------------------------------\n");
                 printf("���������ѡ�񣬻س���ִ��!");
                 scanf("%d",&choosenum);
                 switch(choosenum)
                 {
                case 1:
                    play(str,num);   //songs.c
                    break;
                case 2:
                    printf("�����뱣����ļ���");
                    char filename[50];
                    scanf("%s",&filename);
                  // name =strcpy(name,user1->username);
                    own= createmusic(name,str,filename);
                    if(own==1){
                        printf("����ɹ�,�����ҵ������в鿴��");
                        system("pause");
                    }else{
                        printf("����ʧ��");
                        system("pause");
                    }
                    break;
                case 3:
                    choosenum =-1;     //��������ģʽ
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
                    break;
                case 4:

                   num =0;
                   goto start;        //���ظ��ٵ���
                   break;
                case 5:
                  updatemusic(str,num);
                  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);  //������Ļ��ɫ
                   printf("\n0��������һ�� 1���޸����� 2��ɾ������\n");
                     int choose;
                     scanf("%d",&choose);
                     int numusic;
                     char ch;
                     char ch2='/0';
                     if(choose==1){
                     printf("\n�������ţ�");
                     scanf("%d",&numusic);
                     printf("�������޸ĵ�����");
                     ch = getch();
                    printf("%c\n ",ch);
                    // strcpy(str[numusic],temp);
                    str[numusic] = ch;
                    printf("�޸ĳɹ�\n");
                        system("pause");
                    updatemusic(str,num);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);  //������Ļ��ɫ
                    printf("\n");
                     }else if(choose==2)
                     {

                           printf("\n��������Ҫɾ�������ı�ţ�");
                           scanf("%d",&numusic);
                           str[numusic] = ch2;
                            printf("ɾ���ɹ�\n");
                            system("pause");
                            updatemusic(str,num);
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);  //������Ļ��ɫ
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

		    num =0;       //װ���������±�����  ���������¸�ֵ���Զ�����֮ǰ�ı���ģ�
      }
