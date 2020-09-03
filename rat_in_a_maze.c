#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num); 
	int arr[3][3]={{1,1,0},{0,1,0},{1,0,1}};
	//int arr[3][3]={{1,0,0},{0,0,0},{0,0,1}};
	maze(arr,3);

}

void maze(int arr[][3], int num)
{
	int i=0,j=0,currPosi=0,currPosj=0,prevPosi=0,prevPosj=0;
	int flag1=0,flag2=0;
	while(i<num && j<num)
	{
			if(i+1<num && arr[i+1][j]==1)
			{
				flag1=1;
				flag2=0;
				currPosi=i+1;
				currPosj=j;
			}
			else if(j+1<num && arr[i][j+1]==1)
			{
				flag2=1;
				flag1=0;
				currPosi=i;
				currPosj=j+1;
			}
			else
			{
				if(flag1)
					currPosi=i-1;
				else if(flag2)
					currPosj=j-1;
				flag1=0;
				flag2=0;

			}
			printf("%d %d",currPosi,currPosj);
			i=currPosi;
			j=currPosj;
			if(i==0 && j==0)
			{
				break;
			}
				
			else if(i==num-1 && j==num-1)
			{				
				break;
			}
	}
	if(i==0 && j==0)
		printf ("NOT POSSIBLE");
	else 
		printf("POSSIBLE");
}