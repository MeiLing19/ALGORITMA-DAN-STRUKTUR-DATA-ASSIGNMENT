#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/times.h>

//--- Prototype ---
  void QuickSort(int *, int, int);
   int BinarySearch(int *, int, int);
    int startTiming(void);
     int stopTiming(void);
      float timingDuration(void);

//------- Struct Untuk Function Timing -------
static struct tms _start; 
static struct tms _stop;

//------- Function Quick Sort --------
 void QuickSort(int ArrBil[],int first,int last){
   int pivot,j,temp,i;

   if(first<last){
      pivot=first;
   i=first;
   j=last;

 while(i<j){
   while(ArrBil[i]<=ArrBil[pivot]&&i<last) i++; //too big index
      while(ArrBil[j]>ArrBil[pivot]) j--; //too small index
        if(i<j){ //tukar nilai jika too big index < too small index
         temp=ArrBil[i];
         ArrBil[i]=ArrBil[j];
         ArrBil[j]=temp;
  }
 }

 //--- tukar nilai ---
 temp=ArrBil[pivot];
 ArrBil[pivot]=ArrBil[j];
 ArrBil[j]=temp;
 QuickSort(ArrBil,first,j-1);
 QuickSort(ArrBil,j+1,last);

    }
}

//--------- Function Binary Search ---------
int BinarySearch(int *ArrBil, int bil, int bilCari){
int low=0, high=bil-1, mid;
  while(low<=high){
    mid=(low+high)/2; /*index tengah*/
      if(bilCari<ArrBil[mid]) high=mid-1;
        else if(bilCari>ArrBil[mid]) low=mid+1;
          else return mid; /*nilai ditemukan*/  
     }
 return -1; /*nilai tidak ditemukan*/
}


//-------- Function Timing --------
/* Fungsi Timing Start  */
  int startTiming(void) {
    times(&_start);
    return 1;
  }

/* Fungsi Timing Stop */
int stopTiming(void) {
 times(&_stop);
 return 1;
}

/* Fungsi Menghitung total durasi */
float timingDuration(void) {
    return (_stop.tms_utime - _start.tms_utime);
}


int main(){
  int i, pilihan, bil, *ArrBil, bilCari;
  
printf("\nMasukkan Jumlah Bilangan (n) : ");
  scanf("%d", &bil);

//--- Membatasi nilai inputan ---
if(bil>100000){
while(bil>100000){
  printf("\nJumlah bilangan (n) hanya berada pada 1 < n <= 100000");
    printf("\nMasukkan Jumlah Bilangan (n): ");
      scanf("%d", &bil);
 }
}

ArrBil=(int *) malloc(bil * sizeof(int));
  startTiming(); /*mulai hitung waktu*/ 
  
  //-------- Random data dalam array --------
  for(i=0; i<bil; i++){
    ArrBil[i]=(rand() % bil+1);
  }
  printf("> Random data dalam array selesai\n");

  //--- Urutkan data dengan metode Quick Sort ---
  QuickSort(ArrBil, 0, bil-1);
    stopTiming(); /*stop hitung waktu*/

  printf("> Urutkan data menggunakan quick sort\n");
  printf("\n> Total penghitungan waktu Random & Quick Sort adalah %f detik\n", timingDuration() * 1e-2);  
         
 
  while(pilihan!=3){
    printf("\nPilihan : \n");
      printf("1) Mencari data dengan BINARY SEARCH dan menampilkan hasilnya\n");
 printf("2) Random ulang data dalam array\n");
        printf("3) Selesai\n");
      printf("\n  Pilihan anda : ");
    scanf("%d", &pilihan);
  getchar();
  
 switch(pilihan){   
  case 1 :    
   printf("\n\t.:: Binary Search ::.\n");
   printf("Masukkan bilangan yang ingin di cari : ");
   scanf("%d", &bilCari);
   startTiming(); /*mulai hitung waktu*/  

   //--------- Binary Search ---------
   int BS=BinarySearch(&ArrBil[0], bil, bilCari);
   
   if(BS==-1){ /*cek nilai yang di return */
       printf("-=( Nilai %d yang dicari tidak ditemukan )=-\n", bilCari);
   }else 
       printf("-=( Nilai %d yang dicari ditemukan pada indeks ke-%d )=-\n", bilCari, BS);
   stopTiming(); /*stop hitung waktu*/    
   printf("\nTotal penghitungan waktu Binary Search adalah %f detik\n", timingDuration() * 1e-2);  ; 
   break;

  case 2 :
   printf("\nMasukkan Jumlah Bilangan Baru (n) : ");
   scanf("%d", &bil);
   if(bil>100000){
   while(bil>100000){
     printf("\nJumlah bilangan (n) hanya berada pada 1 < n <= 100000");
       printf("\nMasukkan Jumlah Bilangan BinarySearch (n): ");
         scanf("%d", &bil);
    }
   }
   ArrBil=(int *) malloc(bil * sizeof(int));
     startTiming(); /*mulai hitung waktu*/ 

   //-------- Random data dalam array --------
     for(i=0; i<bil; i++){
       ArrBil[i]=(rand() % bil+1);
     }
     printf("> Random data dalam array selesai\n");

   //--- Urutkan data dengan metode Quick Sort ---
     QuickSort(ArrBil, 0, bil-1);
       stopTiming(); /*stop hitung waktu*/
     printf("> Urutkan data menggunakan quick sort\n");
     printf("\n> Total penghitungan waktu Random & Quick Sort adalah %f detik\n", timingDuration() * 1e-2); 
   break;
 
  case 3 : 
   printf("\n ---== Anda out dari Program ==---\n\n");
   break;

  default : 
   printf("\n ---== Input Salah :: Masukkan pilihan hanya 1 s/d 2 ==---\n");
   break;
  }
 }
   return EXIT_SUCCESS;
}