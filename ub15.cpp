#include<stdio.h>    
#include<stdlib.h>
void isLate(int,int);//isLate()���쫬
int main(void){      //�D�{��
	int h,m;  //�إ�int�ܼ� h�p�� m����
	while(1)//�L���j�� 
	{
	printf("�п�J�ɶ�");
	scanf("%d %d",&h,&m);
	isLate(h,m);
}
}
void isLate(int h,int m){
	if(h>=7&&h<17){
		if(h==7&&m>=30){    //7:30���W�Үɶ�
			printf("�{�b�O�W�Үɶ�\n");
			
		}
		else if(h>=8){       //8:00~17:00���W�Үɶ�
			printf("�{�b�O�W�Үɶ�\n");
			
		}
		else{                //7:00~7:29���U�Үɶ� 
			printf("�U���o\n");

	    }
	} 
	else{                    //17:01~7:29���U�Үɶ� 
		printf("�U���o\n");
	}

}

