
#ifndef __MUONTRA_H__
#define __MUONTRA_H__

struct muontra{
	char masach[20];
	char ngaymuon[20];
	char ngaytra[20];
	int trangthai;	//1,2
};

struct node{
	struct muontra info;
	struct node *next;
};
typedef struct node *NODEPTR;
NODEPTR First;

//khai bao prototype
void Initialize(NODEPTR *First);
NODEPTR New_Node();
void Insert_First(NODEPTR *First,int x);
void Insert_After(NODEPTR *p,int x);
NODEPTR Search_Info(NODEPTR First,int x);
int Empty(NODEPTR First);
int Delete_First(NODEPTR *First); //
int Delete_After(NODEPTR *p); //
int Delete_Info(NODEPTR *First,int x);
void Clear_List(NODEPTR *First);
void Traverse(NODEPTR First);

#endif //__MUONTRA_H__
