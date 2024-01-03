#include <stdio.h>
#include <stdlib.h>
int main()
{
	int c;
	do
	{
	printf("------------------------");
	printf("\n-----Menu ------------");
	printf("\n-- 1.tao file ----");
    printf("\n-- 2.mo file  ----");	
	printf("\n-- 3.doc hoac ghi file--");
	printf("\n-- 4.dong file --------");
	printf("\n---0.thoat ---------");	
	printf("\n----------------------");
	printf("\n\n\nNhap phim: ");
	scanf("%d", &c);
	switch(c)
	{
	case 1:
	//tao file
	fflush(stdin);
	char a[1000];
	FILE *f;
	printf("Nhap ten file: ");
	gets(a);
	f = fopen(a, "w");
	break;
	case 2:
	fflush(stdin);
	//mo file
	f = fopen("troll.txt", "w");
	if (f == NULL)
	{
		printf("\nFile not found!");
		exit(1);
	} 	 	
	break;
	case 3:
	fflush(stdin);
	//doc hoac ghi file
	char n[1000];
	printf("\nNhap noi dung tu ban phim: ");
	scanf("%s", &n);
	fprintf(f, "%s", n);
	break;
	case 4:
	fflush(stdin);
	//dong file
	fclose(f);
	break;
	}
}while(c!=0);
}
