#include "docgia.h"
#include "stdio.h"
int Empty_DG(struct list plist){
	return(plist.n == 0?TRUE:FALSE);
}
int Full_DG(struct list plist){
	return(plist.n == MAXLIST?TRUE:FALSE);
}
int Insert_Item(struct list *plist){
	
}
void Create_List_DG(struct list &plist){
	int i;
	printf("\nNhap so luong ds doc gia");
	scanf("%d",&plist.n);
	for(int i;i<plist.n;i++){
		printf("LIST[%d]=",i+1);
		scanf("%d",&plist.nodes[i]);
	}
}
