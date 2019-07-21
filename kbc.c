#include<stdio.h>
#include<conio.h>
void levelone();
void leveltwo();
void levelthree();
void levelfour();
void levelfive();
void levelsix();
void levelseven();
void leveleight();
void levelnine();
void levelten();
int main()
{ 
  int exp,i,a,b,c,d;
	printf("\t\t\tWelcome to in Khelo Jito\n\n\n");
	printf("IN this game we will play from LEVEL=1 to LEVEL=10\n");
	printf("RULES:\nif your ans is a=1\nif your ans is b=2\nif your ans is c=3\nif your ans is d=4\n\n");
	printf("If you want to play all level in Khelo jito than click: 1\n\n");
	label:printf("LEVEL:");
	scanf("%d",&exp);
	
	switch(exp)
	{	
		case 1:
			levelone();
			scanf("%d",&a);
			if(a==1)
			{
				
				printf("");
				goto label;
                 //break;
			}
			else
			{
				printf("");
			}
			break;
		//	goto label;
			case 2:
			leveltwo();
				scanf("%d",&a);
			if(a==1)
			{
				
				printf("");
				goto label;
                 //break;
			}
			else
			{
				printf("");
			}
			break;
			case 3:
			levelthree();
				scanf("%d",&a);
			if(a==1)
			{
				
				printf("");
				goto label;
                 //break;
			}
			else
			{
				printf("");
			}
			break;
			case 4:
			levelfour();
				scanf("%d",&a);
			if(a==1)
			{
				
				printf("");
				goto label;
                 //break;
			}
			else
			{
				printf("");
			}
			break;
			case 5:
			levelfive();
				scanf("%d",&a);
			if(a==1)
			{
				
				printf("");
				goto label;
                 //break;
			}
			else
			{
				printf("");
			}
			break;
				case 6:
			levelsix();
				scanf("%d",&a);
			if(a==1)
			{
				
				printf("");
				goto label;
                 //break;
			}
			else
			{
				printf("");
			}
			break;	
				case 7:
			levelseven();
				scanf("%d",&a);
			if(a==1)
			{
				
				printf("");
				goto label;
                 //break;
			}
			else
			{
				printf("");
			}
			break;	
				case 8:
			leveleight();
				scanf("%d",&a);
			if(a==1)
			{
				
				printf("");
				goto label;
                 //break;
			}
			else
			{
				printf("");
			}
			break;	
				case 9:
			levelnine();
				scanf("%d",&a);
			if(a==1)
			{
				
				printf("");
				goto label;
                 //break;
			}
			else
			{
				printf("");
			}
			break;	
				case 10:
			levelten();
				scanf("%d",&a);
			if(a==1)
			{
				
				printf("");
				goto label;
                 //break;
			}
			else
			{
				printf("");
			}
			break;		
			default:
				printf("enter valid lavel\n");
	goto label;			
	}	
}
void levelone(int a)
{
	printf("Q1) who is the Prime Minister of INDIA\n\n");
	printf("a)NARENDAR MODI\t\tb)RAHUL GANDHI\t\t\nc)MAMTA BENARJI\t\td)ARVIND KEJRIWAL\n");
	scanf("%d",&a);
if(a==1)
{
	printf("your ans is right and you WIN= 5,000 thousand RUPEES with [Ranger cycle]\n\n");
}

else
{
	printf("your ans is wrong and you loss this game and right is A\n\n");
}
}

void leveltwo(int a)
{
	printf("Q2) who is the PRECEDENT of AMERICA\n\n");
	printf("a)NARENDAR MODI\t\tb)RAHUL GANDHI\t\t\nc)OBAMA\t\td)DONALD TRUMP\n");
	scanf("%d",&a);
if(a==4)
{
	printf("your ans is right and you WIN= 1,000,000 Lakh RUPEES\n\n");
}
else
{
	printf("your ans is wrong and you loss this game and right is D\n\n");
}
}

void levelthree(int a)
{
	printf("Q2) who is the Prime Minister of PAKISTAN\n\n");
	printf("a)JAKIR HUSAIN\t\tb)BAGDADI\t\t\nc)OBAMA\t\td)DONALD TRUMP\n");
	scanf("%d",&a);
if(a==1)
{
	printf("your ans is right and you WIN= 1,000,000 Lakh RUPEES\n\n");
}
else
{
	printf("your ans is wrong and you loss this game and right is a\n\n");
}
}
void levelfour(int a)
{
	printf("Q2) who is the PRECEDENT of RUSIA\n\n");
	printf("a)rock\t\tb)Vladimir Putin\t\t\nc)Shekh\t\td)DONALD TRUMP\n");
	scanf("%d",&a);
if(a==2)
{
	printf("your ans is right and you WIN= 15,00000 Lakh RUPEES\n");
}
else
{
	printf("your ans is wrong and you loss this game and right is d\n");
}
}
void levelfive(int a)
{
	printf("Q2) who is the Prime Minister of australia\n\n");
	printf("a)NARENDAR MODI\t\tb)RAHUL GANDHI\t\t\nc)Scott Morrison\t\td)DONALD TRUMP\n");
	scanf("%d",&a);
if(a==3)
{
	printf("your ans is right and you WIN= 2,000,000 Lakh RUPEES\n");
}
else
{
	printf("your ans is wrong and you loss this game and right is C\n");
}
}
void levelsix(int a)
{
	printf("Q2) who is the Chief Minister of Delhi\n\n");
	printf("a)NARENDAR MODI\t\tb)RAHUL GANDHI\t\t\nc)Arvind kejriwal\t\td)Kumar viswash\n");
	scanf("%d",&a);
if(a==3)
{
	printf("your ans is right and you WIN= 3,000,000 RUPEES\n");
}
else
{
	printf("your ans is wrong and you loss this game and right is d\n");
}
}
void levelseven(int a)
{
	printf("Q2) who is the pricipal of DPGITM\n\n");
	printf("a)RAO JI\t\tb)Dr.Prhalad \t\t\nc)Scott Morrison\t\td)BL.Meena\n");
	scanf("%d",&a);
if(a==2)
{
	printf("your ans is right and you WIN= 5,000,000 RUPEES\n");
}
else
{
	printf("your ans is wrong and you loss this game and right is d\n");
}
}
void leveleight(int a)
{
	printf("Q2) Amitab Bachan from\n\n");
	printf("a)AAGRA\t\tb)MUMBAI\t\t\nc)DELHI\t\td)MP\n");
	scanf("%d",&a);
if(a==1)
{
	printf("your ans is right and you WIN= 10,000,000 RUPEES\n");
}
else
{
	printf("your ans is wrong and you loss this game and right is A\n");
}
}
void levelnine(int a)
{
	printf("Q2) sharukhan from \n\n");
	printf("a)BOLLyWOOD\t\tb)HOLLYWOOD\t\t\nc)POLLYWOOD\t\td)TOLLYWOOD\n");
	scanf("%d",&a);
if(a==1)
{
	printf("your ans is right and you WIN= 20,000,000 RUPEES\n");
}
else
{
	printf("your ans is wrong and you loss this game and right is A\n");
}
}
void levelten(int a)
{
	printf("Q2) who is the owner of KFC\n\n");
	printf("a)NARENDAR MODI\t\tb)Yum China\t\t\nc)Buffer Bofat\t\td)Army Man\n");
	scanf("%d",&a);
if(a==2)
{
	printf("your ans is right and you WIN= 50,000,000 Crore RUPEES\n");
}
else
{
	printf("your ans is wrong and you loss this game and right is B\n");
}
}

