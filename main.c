#include<stdio.h> 
#include<stdlib.h>

struct manager
{
	char* name;

	int passwd;

};
struct user
{
	char* name;
	
	int work_num;

	long id_card;

	short    sex;

	long     tel;
		
};

struct things
{
	char* name;

	int num;

	int tot;

	int sti;
};

int main()
{
	int n,a,b;
	printf("-----------------------\n");
	printf("欢迎使用物资库存管理系统\n");
	printf("请选择登录方式:\n");
	printf("管理员登录请输入：1\n普通用户登录请输入2\n");
	printf("退出请输入：0\n");
	scanf("%d",&n);

	if(n == 0)return 0;
	if(n == 1)
	{	
			
	/*	if(第一次登录)
		{      
			char* pass1,*pass2;
			printf("第一次登陆请重置用户名与密码\n");
			printf("请输入用户名：");
			scanf("%S",name);
			do
			{	printf("请输入密码：\n");
				scanf("%s",pass1);
				printf("请确认密码：\n");
				scanf("%s",pass2);
			}	
			while(strcmp(pass1 == pass2)!=0)
		
		
		}*/	
		printf("\n请选择要进行的操作：\n");	
		printf("\n修改用户名与密码请输入：1\n")	;
		printf("\n添加普通用户请输入：2\n");
		printf("\n删除普通用户请输入：3\n");
		printf("\n修改用户信息请输入：4\n");
		printf("\n查询普通用户信息请输入：5\n");
		printf("\n增添物品信息请输入：6\n");
		printf("\n删除物品信息请输入：7\n");
		printf("\n修改物品信息请输入：8\n");
		printf("\n查看物品信息请输入：9\n");
		printf("\n退出请输入：0");
		scanf("%d",&a);
		switch(a)
		{
			case 0:
			{
				// 退出系统
				printf("\n感谢使用，下次再见！\n");
				return 0;
			}
			break;
			case 1:
			{
				//修改用户名与密码
			}
			break;
			case 2:
			{
				//添加普通用户
			}
			break;

			case 3:
			{
				// 删除普通用户
				
			}
			break;

			case 4:
			{
				// 修改用户信息
			}
			break;

			case 5:
			{
				// 查询用户信息
				
			}
			break;

			case 6:
			{
				// 添加物品信息
			}
			break;

			case 7:
			{
				// 删除物品信息
			}
			break;

			case 8:	
			{
				// 修改物品信息
			}
			break;	

			case 9:
			{
				// 查看物品信息
			}
			break;

			default:
			{
				// 输入错误
				printf("\n输入错误，请重新输入！\n");
			}
		}
	}	
			
		
		
	
	if(n == 2)
	{	
		/*if(第一次登录)
		{      
			char* pass1,*pass2;
			printf("第一次登陆请重置用户名与密码\n");
			printf("请输入用户名：");
			scanf("%S",name);
			do
			{	printf("请输入密码：\n");
				scanf("%s",pass1);
				printf("请确认密码：\n");
				scanf("%s",pass2);
			}	
			while(strcmp(pass1 == pass2)!=0)
			*/

		int b;
		printf("\n请选择要进行的操作：\n");
		printf("\n退出系统请输入：0");
		printf("\n修改密码请输入：1");
		printf("\n查看个人信息请输入：2");
		printf("\n查看借还记录请输入：3");
		printf("\n借物资请输入：4");
		printf("\n归还物资请输入：5");
		scanf("%d",&b);
		switch(b)
		{
			case 0:
			{
				printf("再见！\n");
				return 0;
			}	
			break;

			case 1:
			{
				//修改密码		
		
			}
			break;

			case 2:
			{
				//查看个人信息
			}
			break;

			case 3:
			{
				// 查看借还记录
				
			}
			break;
			case 4:
			{
				// 借物资
			}
			break;

			case 5:
			{
				//归还物资
				
			}
			break;

			default:
			{
				// 输入错误
				printf("\n输入错误，请重新输入！\n");
		}


		
		
		
		}	
	
	}	

	return 0;
}	

void manager()
{	
       /*	struct manager* boss = (struct manager*)malloc(sizeof(struct manager));

	FILE* fp = fopen("struct manager* boss","wb");

	fwrite


	char* sname = NULL;

	int passwd;
	printf("请输入管理员用户名：\n");
	scanf("%s",sname);
	printf("请输入管理员密码：\n");
	scanf("%s",&passwd);	*/
				



}	
