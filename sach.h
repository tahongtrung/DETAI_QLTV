#ifndef __SACH_H__
#define __SACH_H__
#define TRUE 1
#define FALSE 0

struct sach{
	char masach[20];
	char tensach[20];
	long sotrang;
	char tentacgia[30];
	long namxuatban;
	int status_of_book; // 0 cho muon dc 1 da co doc gia muon  2 da thanh li
	char vitri[10];  // chac la vi tri tren ke sach
};
struct nodes{
	int key;
	struct sach info;
	struct nodes *left;
	struct nodes *right;
	
};

typedef struct nodes *SNODEPTR;
SNODEPTR tree;
//SNODEPTR root la bien toan cuc 
//khai bao prototype
void Initialize_S(SNODEPTR *root);
SNODEPTR New_Node_S();
void Insert_Node_S(SNODEPTR *p,int x,int a);
void Create_Tree_S(SNODEPTR root);

int Empty_S(SNODEPTR root);

#endif //__SACH_H__
