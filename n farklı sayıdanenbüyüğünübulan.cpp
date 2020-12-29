#include<stdio.h>
int main()
{
	int i,N,sayi,enb,enk;
	printf("kac farkli sayi girilecek: ");
	scanf("%d",&N);
	printf("ilk sayiyi girin: ");
	scanf("%d",&sayi);
	enb=sayi;
	enk=sayi;
	for(i=2;i<=N;i++)
	{
		printf("%d.sayiyi girin: ",i);
		scanf("%d",&sayi);
		if(sayi>enb)
		{
		enb=sayi;
		}
		else
		{
		enk=sayi;
		}
	}
	printf("en buyuk sayi= %d \n",enb);
	printf("en kucuk sayi= %d",enk);
	return 0;
}
