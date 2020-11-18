#include "contact.h"
void menu()
{
	printf("-----------------------------------------\n");
	printf("******** 1.增加        2.删除   *********\n");
	printf("******** 3.查找        4.修改   *********\n");
	printf("******** 5.打印        6.分类   *********\n");
	printf("**************   0.退出   ****************\n");
	printf("-----------------------------------------\n");

}
int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con;//con就是通讯录，里面包含：1000的元素的和size
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			DelContact(&con);
			break;
		case 3:
			SearchContact(&con);
			break;
		case 4:
			ModifyContact(&con);
			break;
		case 5:
			ShowContact(&con);
			break;
		case 6:
			SortContact(&con);
			break;
		case 0:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}
