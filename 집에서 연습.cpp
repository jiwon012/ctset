#include<stdio.h>
int main(void)
{
	char ha[20];//�г��� 
	int num;//����
	int ag;//�ݺ� 
	int a,b,i;//���ں��� 
	int g,h,j;//�����⳪���� 
	
	printf("�ȳ��ϼ���.\n");
	printf("����� ����� �г����� �Է����ּ���.");
	scanf("%s",&ha);
	printf("\n\n\n�ȳ��ϼ���.");
	printf("%s��",ha);
	for(ag=0;ag<20;){
		printf("������ �ϰ� �ͳ���?(+����:1, -����:2, X����:3, /����:4, ������:5, /������ ����:6, ����:7)");
		scanf("%d",&num);
		if(num==1){//���ϱ���� 
			printf("�⺻�� �� ���� �Է����ּ���.\n");
			scanf("%d",&a);
			printf("�� �Ҽ��� �Է��� �ּ���.\n");
			scanf("%d",&b);
			i=a+b;
			printf("%d���� %d�� ���Ѱ��� %d�Դϴ�.\n",a,b,i);
		}
		if(num==2){//������� 
			printf("�⺻�� �� ���� �Է����ּ���.\n");
			scanf("%d",&a);
			printf("�� ���� �Է��� �ּ���.\n");
			scanf("%d",&b);
			i=a-b;
			printf("%d���� %d�� ������ %d�Դϴ�.\n",a,b,i);
		}
		if(num==3){//���ϱ���� 
			printf("�⺻�� �� ���� �Է����ּ���.\n");
			scanf("%d",&a);
			printf("���� ���� �Է��� �ּ���.\n");
			scanf("%d",&b);
			i=a*b;
			printf("%d���� %d�� ���Ѱ��� %d�Դϴ�.\n",a,b,i);
		}
		if(num==4){//��������� 
			printf("�⺻�� �� ���� �Է����ּ���.\n");
			scanf("%d",&a);
			printf("�������� ���Ҽ��� �Է��� �ּ���.\n");
			scanf("%d",&b);
			i=a/b;
			printf("%d���� %d�� �������� %d�Դϴ�.\n",a,b,i);
		} 
		if(num==5){//���������� 
			printf("�⺻�� �� ���� �Է����ּ���.\n");
			scanf("%d",&a);
			printf("�������� ���Ҽ��� �Է��� �ּ���.\n");
				scanf("%d",&b);
			i=a%b;
			printf("%d���� %d�� �������� %d�Դϴ�.\n",a,b,i);
		} 
		if(num==6){//�����⳪�������� 
			printf("�⺻�� �� ���� �Է����ּ���.\n");
			scanf("%d",&a);
			printf("�������� ���Ҽ��� �Է��� �ּ���.\n");
			scanf("%d",&b);
			i=a/b;
			h=a;
			j=b; 
			g=h%j;
			printf("%d���� %d�� �������� %d�̰� %d�� %d�� �������� %d�Դϴ�.\n",a,b,i,h,j,g);
		} 
		if(num==7){//���� 
			printf("3\n");
			printf("2\n");
			printf("1\n");
			printf("�����մϴ�.");
			return 0; 
		}
	}
}
