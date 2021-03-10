#include<stdio.h>
main()
{
	printf("Enter Item:\n1. Pizza\n2. Burger\n3. Pasta\n4. French Fries\n5. Sandwich");
	printf("\nFood Item-");
	int food=0;
	int price=0;
	scanf("%d",&food,&price);
	switch(food)
	{
		case 1:
		printf("\nFood Item-Pizza");
		printf("\nPrice-Rs 239");
		break;
		case 2:
		printf("\nFood Item-Burger");	
		printf("\nPrice Rs-129");
		break;
		case 3:
		printf("\nFood Item-Pasta");
		printf("\nPrice Rs-179");
		break;
		case 4:
		printf("\nFood Item-French Fries");
		printf("\nPrice Rs-99");
		break;
		case 5:
		printf("\nFood Item-Sabdwich");
		printf("\nPrice Rs-149");
		break;
	}
	
}
