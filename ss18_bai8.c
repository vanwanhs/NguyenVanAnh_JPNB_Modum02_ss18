#include<stdio.h>
#include<string.h>
struct student{
	int id;
	char name[50];
	int age;
	char phone[20];
};
typedef struct student std;
void sapxep(std std01[], int length);
int main(){
	int length=5;
	std std01[50]={
		{1, "Nguyen Thi Van A", 20, "0901234567"},
        {2, "Tran Minh T", 22, "0912345678"},
        {3, "Le Thi D", 21, "0923456789"},
        {4, "Pham Minh L", 23, "0934567890"},
        {5, "Hoang Thi E", 24, "0945678901"}
	};
	printf("Danh sach truoc khi sap xep:\n");
	printfList(std01,length);
	sapxep(std01,length);
	printf("Danh sach sau khi sap xep:\n");
	printfList(std01,length);
	return 0;
}
void sapxep(std std01[], int length){
	std temp;
	for(int i=0;i<4;i++){
		for( int j=1;j<5;j++){
			if(strcmp(std01[i].name,std01[j].name)>0){
				temp =std01[i];
				std01[i]=std01[j];
				std01[j]=temp;
			}
		}
	}
}
void printfList(std std01[], int length){
	for(int i=0;i<length;i++){
			printf("Id: %d, Ten: %s, Tuoi: %d, Phone: %s",
			std01[i].id,std01[i].name,std01[i].age,std01[i].phone);
			printf("\n");
		}
}

