#include<stdio.h>

void main() {
	int a, b, c, d; //음료 변수
	int a1, b1, c1, d1; //음료 입고 변수
	int w; 
	int change = 0, money = 0; //거스름 돈, 현재 돈 변수
	int changeC; //거스름 돈 빈횐 변수
	int choice; //자판기 메뉴 선택 변수

	a = b = c = 3;
	d = 1; //음료 재고 초기화


	while (1) {
		printf("\n------------자판기 재고 확인------------\n");
		printf("  1.물  2.이온음료  3.커피  4.탄산음료\n");
		printf(" 1,000원  1,500원   1,500원   2,000원\n");
		printf(" 재고 %d\t    %d\t\t%d\t%d\n", a, b, c, d);
		printf("----------------------------------------\n");

		printf("========메뉴========\n");
		printf(" 1. 자판기 이용하기\n");
		printf(" 2. 음료 입고하기\n");
		printf("====================\n");
		printf(" 메뉴 선택 > ");
		scanf("%d", &choice);

		if (choice == 1) {
			printf(" 돈을 투입하세요 > ");
			scanf("%d", &money);
			printf(" 현재 돈: %d\n", money + change); 
			//money += change;
			printf(" 음료를 선택하세요 > ");
			scanf("%d", &w);

			switch (w) {
			case 1:
				if (a <= 0) {
					printf(" !--물 재고 부족--!\n"); 
				}
				else if (a > 0) {
					money += change;
					change = money - 1000;
					if (change < 0) {
						printf(" !--잔액 부족--!\n");
					}
					else if (change >= 0) {
						a--;
						printf(" >>물 제공<<\n");
						printf(" 거스름돈 : %d\n", change);
					}
				}
				break;
			case 2:
				if (b <= 0) {
					printf(" !--이온음료 재고 부족--!\n");
					//goto next;
				}
				else if (b > 0) {
					money += change;
					change = money - 1500;
					if (change < 0) {
						printf(" !--잔액 부족--!\n");
					}
					else if (change >= 0) {
						b--;
						printf(" >>이온음료 제공<<\n");
						printf(" 거스름돈 : %d\n", change);
					}
				}
				break;
			case 3:
				if (c <= 0) {
					printf(" !--커피 재고 부족--!\n");
					//goto next;
				}
				else if (c > 0) {
					money += change;
					change = money - 1500;
					if (change < 0) {
						printf(" !--잔액 부족--!\n");
					}
					else if (change >= 0) {
						c--;
						printf(" >>커피 제공<<\n");
						printf(" 거스름돈 : %d\n", change);
					}
				}
				break;
			case 4:
				if (d <= 0) {
					printf(" !--탄산음료 재고 부족--!\n");
					//goto next;
				}
				else if (d > 0) {
					money += change;
					change = money - 2000;
					if (change < 0) {
						printf(" !--잔액 부족--!\n");
					}
					else if (change >= 0) {
						d--;
						printf(" >>탄산음료 제공<<\n");
						printf(" 거스름돈 : %d\n", change);
					}
				}
				break;
			}

			if (change > 0) {
				printf(" 거스름돈을 반환 하시겠습니까?(yes=1, no=0): ");
				scanf("%d", &changeC);

				if (changeC == 1) {
					printf(" 거스름돈 반환 > %d\n\n", change);
					money = 0;
					change = 0;
				}
				else if (changeC == 0) {
					//money += change;
				}
			}
		}
		else if (choice == 2) {
			printf(" 입고 하실 음료를 선택하세요 > ");
			scanf("%d", &w);

			switch (w) {
			case 1:
				printf(" 입고 할 개수를 입력하세요 > ");
				scanf("%d", &a1);
				a = a+ a1;
				break;
			case 2:
				printf(" 입고 할 개수를 입력하세요 > ");
				scanf("%d", &b1);
				b = b + b1;
				break;
			case 3:
				printf(" 입고 할 개수를 입력하세요 > ");
				scanf("%d", &c1);
				c = c + c1;
				break;
			case 4:
				printf(" 입고 할 개수를 입력하세요 > ");
				scanf("%d", &d1);
				d = d + d1;
				break;
			}
		}

	}
}