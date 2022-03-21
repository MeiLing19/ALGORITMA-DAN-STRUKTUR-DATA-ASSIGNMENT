#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node *head;

void awal(){
    //untuk isi node awal
    struct node *pointer;
    int item;
    pointer = (struct node *) malloc(sizeof(struct node *));
    if(pointer == NULL)
    {
        printf("\n OVERFLOW");
    }
    else
    {
        printf("Masukkan Data: ");
        scanf("%d", &item);
        pointer->data = item;
        pointer->next = head;
        head = pointer;
        printf("\n Data berhasil disimpan di NODE awal!");
    }
}

void akhir(){
    //untuk isi node akhir
    struct node *pointer, *temp;
    int item;
    pointer = (struct node *) malloc(sizeof(struct node *));
     if(pointer == NULL)
    {
        printf("\n OVERFLOW");
    }
    else
    {
        printf("Masukkan Data: ");
        scanf("%d", &item);
        pointer->data = item;
        if(head == NULL)
        {
            pointer->next = NULL;
            head = pointer;
            printf("Berhasil menyimpan dalam NODE!!!");
        }
        else
        {
            temp = head;
            while(temp -> next != NULL)
            {
                temp = temp->next;
            }
            temp->next = pointer;
            pointer->next = NULL;
            printf("Data berhasil disimpan di NODE akhir!!!");
        }
    }
}


void sembarang(){
    //untuk isi node sisipan
    int i, lokasi, item;
    struct node *pointer, *temp;
    pointer = (struct node *)malloc(sizeof(struct node));
    if(pointer == NULL)
    {
        printf("\n OVERFLOW");
    }
    else
    {
        printf("Masukkan Data: ");
        scanf("%d", &item);
        pointer->data = item;
        printf("Mau simpan di lokasi mana? ");
        scanf("%d", &lokasi);
        temp = head;
        for(i=0; i<lokasi; i++)
        {
            temp = temp->next;
            if(temp == NULL)
            {
                printf("\n Tidak dapat tersimpan!");
                return;
            }
        }
            pointer->next = temp->next;
            temp->next = pointer;
            printf("NODE berhasil disimpan!!");
    }

}


void lihat(){
    //untuk melihat isi dari linked-list
    struct node *pointer;
    pointer = head;
    if(pointer == NULL)
    {
        printf("Tidak ada data!!");
    }
    else
    {
        printf("Cetak data...\n");
        while(pointer!=NULL)
        {
            printf("%d\n", pointer->data);
            pointer = pointer-> next;
        }
    }
}

int main()
{
    int pilihan = 0;
    while(pilihan != 5)//5 itu untuk exit
    {
        printf("\n *********** Menu Latihan Linked List ***********\n");
        printf("\n=====================================================\n");
        printf("\n1. Input data di NODE awal \n2. Input data di NODE akhir\n3. Input data di NODE sembarang \n4. Lihat data dalam Linked List \n5. KELUAR\n");
        printf("\nPilihanmu? ");
        scanf("%d", &pilihan);

        switch(pilihan)
        {
            case 1:
            awal();
            break;

            case 2:
            akhir();
            break;

            case 3:
            sembarang();
            break;

            case 4:
            lihat();
            break;

            case 5:
            exit(0);
            break;

            default:
            printf("Silahkan masukkan pilihanmu.....");
        }

    }
}
