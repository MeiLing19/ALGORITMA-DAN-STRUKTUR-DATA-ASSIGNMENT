#include <stdio.h>

int main()
{
    int a, n, Data[10], cari, jumlah=0;
    printf("Mau input berapa data?");
    scanf("%d", &n);
    printf("Masukkan %d integer(s) \n", n);
    for(a=0; a<n; a++)
        scanf("%d", &Data[a]);
    
    printf("Cari angka berapa? ");
    scanf("%d", &cari);
    for(int a=0; a<n; a++)
    {
        if(Data[a]==cari)
        {
            printf("Angka %d KETEMU, dan tersimpan di lokasi/indeks %d\n", cari, a+1);
            jumlah++;
        }
    }
        if(jumlah == 0)
            printf("Angka %d TIDAK DITEMUKAN!", cari);
        else
            printf("Angka %d KETEMU sebanyak %d kali dalam array ", cari, jumlah);
        
    return 0;
}