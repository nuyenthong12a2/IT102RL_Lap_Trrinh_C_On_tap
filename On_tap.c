#include <stdio.h>
#include<string.h>

#define MAX_SV 50 

typedef struct {
	int maSV;
	char fullName[50];
	int age;
	float averageScore; 
} Students;
// Buoc 3 
// Xoa ky tu \n con sot trong bo dem sau scanf 
void xoaBoDem(void){
	int c ; 
	while((c = getchar())!='\n' && c!=EOF){
		
	}
}
// Tim theo ma , tra ve vi tri hoac -1 
int  findmaSv(Students ds[],int n,int ma){
	int i;
	for(i=0;i<n;i++){
		if(ds[i].maSV == ma){
			return i;
		}
	}
	return -1;
}

// Buoc 4 : Chuc nang 1 , them sinh vien 
int addStudent(Students ds[],int n){
	Students sv;
	int len;
	
	if(n>=MAX_SV){
		printf("\nDanh sach da day!");
		return n;
	}
	printf("\nNhap ma sinh vien:");
	scanf("%d",&sv.maSV);
	xoaBoDem();
	if (findmaSv(ds,n,sv.maSV)!=-1){
		printf("\n Ma sinh vien da ton tai!");
		return n;
	}
	printf("\nNhap ho ten : ");
	fgets(sv.fullName,50,stdin);
	len = strlen(sv.fullName);
	if (len>0 && sv.fullName[len-1]=='\n'){
		sv.fullName[len-1]='\0';
	}
	printf("\nNhap tuoi : ");
	scanf("%d",&sv.age);
	xoaBoDem();
	
	printf("\nNhap diem TB:");
	scanf("%f",&sv.averageScore);
	xoaBoDem();
	ds[n]=sv;
	printf("\nThem thanh cong !");
	return n+1;
}



// Buoc 2 : Khung menu 
int main (){
	Students ds[MAX_SV];
	int n=0;  // So sinh vien hien co 
	int choice;
	
	do{
		printf("\n==== QUAN LY SINH VIEN ======");
		printf("\n1.Them sinh vien");
		printf("\n2.Hien thi danh sach");
		printf("\n3.Cap nhat diem");
		printf("\n4.Xoa sinh vien");
		printf("\n5.Tim kiem theo ma");
		printf("\n0.Thoat chuong trinh");
		printf("\n=================================");
		printf("\nNhap lua chon cua ban : ");
		scanf("%d",&choice);
		xoaBoDem();
		switch(choice){
			case 1:
				n = addStudent(ds,n);
				break;
			case 2:
				printf("\nChua lam");
				break;
			case 3:
				printf("\nChua lam");
				break;
			case 4: 
			printf ("\nChua lam");
			break;
			case 5:
				printf("\nChua lam");
				break;
			case 0:
				printf("\nKet thuc chuong trinh . Hen gap lai");
				break;
			default:
				printf("\nLua chon cua ban khong hop le. Vui long thuc hien lai !");
				break;
		} 
	}while(choice!=0);
	return 0; 
	
} 
