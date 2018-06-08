/*
	Cau Truc Du Lieu Va Giai Thuat - Thay Luu Nguyen Ki Thu
	De tai 3
		Quan Li Thu Vien.
	Version:
		-1: Design Basic Algorithm
		-2: Design Graphics Console (build API.H/API.C file)
		-3: Fix somes bug
		-4: Add read/write file function
		-5: Fix bug final
	Nhom: 17
		-Ta Hong Trung   - N13DCCN213.
		-Tran Cam Truong - N13DCCN216.
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//-----------------------
#include "sach.h"
#include "muontra.h"
#include "docgia.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	system("title QUAN LI THU VIEN");
	//nhap doc gia
	struct list ds;
	Create_List_DG(ds);
	//menu chinh cua chuong trinh
//	printf("Cac chuc nang chinh cua chuong trinh\n");
//	printf("1.Nhap doc gia\n");
//	printf("2.Nhap sach\n");
//	printf("3.");
	
	getch();
	return 0;
}
