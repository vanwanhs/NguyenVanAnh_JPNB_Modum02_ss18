#include<stdio.h>
#include<string.h>
struct student{
	int id;
	char name[15];
	int age;
	char phone[20];
};
typedef struct student std;
int found(std std01[], int search);
int main(){
	int search;
	int length=5;
	std std01[50]={
		{1, "Nguyen Thi A", 20, "0901234567"},
        {2, "Tran Minh B", 22, "0912345678"},
        {3, "Le Thi C", 21, "0923456789"},
        {4, "Pham Minh D", 23, "0934567890"},
        {5, "Hoang Thi E", 24, "0945678901"}
	};
	printf("please you enter ID of student ");
	scanf("%d",&search);
	int tim = found(std01,search);
	if(tim != -1){
		printf("Id %d sinh vien ban tim\n", std01[tim].id);
		printf("Ten %s sinh vien ban tim\n", std01[tim].name);
		printf("Tuoi %d sinh vien ban tim\n", std01[tim].age);
		for(int i=tim;i<length-1;i++){
			std01[i]=std01[i+1];
		}
		length--;
		printf("Danh sach sau khi cap nhap:\n");
			for(int i=0;i<length;i++){
			printf("Id: %d, Ten: %s, Tuoi: %d, Phone: %s",
			std01[i].id,std01[i].name,std01[i].age,std01[i].phone);
			printf("\n");
		}
	}
	printf("Sinh vien ban tim kiem khong ton tai trong danh sach");
	return 0;
}
int found(std std01[], int search){
	for(int i=0; i<5; i++) {
		if (std01[i].id == search){
			return i;
		}
	}
	return -1;
}

