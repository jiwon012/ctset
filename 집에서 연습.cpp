#include<stdio.h>
int main(void)
{
	char ha[20];//닉네임 
	int num;//결정
	int ag;//반복 
	int a,b,i;//숫자변수 
	int g,h,j;//나누기나머지 
	
	printf("안녕하세요.\n");
	printf("당신이 사용할 닉네임을 입력해주세요.");
	scanf("%s",&ha);
	printf("\n\n\n안녕하세요.");
	printf("%s님",ha);
	for(ag=0;ag<20;){
		printf("무엇을 하고 싶나요?(+계산기:1, -계산기:2, X계산기:3, /계산기:4, 나머지:5, /나머지 계산기:6, 종료:7)");
		scanf("%d",&num);
		if(num==1){//더하기계산기 
			printf("기본이 될 수를 입력해주세요.\n");
			scanf("%d",&a);
			printf("더 할수를 입력해 주세요.\n");
			scanf("%d",&b);
			i=a+b;
			printf("%d에서 %d를 더한값은 %d입니다.\n",a,b,i);
		}
		if(num==2){//빼기계산기 
			printf("기본이 될 수를 입력해주세요.\n");
			scanf("%d",&a);
			printf("뺄 수를 입력해 주세요.\n");
			scanf("%d",&b);
			i=a-b;
			printf("%d에서 %d를 뺀값은 %d입니다.\n",a,b,i);
		}
		if(num==3){//곱하기계산기 
			printf("기본이 될 수를 입력해주세요.\n");
			scanf("%d",&a);
			printf("곱할 수를 입력해 주세요.\n");
			scanf("%d",&b);
			i=a*b;
			printf("%d에서 %d를 곱한값은 %d입니다.\n",a,b,i);
		}
		if(num==4){//나누기계산기 
			printf("기본이 될 수를 입력해주세요.\n");
			scanf("%d",&a);
			printf("나머지를 구할수를 입력해 주세요.\n");
			scanf("%d",&b);
			i=a/b;
			printf("%d에서 %d의 나눈값은 %d입니다.\n",a,b,i);
		} 
		if(num==5){//나머지계산기 
			printf("기본이 될 수를 입력해주세요.\n");
			scanf("%d",&a);
			printf("나머지를 구할수를 입력해 주세요.\n");
				scanf("%d",&b);
			i=a%b;
			printf("%d에서 %d의 나머지는 %d입니다.\n",a,b,i);
		} 
		if(num==6){//나누기나머지계산기 
			printf("기본이 될 수를 입력해주세요.\n");
			scanf("%d",&a);
			printf("나머지를 구할수를 입력해 주세요.\n");
			scanf("%d",&b);
			i=a/b;
			h=a;
			j=b; 
			g=h%j;
			printf("%d에서 %d의 나눈값은 %d이고 %d에 %d의 나머지는 %d입니다.\n",a,b,i,h,j,g);
		} 
		if(num==7){//종료 
			printf("3\n");
			printf("2\n");
			printf("1\n");
			printf("종료합니다.");
			return 0; 
		}
	}
}
