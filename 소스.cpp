#include<stdio.h>

void main() {
	int a, b, c, d; //���� ����
	int a1, b1, c1, d1; //���� �԰� ����
	int w; 
	int change = 0, money = 0; //�Ž��� ��, ���� �� ����
	int changeC; //�Ž��� �� ��Ⱥ ����
	int choice; //���Ǳ� �޴� ���� ����

	a = b = c = 3;
	d = 1; //���� ��� �ʱ�ȭ


	while (1) {
		printf("\n------------���Ǳ� ��� Ȯ��------------\n");
		printf("  1.��  2.�̿�����  3.Ŀ��  4.ź������\n");
		printf(" 1,000��  1,500��   1,500��   2,000��\n");
		printf(" ��� %d\t    %d\t\t%d\t%d\n", a, b, c, d);
		printf("----------------------------------------\n");

		printf("========�޴�========\n");
		printf(" 1. ���Ǳ� �̿��ϱ�\n");
		printf(" 2. ���� �԰��ϱ�\n");
		printf("====================\n");
		printf(" �޴� ���� > ");
		scanf("%d", &choice);

		if (choice == 1) {
			printf(" ���� �����ϼ��� > ");
			scanf("%d", &money);
			printf(" ���� ��: %d\n", money + change); 
			//money += change;
			printf(" ���Ḧ �����ϼ��� > ");
			scanf("%d", &w);

			switch (w) {
			case 1:
				if (a <= 0) {
					printf(" !--�� ��� ����--!\n"); 
				}
				else if (a > 0) {
					money += change;
					change = money - 1000;
					if (change < 0) {
						printf(" !--�ܾ� ����--!\n");
					}
					else if (change >= 0) {
						a--;
						printf(" >>�� ����<<\n");
						printf(" �Ž����� : %d\n", change);
					}
				}
				break;
			case 2:
				if (b <= 0) {
					printf(" !--�̿����� ��� ����--!\n");
					//goto next;
				}
				else if (b > 0) {
					money += change;
					change = money - 1500;
					if (change < 0) {
						printf(" !--�ܾ� ����--!\n");
					}
					else if (change >= 0) {
						b--;
						printf(" >>�̿����� ����<<\n");
						printf(" �Ž����� : %d\n", change);
					}
				}
				break;
			case 3:
				if (c <= 0) {
					printf(" !--Ŀ�� ��� ����--!\n");
					//goto next;
				}
				else if (c > 0) {
					money += change;
					change = money - 1500;
					if (change < 0) {
						printf(" !--�ܾ� ����--!\n");
					}
					else if (change >= 0) {
						c--;
						printf(" >>Ŀ�� ����<<\n");
						printf(" �Ž����� : %d\n", change);
					}
				}
				break;
			case 4:
				if (d <= 0) {
					printf(" !--ź������ ��� ����--!\n");
					//goto next;
				}
				else if (d > 0) {
					money += change;
					change = money - 2000;
					if (change < 0) {
						printf(" !--�ܾ� ����--!\n");
					}
					else if (change >= 0) {
						d--;
						printf(" >>ź������ ����<<\n");
						printf(" �Ž����� : %d\n", change);
					}
				}
				break;
			}

			if (change > 0) {
				printf(" �Ž������� ��ȯ �Ͻðڽ��ϱ�?(yes=1, no=0): ");
				scanf("%d", &changeC);

				if (changeC == 1) {
					printf(" �Ž����� ��ȯ > %d\n\n", change);
					money = 0;
					change = 0;
				}
				else if (changeC == 0) {
					//money += change;
				}
			}
		}
		else if (choice == 2) {
			printf(" �԰� �Ͻ� ���Ḧ �����ϼ��� > ");
			scanf("%d", &w);

			switch (w) {
			case 1:
				printf(" �԰� �� ������ �Է��ϼ��� > ");
				scanf("%d", &a1);
				a = a+ a1;
				break;
			case 2:
				printf(" �԰� �� ������ �Է��ϼ��� > ");
				scanf("%d", &b1);
				b = b + b1;
				break;
			case 3:
				printf(" �԰� �� ������ �Է��ϼ��� > ");
				scanf("%d", &c1);
				c = c + c1;
				break;
			case 4:
				printf(" �԰� �� ������ �Է��ϼ��� > ");
				scanf("%d", &d1);
				d = d + d1;
				break;
			}
		}

	}
}