#ifndef __DOCGIA_H__
#define __DOCGIA_H__
#define MAXLIST 100
#define TRUE 1
#define FALSE 0
#include "sach.h"

struct docgia{
	int madg;
	char ho[10];
	char ten[20];
	char phai[10]; //gioitinh
	int status_of_card; //trang thai the
	SNODEPTR *PTR; //con tro den ds da va dang muon {ds lk,cay np tk}
};
struct list{
	int n;
	struct docgia nodes[MAXLIST];
};

//khai bao prototype
int Empty_DG(struct list plist);
int Full_DG(struct list plist);
int Insert_Item_DG(struct list *plist);
int Delete_Item_DG(struct list *plist,int i);
void Traverse_DG(struct list plist);
int Search_Info_DG(struct list plist,int info);
void Create_List_DG(struct list &plist);

#endif //__DOCGIA_H
