#include<stdio.h>    
#include<stdlib.h>
void isLate(int,int);//isLate()的原型
int main(void){      //主程式
	int h,m;  //建立int變數 h小時 m分鐘
	while(1)//無限迴圈 
	{
	printf("請輸入時間");
	scanf("%d %d",&h,&m);
	isLate(h,m);
}
}
void isLate(int h,int m){
	if(h>=7&&h<17){
		if(h==7&&m>=30){    //7:30為上課時間
			printf("現在是上課時間\n");
			
		}
		else if(h>=8){       //8:00~17:00為上課時間
			printf("現在是上課時間\n");
			
		}
		else{                //7:00~7:29為下課時間 
			printf("下課囉\n");

	    }
	} 
	else{                    //17:01~7:29為下課時間 
		printf("下課囉\n");
	}

}

