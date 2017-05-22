//==========================
//程序名称：推箱子
//制作人：杨新瑞
//版本号：1.1
//创建时间：2016.12.17
//上次修改时间：2016.12.20 23:35
//总制作天数：4
//
//更新日志：
//1.1
//2017.5.22：
//	修改内置地图为txt文件存储，并相应修改代码，增加地图文件读取函数void LoadMap(int level, int *map_high, char(*map)[50]);
//
//==========================
#include"tui.h"

int main()
{
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	GetConsoleCursorInfo(hOut, &cci);//获取光标信息
	cci.bVisible = FALSE;//隐藏光标
	SetConsoleCursorInfo(hOut, &cci);//设置光标信息

	system("title 推箱子1.0");//设定窗口名称
	system("mode con cols=120 lines=30");//设定窗口大小

	int level, level_option,i;
	char option;

	level = 0;
	option = 'M';
	//主界面1
	char main_interface[50][50] = {
									"\n\n\n\n\n\n\n",
									"\t\t\t\t\t\t\t 推箱子",
									"\t\t\t\t\t\t   |===============|",
									"\t\t\t\t\t\t   |               |",
									"\t\t\t\t\t\t   |               |",
									"\t\t\t\t\t\t   |    开始(S)    |",
									"\t\t\t\t\t\t   |               |",
									"\t\t\t\t\t\t   |   退出(ESC)   |",
									"\t\t\t\t\t\t   |               |",
									"\t\t\t\t\t\t   |               |",
									"\t\t\t\t\t\t   |===============|",
									};
	//主程序
	while (option != 27)
	{
		system("cls");
		for (i = 0; i<11; i++)//主菜单1
			puts(main_interface[i]);
		while (1)
		{
			option = getch();
			if (option == 's' || option == 'S' || option == 27)
				break;
		}
		while (1)
		{
			if (option == 's' || option == 'S')//打印主菜单2
			{
				system("cls");
				printf("\n\n\n\n\n\n\n\n");
				printf("\t\t\t\t\t\t\t 推箱子\n");
				printf("\t\t\t\t\t\t   |===============|\n");
				printf("\t\t\t\t\t\t   |               |\n");
				printf("\t\t\t\t\t\t   |   从头开始(A) |\n");
				printf("\t\t\t\t\t\t   |               |\n");
				printf("\t\t\t\t\t\t   |    选关(X)    |\n");
				printf("\t\t\t\t\t\t   |               |\n");
				printf("\t\t\t\t\t\t   |    返回(R)    |\n");
				printf("\t\t\t\t\t\t   |               |\n");
				printf("\t\t\t\t\t\t   |===============|");
				while (1)
				{
					option = getch();
					if (option == 'a' || option == 'A' || option == 'x' || option == 'X' || option == 'r' || option == 'R')
						break;
				}
			}
			if (option == 'n' || option == 'N')//进入下一关
			{
				system("cls");
				level++;
				option = game(level);//进入游戏
			}
			if (option == 'q' || option == 'Q')//重玩本关
			{
				system("cls");
				option = game(level);//进入游戏
			}
			if (option == 'a' || option == 'A')//从头开始
			{
				system("cls");
				level = 0;
				option = game(level);//进入游戏
			}
			if (option == 'x' || option == 'X')//选关
			{
				while (1)
				{
					system("cls");
					printf("\n\n\n\n\n\n\n\n\n\n\n");
					printf("\t\t\t\t\t\t");
					printf("请输入关卡(1-%d):",maps_num);
					scanf("%d", &level_option);
					if (level_option > 0 && level_option < maps_num + 1)//限定关卡选择范围
					{
						level = level_option - 1;
						option = 'q';
						break;
					}
				}
			}
			if (option == 'p' || option == 'P')//通关重置数据
			{
				option = 'm';
				level = 0;
				break;
			}
			if (option == 'm' || option == 'M' || option == 'r' || option == 'R' )//主菜单1选择
			{
				break;
			}
			if (option == 27)//退出程序
				break;
		}
	}
	system("cls");
	printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   南宫大仙 出品");
	printf("\n\n\t\t\t\t\t\t     逆虹 测试");
	Sleep(2500);
	return 0;
}