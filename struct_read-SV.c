#include <stdio.h>

struct SINH_VIEN{
    char mssv[10];
    char hoten[30];
    int namsinh;
    float diem;
    char malop[10];
};
typedef struct SINH_VIEN SV;

void nhapSV(SV *a);
void xuatSV(SV a);
void nhapDSSV(SV a[], int n);
void xuatDSSV(SV a[], int n);


int main(){
	int n = 2;
	SV a[2];
	FILE *fp;
	fp = fopen("dssv.out","wb");
	//doc file
	if(fp != NULL){
		printf("mo file thanh cong");
		//ghi file
		fwrite(a, sizeof(SV), n, fp);
		//dong file
		fclose(fp);
	}
	else{
		printf("khong mo file duoc");
	}
	
	xuatDSSV(a,n);

    return 0;                         
}
void nhapDSSV(SV a[], int n){
	int i = 0; 
	n = 2;
	while(i<n){
		printf("\nnhap thong tin sinh vien %d: \n", i+1);
		nhapSV(&a[i]);
		i++;
		}
	}
	
void xuatDSSV(SV a[], int n){
	int i = 0;
	n = 2;
	while(i<n){
		printf("\nxuat thong tin cua sinh vien %d: \n", i + 1);
		xuatSV(a[i]);
		i++;
		}
	}
	
void nhapSV(SV *a){
    printf("Nhap Mssv: ");	
    fflush(stdin);	
    scanf("%s", a->mssv);

    printf("\nNhap Ho Va Ten: ");
    fflush(stdin);
    gets(a->hoten);

    printf("\nNhap nam sinh: ");
    scanf("%d", &a->namsinh);

    printf("\nnhap diem: ");
    scanf("%f", &a->diem);

    printf("\nnhap ma lop: ");
    fflush(stdin);
    scanf("%s", a->malop);
}
void xuatSV(SV a){
    printf("\nmssv la: %s\nho ten la: %s\nnam sinh: %d\ndiem: %g\nma lop: %s", a.mssv, a.hoten, a.namsinh, a.diem, a.malop);
}
