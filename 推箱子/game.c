#include"tui.h"

char game(int level)
{
	//定义及初始化地图
	char map[maps_num][50][50] = {
		{
			"|========|",
			"|  ###   |",
			"|  #X#   |",
			"|  # ####|",
			"|###O OX#|",
			"|#X O@###|",
			"|####O#  |",
			"|   #X#  |",
			"|   ###  |",
			"|========|"
		},//第1关
		{
			"|=========|",
			"|#####    |",
			"|#   #    |",
			"|# O # ###|",
			"|# O@# #X#|",
			"|###O###X#|",
			"| ##    X#|",
			"| #   #  #|",
			"| #   ####|",
			"| #####   |",
			"|=========|"
		},//第2关
		{
			"|==========|",
			"| #######  |",
			"| #     ###|",
			"|##O###   #|",
			"|#  @O  O #|",
			"|# XX# O ##|",
			"|##XX#   # |",
			"| ######## |",
			"|==========|"
		},//第3关
		{
			"|======|",
			"| #### |",
			"|##  # |",
			"|#  O# |",
			"|##  ##|",
			"|##O@ #|",
			"|#XOO #|",
			"|#XXQX#|",
			"|######|",
			"|======|"
		},//第4关
		{
			"|========|",
			"| #####  |",
			"| # @### |",
			"| # O  # |",
			"|### # ##|",
			"|#X# #  #|",
			"|#XO  # #|",
			"|#X   O #|",
			"|########|",
			"|========|"
		},//第5关
		{
			"|=============|",
			"|   #######   |",
			"|####     #   |",
			"|#   X### #   |",
			"|# # #    ##  |",
			"|# # O O#X #  |",
			"|# #  Q  # #  |",
			"|# X#O O # #  |",
			"|##    # # ###|",
			"| # ###X    @#|",
			"| #     ##   #|",
			"| ############|",
			"|=============|"
		},//第6关
		{
			"|==========|",
			"|   #######|",
			"|  ##  # @#|",
			"|  #   #O #|",
			"|  #O  O  #|",
			"|  # O##  #|",
			"|### O # ##|",
			"|#XXXXX  # |",
			"|######### |",
			"|==========|"
		},//第7关
		{
			"|==========|",
			"|   ###### |",
			"| ###    # |",
			"|##X O## ##|",
			"|#XXO O @ #|",
			"|#XX O O ##|",
			"|######  # |",
			"|     #### |",
			"|==========|"
		},//第8关
		{
			"|===========|",
			"| ######### |",
			"| #  ##   # |",
			"| #   O   # |",
			"| #O ### O# |",
			"| # #XXX# # |",
			"|## #XXX# ##|",
			"|# O  O  O #|",
			"|#     #  @#|",
			"|###########|",
			"|===========|"
		},//第9关
		{
			"|========|",
			"|  ######|",
			"|  #    #|",
			"|###OOO #|",
			"|#@ OXX #|",
			"|# OXXX##|",
			"|####  # |",
			"|   #### |",
			"|========|"
		},//第10关
		{
			"|============|",
			"| ####  #####|",
			"|##  #  #   #|",
			"|# O ####O  #|",
			"|#  OXXXX O #|",
			"|##    # @ ##|",
			"| ########## |",
			"|============|"
		},//第11关
		{
			"|========|",
			"|  ##### |",
			"|###  @# |",
			"|#  OX ##|",
			"|#  XOX #|",
			"|### QO #|",
			"|  #   ##|",
			"|  ######|",
			"|========|"
		},//第12关
		{
			"|========|",
			"|  ####  |",
			"|  #XX#  |",
			"| ## x## |",
			"| #  OX# |",
			"|## O  ##|",
			"|#  #OO #|",
			"|#  @   #|",
			"|########|",
			"|========|"
		},//第13关
		{
			"|========|",
			"|########|",
			"|#  #   #|",
			"|# OXXO #|",
			"|#@OXQ ##|",
			"|# OXXO #|",
			"|#  #   #|",
			"|########|",
			"|========|"
		},//第14关
		{
			"|========|",
			"| ###### |",
			"|##    ##|",
			"|# O OO #|",
			"|#XXXXXX#|",
			"|# OO O #|",
			"|### @###|",
			"|  ####  |",
			"|========|"
		},//第15关
		{
			"|==========|",
			"|  ########|",
			"|  #    ###|",
			"|  # O    #|",
			"|### O ## #|",
			"|#XXX O   #|",
			"|#XXXO#O ##|",
			"|#### # O #|",
			"|   #   @ #|",
			"|   #######|",
			"|==========|"
		},//第16关
		{
			"|=========|",
			"|######   |",
			"|#    #   |",
			"|# OOO##  |",
			"|#  #XX###|",
			"|##  XXO #|",
			"| #  @   #|",
			"| ########|",
			"|=========|"
		},//第17关
		{
			"|==========|",
			"|  ########|",
			"|  #   #X #|",
			"| ##  OXXX#|",
			"| #  O #QX#|",
			"|## ##O# ##|",
			"|#   O  O #|",
			"|#   #    #|",
			"|#######@ #|",
			"|      ####|",
			"|===========|"
		},//第18关
		{
			"|==========|",
			"| #######  |",
			"| #XXXX #  |",
			"|###XXXO###|",
			"|#  O#O O #|",
			"|# OO  #O #|",
			"|#    #   #|",
			"|#### @ ###|",
			"|   #####  |",
			"|==========|"
		},//第19关
		{
			"|=======|",
			"|#######|",
			"|#XXOXX#|",
			"|#XX#XX#|",
			"|# OOO #|",
			"|#  O  #|",
			"|# OOO #|",
			"|#  #@ #|",
			"|#######|",
			"|=======|"
		},//第20关
		{
			"|===========|",
			"|   ######  |",
			"|   # XXX#  |",
			"|####XXXX#  |",
			"|#  ###O ###|",
			"|# O O  OO #|",
			"|#@ O O    #|",
			"|#   ###   #|",
			"|##### #####|",
			"|===========|"
		},//第21关
		{
			"|=========|",
			"|######## |",
			"|#      # |",
			"|# #OO  # |",
			"|# XXX# # |",
			"|##XXXO ##|",
			"| # ## O #|",
			"| #O  O  #|",
			"| #  #  @#|",
			"| ########|",
			"|=========|"
		},//第22关
		{
			"|==========|",
			"|  #####   |",
			"|###   ####|",
			"|#   O  O #|",
			"|# O @O   #|",
			"|###OO#####|",
			"|  #  XX#  |",
			"|  #XXXX#  |",
			"|  ######  |",
			"|==========|"
		},//第23关
		{
			"|==============|",
			"|######   #####|",
			"|#    ### #  X#|",
			"|#  O O # #XXX#|",
			"|# #  O ###  X#|",
			"|#  OOO   O @X#|",
			"|###  O  O#  X#|",
			"|  #  O#O #XXX#|",
			"|  ##     #  X#|",
			"|   ###########|",
			"|==============|"
		},//第24关
		{
			"|===========|",
			"|     ######|",
			"| #####X   #|",
			"| #  #XX## #|",
			"| #  OXX   #|",
			"| #  # X# ##|",
			"|### ##O#  #|",
			"|# O    OO #|",
			"|# #O#  #  #|",
			"|#@  #######|",
			"|#####      |",
			"|===========|"
		},//第25关
		{
			"|=============|",
			"| #########   |",
			"| #   ##  ####|",
			"| # O        #|",
			"| ##O### ##  #|",
			"| #  ## Q # ##|",
			"| # OXXXXXX # |",
			"|## ### X # # |",
			"|#     O###O# |",
			"|#   #    O@# |",
			"|#####O# #### |",
			"|    #   #    |",
			"|    #####    |",
			"|=============|"
		},//第26关
		{
			"|===============|",
			"|      #########|",
			"|      #       #|",
			"|      # # # # #|",
			"|      #  O O# #|",
			"|#######   O   #|",
			"|#XX#  ## O O# #|",
			"|#XX   ## O O  #|",
			"|#XX#  ## ######|",
			"|#XX# # O O #   |",
			"|#XX     O  #   |",
			"|#  ###@  ###   |",
			"|#### #####     |",
			"|===============|"
		},//第27关
		{
			"|================|",
			"|    ####        |",
			"|#####  #        |",
			"|#  O O # #######|",
			"|#   O  # #QXQXQ#|",
			"|## O O ###XQXQX#|",
			"| #O O  #  QXQXQ#|",
			"| #@O O    XQXQX#|",
			"| #O O  #  QXQXQ#|",
			"|## O O ###XQXQX#|",
			"|#   O  # #QXQXQ#|",
			"|#  O O # #######|",
			"|#####  #        |",
			"|    ####        |",
			"|================|"
		},//第28关
		{
			"|=========|",
			"|######## |",
			"|#XXXXXX# |",
			"|#  O # ##|",
			"|# O # O #|",
			"|##O O O #|",
			"| #  @   #|",
			"| ########|",
			"|=========|"
		},//第29关
		{
			"|============|",
			"|  ##########|",
			"|###    X@  #|",
			"|#   ##O##  #|",
			"|#   Q X X ##|",
			"|## O##O## # |",
			"| #    X   # |",
			"| ###########|",
			"|============|"
		},//第30关
		{
			"|=========|",
			"|   ######|",
			"|####X  @#|",
			"|#  OOO  #|",
			"|#X##X##X#|",
			"|#   O   #|",
			"|#  OX# ##|",
			"|####   # |",
			"|   ##### |",
			"|=========|"
		},//第31关
		{
			"|========|",
			"| ###### |",
			"| #X XX# |",
			"| #X OX# |",
			"|###  O##|",
			"|# O  O #|",
			"|# #O## #|",
			"|#   @  #|",
			"|########|",
			"|========|"
		},//第32关
		{
			"|==============|",
			"|    ######    |",
			"|  ###    ###  |",
			"|  #   #O   ###|",
			"|  #   O   OO #|",
			"|  # OO #O    #|",
			"|  ##   O   O #|",
			"|###### #O#####|",
			"|#XX@ #O  #    |",
			"|#X#XX  O##    |",
			"|#XXXXO# #     |",
			"|#XXXX   #     |",
			"|#########     |",
			"|==============|"
		},//第33关
		{
			"|===============|",
			"|###############|",
			"|#      #      #|",
			"|# O #O # O##O #|",
			"|# #  O #      #|",
			"|#   ##O#O##OO #|",
			"|# # # XXX #   #|",
			"|# O  X # XO   #|",
			"|# O#@OXXX# #  #|",
			"|#    X # X  O #|",
			"|# ##XO###OX # #|",
			"|# # OXXXXX ## #|",
			"|#             #|",
			"|###############|",
			"|===============|"
		},//第34关
		{
			"|==========|",
			"|######### |",
			"|#   ##  # |",
			"|# # O O # |",
			"|#  QX#  # |",
			"|## #X@X## |",
			"|##O###Q###|",
			"|#        #|",
			"|#   ## # #|",
			"|######   #|",
			"|     #####|",
			"|==========|"
		}//第35关
	};
	

	//变量申明
	//i,t 循环计数器, x 纵坐标, y 横坐标, pass 通关判断条件
	//restep_num 记录每局撤销次数,step_num 记录本局总步数,wide 地图宽度
	int i,t, x, y, pass,restep_num,step_num,wide;
	//(ch 游戏过程中读取键盘信息, option暂停过程中读取键盘信息及游戏结束返还值,last_step 记录上一步数据)
	char ch, option,last_step;
	//申明两数组，记录终点坐标
	int X_num[50] = { 0 }, Y_num[50] = { 0 },xnum,ynum;
	//lstep 记录是否撤销过,x_box 记录上一次推箱子前箱的纵坐标子,y_box 记录上一次推箱子前箱的横坐标子, rerestep_num 记录上一次推箱子前所走的步数
	int lstep,x_box,y_box, rerestep_num;

	//初始化变量
	wide=step_num = restep_num= pass = 0;
	ch = option =last_step= NULL;
	xnum = ynum = 0;
	lstep = 0;

	//初始化起始位置
	for ( i = 0;i<20; i++)
	{ 
		for (t = 0;map[level][i][t] != '\0'; t++)
			if (map[level][i][t] == '@')
			{
				x = i;
				y = t;
				i = 99;
				break;
			}
	}
	
	//寻找终点坐标
	for (i = 2; i<20; i++)
	{
		for (t = 2; map[level][i][t] != '\0'; t++)
		{
			if (map[level][i][t] == 'X'|| map[level][i][t] == 'Q')
			{
				X_num[xnum] = i;
				Y_num[ynum] = t;
				xnum++;
				ynum++;
			}
			if (map[level][i][t]=='=')
			{
				i = 99;
				break;
			}
		}
	}

	//计算地图宽度
	wide = strlen(map[level][0]);

	//打印地图
	system("cls");
	printf("\n\n\n\n\t\t\t\t\t\t         第%d关",level+1);
	printf("\n\n");
	for (i = 0; i <= 17; i++)
	{
		for ( t = 0; t <(120-wide)/2; t++)
			printf(" ");
		puts(map[level][i]);
	}
	printf("\t\t\t\t\t\t步数：%d  剩余撤销次数：%d", step_num, 3 - restep_num);
	printf("\n\n\t\t\t\t\t      重玩本关(Q) 撤销(B) 菜单(ESC)");

	//游戏主程序
	while (1)
	{
		ch = getch();
		ch= tolower(ch);
		
		switch (ch)
		{
		//向下移动
		case 's':
			if (map[level][x + 1][y] == ' ' || map[level][x + 1][y] == 'X')
			{
				map[level][x][y] = ' ';
				x++;
				map[level][x][y] = '@';
				step_num++;
			}
			else if ((map[level][x + 1][y] == 'O' || map[level][x + 1][y] == 'Q') && map[level][x + 2][y] != 'O' && map[level][x + 2][y] != 'Q' && map[level][x + 2][y] != '#')
			{
				map[level][x][y] = ' ';
				x++;
				map[level][x][y] = '@';
				map[level][x + 1][y] = 'O';
				lstep = 1;
				x_box = x;
				y_box = y;
				rerestep_num = step_num;
				step_num++;
				last_step = ch;//存储上一步信息
			}
			break;
		//向上移动
		case 'w':
			if (map[level][x - 1][y] == ' ' || map[level][x - 1][y] == 'X')
			{
				map[level][x][y] = ' ';
				x--;
				map[level][x][y] = '@';
				step_num++;
			}
			else if ((map[level][x - 1][y] == 'O' || map[level][x - 1][y] == 'Q') && map[level][x - 2][y] != 'O' && map[level][x - 2][y] != 'Q' && map[level][x - 2][y] != '#')
			{
				map[level][x][y] = ' ';
				x--;
				map[level][x][y] = '@';
				map[level][x - 1][y] = 'O';
				lstep = 1;
				x_box = x;
				y_box = y;
				rerestep_num = step_num;
				step_num++;
				last_step = ch;//存储上一步信息
			}
			break;
		//向左移动
		case 'a':
			if (map[level][x][y - 1] == ' ' || map[level][x][y - 1] == 'X')
			{
				map[level][x][y] = ' ';
				y--;
				map[level][x][y] = '@';
				step_num++;
			}
			else if ((map[level][x][y - 1] == 'O' || map[level][x][y - 1] == 'Q') && map[level][x][y - 2] != 'O' && map[level][x][y - 2] != 'Q' && map[level][x][y - 2] != '#')
			{
				map[level][x][y] = ' ';
				y--;
				map[level][x][y] = '@';
				map[level][x][y - 1] = 'O';
				lstep = 1;
				x_box = x;
				y_box = y;
				rerestep_num = step_num;
				step_num++;
				last_step = ch;//存储上一步信息
			}
			break;
		//向右移动
		case 'd':
			if (map[level][x][y + 1] == ' ' || map[level][x][y + 1] == 'X')
			{
				map[level][x][y] = ' ';
				y++;
				map[level][x][y] = '@';
				step_num++;
			}
			else if ((map[level][x][y + 1] == 'O' || map[level][x][y + 1] == 'Q') && map[level][x][y + 2] != 'O' && map[level][x][y + 2] != 'Q'&&map[level][x][y + 2] != '#')
			{
				map[level][x][y] = ' ';
				y++;
				map[level][x][y] = '@';
				map[level][x][y + 1] = 'O';
				lstep = 1;
				x_box = x;
				y_box = y;
				rerestep_num = step_num;
				step_num++;
				last_step = ch;//存储上一步信息
			}
			break;

		case 27://暂停界面
			system("cls");
			printf("\n\n\n\n\n\t\t\t\t\t\t        继续(R)\n");
			printf("\n\n\t\t\t\t         选关(X)  重玩(Q)  下一关(N)  主菜单(M)  \n");
			printf("\n\n\n\t\t\t\t\t\t      操作说明");
			printf("\n\n\t\t\t\t\t        W:上  S:下  A:左  D:右");
			printf("\n\n\t\t\t\t\t         @:人  O:箱子  X:终点 ");
			while (ch != 'r')
			{
				ch = getch();
				if (ch == 'x' || ch == 'q' || ch == 'n' || ch == 'm'||ch == 'X' || ch == 'Q' || ch == 'N' || ch == 'M')
				{
					option = ch;
					ch = 27;
					break;
				}
			}
			break;

		case 'q'://重玩
			option = ch;
			break;
		}

		//撤销一步
		if (lstep == 1 && ch == 'b'&&restep_num<3)
		{
			switch (last_step)
			{
			//返还向下移动
			case 's':
				map[level][x][y] = ' ';
				map[level][x_box+1][y_box] = ' ';
				map[level][x_box][y_box] = 'O';
				x_box--;
				x = x_box;
				y = y_box;
				map[level][x][y] = '@';
				step_num=rerestep_num;
				restep_num++;
				lstep = 0;
				break;
			//返还向上移动
			case 'w':
				map[level][x][y] = ' ';
				map[level][x_box -1][y_box] = ' ';
				map[level][x_box][y_box] = 'O';
				x_box++;
				x = x_box;
				y = y_box;
				map[level][x][y] = '@';
				step_num = rerestep_num;
				restep_num++;
				lstep = 0;
				break;
				//返还向左移动
			case 'a':
				map[level][x][y] = ' ';
				map[level][x_box][y_box-1] = ' ';
				map[level][x_box][y_box] = 'O';
				y_box++;
				x = x_box;
				y = y_box;
				map[level][x][y] = '@';
				step_num = rerestep_num;
				restep_num++;
				lstep = 0;
				break;
				//返还向右移动
			case 'd':
				map[level][x][y] = ' ';
				map[level][x_box][y_box + 1] = ' ';
				map[level][x_box][y_box] = 'O';
				y_box--;
				x = x_box;
				y = y_box;
				map[level][x][y] = '@';
				step_num = rerestep_num;
				restep_num++;
				lstep = 0;
				break;
			}
		}

		//if (lstep = 1)
		//	last_step = ch;//存储上一步信息

		//还原终点标记
		for ( i = 0;X_num[i]!=0; i++)
		{
			if (map[level][X_num[i]][Y_num[i]] == ' ')
				map[level][X_num[i]][Y_num[i]] = 'X';
			if (map[level][X_num[i]][Y_num[i]] == 'O')
				map[level][X_num[i]][Y_num[i]] ='Q';
		}

		//打印地图
		if (option != 'q')
		{
			system("cls");
			printf("\n\n\n\n\t\t\t\t\t\t         第%d关", level + 1);
			printf("\n\n");
			for (i = 0; i <= 17; i++)
			{
				for (t = 0; t <(120 - wide) / 2; t++)
					printf(" ");
				puts(map[level][i]);
			}
			printf("\t\t\t\t\t\t步数：%d  剩余撤销次数：%d", step_num, 3 - restep_num);
			printf("\n\n\t\t\t\t\t      重玩本关(Q) 撤销(B) 菜单(ESC)");
		}

		//通关条件判定
		for (i = 0; X_num[i] != 0; i++)
		{
			if (map[level][X_num[i]][Y_num[i]] == 'Q')
				pass++;
		}
		if (pass == xnum)
		{
			pass = 1;
			ch = 27;
			break;
		}
		else
			pass = 0;

		//中途退出或重玩
		if (ch == 27||ch=='q')
		{
			pass = 0;
			break;
		}
	}

	//判断能否继续下一关
	system("cls");
	if (option != NULL)
	{
		if (option == 'n')
		{
			if (level == maps_num - 1)
			{
				system("cls");
				printf(" \n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t这已经是最后一关了！");
				option = 'p';
				Sleep(1500);
				system("cls");
			}
		}
		return option;
	}

	//通关界面
	if (pass == 1)
	{
		printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t  过关!");
		printf("\n\n\t\t\t\t\t\t    本关总计步数：%d", step_num);
		printf("\n\n\t\t\t\t\t  选关(X)  重玩(Q)  下一关(N)  主菜单(M)  \n");
	}
	while (pass == 1)
	{
		option= getch();
		if (option == 'm'|| option == 'M')
			option = 'm';
		if (option == 'n'|| option == 'N')
		{
			if (level == maps_num - 1)
			{
				system("cls");
				printf(" \n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t这已经是最后一关了！");
				option = 'p';
				Sleep(1500);
				system("cls");
			}
		}
		if (option == 'x' || option == 'q'  || option == 'n' || option == 'p' || option == 'm' || option == 'X' || option == 'Q' || option == 'N' || option == 'P' || option == 'M')
		{
			system("cls");
			return option;
		}
	}
	return option;
}