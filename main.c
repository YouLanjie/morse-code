#include "src/head.h"

int main(){cls();
	int a=1,b=0;
	while(a!=0){if(b>50)return 0;
		b++;
		welcome();
		scanf("%d",&a);
		getchar();
		switch(a){case 1:cls();
			morse1();
			cls();
			case 2:
			cls();
			morse2();
			cls();
			case 3:
			cls();
			help();
			cls();
			case 0:
			cls();
			break;
			default:
			cls();
			if(a>=500)return 0;
			a=4;
			continue;}}cls();
	return 0;}
void cls(){system("clear");}
void welcome(){cls();
	printf("\t\t\twelcome\n\n");
	printf("\t\t1、加密字符串————————1\n");
	printf("\t\t2、解密字符——————————2\n");
	printf("\t\t3、程序帮助——————————3\n");
	printf("\t\t4、退出游戏——————————0\n");
	printf("\t\t       请选择( )\b\b");
	return;}
void morse1(){cls();
	int a=-1,b=-1,d=0,e=0;
	char c[20][101];
	printf("请输入：\n");
	while(a<20&&strcmp(c[a],"*")!=0){a++;
		d++;
		gets(c[a]);
	}
	cls();
	printf("加密中……\n");
	cls();
	a=-1;
	while(a<20){a++;
		b=-1;
		e++;
		while(b<100){b++;
			if(c[a][b]=='a'||c[a][b]=='A')printf(".-/");
			else if(c[a][b]=='b'||c[a][b]=='B')printf("-.../");
			else if(c[a][b]=='c'||c[a][b]=='C')printf("-.-./");
			else if(c[a][b]=='d'||c[a][b]=='D')printf("-../");
			else if(c[a][b]=='e'||c[a][b]=='E')printf("./");
			else if(c[a][b]=='f'||c[a][b]=='F')printf("..-./");
			else if(c[a][b]=='g'||c[a][b]=='G')printf("--./");
			else if(c[a][b]=='h'||c[a][b]=='H')printf("..../");
			else if(c[a][b]=='i'||c[a][b]=='I')printf("../");
			else if(c[a][b]=='j'||c[a][b]=='J')printf(".---/");
			else if(c[a][b]=='k'||c[a][b]=='K')printf("-.-/");
			else if(c[a][b]=='l'||c[a][b]=='L')printf(".-../");
			else if(c[a][b]=='m'||c[a][b]=='M')printf("--/");
			else if(c[a][b]=='n'||c[a][b]=='N')printf("-./");
			else if(c[a][b]=='o'||c[a][b]=='O')printf("---/");
			else if(c[a][b]=='p'||c[a][b]=='P')printf(".--./");
			else if(c[a][b]=='q'||c[a][b]=='Q')printf("--.-/");
			else if(c[a][b]=='r'||c[a][b]=='R')printf(".-./");
			else if(c[a][b]=='s'||c[a][b]=='S')printf(".../");
			else if(c[a][b]=='t'||c[a][b]=='T')printf("-/");
			else if(c[a][b]=='u'||c[a][b]=='U')printf("..-/");
			else if(c[a][b]=='v'||c[a][b]=='V')printf("...-/");
			else if(c[a][b]=='w'||c[a][b]=='W')printf(".--/");
			else if(c[a][b]=='x'||c[a][b]=='X')printf("-..-/");
			else if(c[a][b]=='y'||c[a][b]=='Y')printf("-.--/");
			else if(c[a][b]=='z'||c[a][b]=='Z')printf("--../");
			else if(c[a][b]=='1')printf(".----/");
			else if(c[a][b]=='2')printf("..---/");
			else if(c[a][b]=='3')printf("...--/");
			else if(c[a][b]=='4')printf("....-/");
			else if(c[a][b]=='5')printf("...../");
			else if(c[a][b]=='6')printf("-..../");
			else if(c[a][b]=='7')printf("--.../");
			else if(c[a][b]=='8')printf("---../");
			else if(c[a][b]=='9')printf("----./");
			else if(c[a][b]=='0')printf("-----/");
			else if(c[a][b]==' ')printf(" /");
			else if(c[a][b]=='\0'){printf("\n");
			break;}
		}
		if(c[a][b]=='\0'&&e==d)break;
	}
	printf("\n按Enter退出\n");
	getchar();
	return;
}
void morse2()
{
	return;
}
void help()
{
	return;
}
