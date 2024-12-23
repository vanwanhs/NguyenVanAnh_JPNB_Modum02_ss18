#include<stdio.h>
#include<string.h>
struct student{
	int id;
	char name[15];
	int age;
	char phone[20];
};
typedef struct student std;
void menu(void);
void printfList(std std01[], int length);
int main(){
	int length;
	int choice;
	std std01[100];
	do{
		menu();
		printf("Lua chon cua ban ");
		scanf("%d",&choice);
		fflush(stdin);
		switch (choice){
			case 1:
				printf("Moi ban nhap do dai cua danh sach: ");
				scanf("%d",&length);
				for (int i=0; i<length; i++){
					std01[i].id = i+1;
					printf("Ten: ");
					fgets(std01[i].name,sizeof(std01[i].name),stdin);
					fflush(stdin);
					printf("Tuoi: ");
					scanf("%d",&std01[i].age);
					fflush(stdin);
					printf("sdt: ");
				}
				printfList(std01,length);
				break;
			case 2: 
				break; 
			case 3:
				break; 
			case 4: 
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			default :
				printf("Moi ban nhap lai!\n");
		}
	}while(choice!=7);
	return 0;
}

void menu(void){
	printf("-------Menu------\n");
	printf("1.In danh sach sach sinh vien\n");
	printf("2.Them sinh vien\n");
	printf("3. Sua thong tin sinh vien\n");
	printf("4. Xoa sinh vien\n");
	printf("5. Tim kiem sinh vien\n");
	printf("6. Sap xep danh sach sinh vien\n");
	printf("7. Thoat\n");
}
void printfList(std std01[], int length){
	printf("Danh sach sinh vien\n");
	for(int i=0;i<length;i++){
		printf("Id; %d, Ten: %s, Tuoi: %d, Phone: %s",
		std01[i].id,std01[i].name,std01[i].age,std01[i].phone);
		printf("\n");
		}
}
