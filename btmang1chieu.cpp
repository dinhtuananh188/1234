#include <stdio.h>

int a[30];
int n;
int i;
void Nhapmang()
{
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}

void inmang()
{
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
}

void sumtbc()
{
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum +=a[i];
	}
	int tbc=sum/n;
	printf("\nTong cac phan tu la: %d",sum);
	printf("\nTBC cac phan tu la: %d",tbc);
}

void sumtbcduong()
{
	int sumduong=0;
	int j=0;
	for(i=0;i<n;i++)
	{
		if (a[i]>0)
		{
			sumduong +=a[i];
			j++;
		}
	}
	int tbcduong=sumduong/j;
	printf("\nTong cac phan tu duong la: %d",sumduong);
	printf("\nTBC cac phan tu duong la: %d",tbcduong);
}

void sumtbcam()
{
	int sumam=0;
	int j=0;
	for(i=0;i<n;i++)
	{
		if (a[i]<0)
		{
			sumam +=a[i];
			j++;
		}
	}
	int tbcam=sumam/j;
	printf("\nTong cac phan tu am la: %d",sumam);
	printf("\nTBC cac phan tu am la: %d",tbcam);
}

int main()
{
	printf ("Nhap so phan tu : \n");
	scanf("%d",&n);
	Nhapmang();
	inmang();
	sumtbc();
	sumtbcduong();
	sumtbcam();
}


