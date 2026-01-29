#include<stdio.h>
struct SINH_VIEN{
	char mssv[10];
	char hoten[30];
	int namsinh;
	float diem;
	char malop[10];
};
typedef struct SINH_VIEN SV;

void nhapSV(SV *a);//Truyen tham bien
void xuatSV(SV a);//Truyen tham tri
void nhapDSSV(SV a[], int n );
void xuatDSSV(SV a[], int n );

int main()
{	
	int n = 5;
	SV a[5];
	nhapDSSV(a,n);
    xuatDSSV(a,n);
	return 0;
}
//Xuat thong tin sinh vien
void xuatSV(SV a)

{
	printf("\n%s\t%s\t%d\t%f\t%s", a.mssv, a.hoten, a.namsinh, a.diem, a.malop);
}


//Ham nhap thong tin 1 sinh vien
void nhapSV(SV *a)
{
	printf("\nHay nhap ma so sinh vien: ");
	fflush(stdin);
	scanf("%s", a->mssv);
	
	printf("\nHay nhap ho ten: ");
	fflush(stdin);
	gets(a->hoten);
	
	printf("\nHay nhap nam sinh sinh vien: ");
	fflush(stdin);
	scanf("%d", &a->namsinh);
	
	printf("\nHay nhap diem sinh vien: ");
	fflush(stdin);
	scanf("%f", &a->diem);
	
	printf("\nHay nhap malop sinh vien: ");
	fflush(stdin);
	scanf("%s", a->malop);
}
void nhapDSSV(SV  a[], int n){
	int i = 0; 
	n = 5;
	while(i<n){
		printf("\nnhap thong tin sinh vien %d: \n", i+1);
		nhapSV(&a[i]);
		i++;
		}
	}
	
void xuatDSSV(SV a[], int n){
	int i = 0;
	n = 5;
	while(i<n){
		printf("\nxuat thong tin cua sinh vien %d: \n", i + 1);
		xuatSV(a[i]);
		i++;
		}
	}




































