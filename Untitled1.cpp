#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n;
	do
	{
	printf("\n----------------------");
	printf("\n-----Menu ------------");
	printf("\n-- 1.Nhap xuat gt ----");
    printf("\n-- 2.Tao tap tin  ----");	
	printf("\n-- 3.Thoat -----------");
	printf("\n----------------------");
	printf("\n\n\nNhap phim: ");
	scanf("%d", &n);
switch(n)
{
	case 1:
		fflush(stdin);
		printf("\nNhap gia tri: ");
		scanf("%d", &n);
		printf("\nGia tri vua nhap la: ");
		break;
	case 2:
		fflush(stdin);
		FILE * fp;
		char filename[67], ch;
			printf("FILENAME: ");
			gets(filename);
		if((fp = fopen (filename, "w")) == NULL )
		{
			printf("\nTao file bi loi! ");
			exit(1);
		}
		break;
	case 3:
		fflush(stdin);
		fclose(fp);
		break;
}
}while(n!=0);
}
