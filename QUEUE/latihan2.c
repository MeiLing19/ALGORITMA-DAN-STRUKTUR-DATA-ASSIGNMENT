#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STACK 5
#define MAX 3

typedef struct
{
    int data[MAX];
    int head;
    int tail;
}Queue;

Queue antrian;

void Awal(){
    antrian.head=antrian.tail=-1;
}

int Kosong(){
    if(antrian.tail == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int Penuh(){
    if (antrian.tail == MAX-1)
    {
        return 1;
    }else{
        return 0;
    }
    
}

int Enqueue(int data){
    if (Kosong()==1)
    {
        antrian.head = antrian.tail=0;
        antrian.data[antrian.tail]=data;
        printf("%d masuk!\n", antrian.data[antrian.tail]);
        void Tampil();
        {
            if (Kosong()==0)
            {
                for (int i = antrian.head; i < antrian.tail; i++)
                {
                    printf("%d ", antrian.data[i]);
                }
            } else{
                printf("Isi antrian kosong!");
            }
            
        }           
    } else if (Penuh()==0)
    {
        antrian.tail++;
        antrian.data[antrian.tail]=data;
        printf("%d masuk!\n", antrian.data[antrian.tail]);
    }  
}

int Dequeue(){
    int antri = antrian.data[antrian.head];
    for (int i = antrian.head; i < antrian.tail; i++)
    {
        antrian.data[i] = antrian.data[+1];
    }
    antrian.tail--;
    return antri;
}

void Tampil(){
    if (Kosong()==0)
    {
        for (int i = antrian.head; i <= antrian.tail; i++)
        {
            printf("%d ", antrian.data[i]);
        }
    }
    else {
        printf("Tidak ada data dalam antrian!");
    }
    
}

void ClearQueue(){
    antrian.head=antrian.tail=-1;
    printf("Data sudah dibersihkan!");
}

    typedef struct
    {
        int top;
        char data[5][5];
    }STACK;

    STACK tumpuk;

    void init(){
        tumpuk.top = -1;
    }

    int isFull(){
        if (tumpuk.top == MAX_STACK)
        {
            return 1;
        }else{
            return 0;
        }
        
    }

    int isEmpty(){
        if (tumpuk.top == -1)
        {
            return 1;
        }else{
            return 0;
        }
        
    }

    void Push(char d[5]){
        tumpuk.top++;
        strcpy(tumpuk.data[tumpuk.top], d);
    }

    void Pop(){
        printf("Data yang diambil = %s\n", tumpuk.data[tumpuk.top]);
        tumpuk.top--;
    }

    void tampilStack(){
        for (int i = tumpuk.top; i >= 0; i--)
        {
            printf("Data: %s\n", tumpuk.data[i]);
        }
        
    }

    void ClearStack(){
        tumpuk.top = -1;
    }

struct node
{
    int data;
    struct node* next;
};
    typedef struct node node_t;

struct node *head;

void first(){
    struct node *ptr;
    int item;
    ptr = (struct node *) malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        printf("\n OVERFLOW");
    }else{
        printf("\nInsert value : ");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\n Data berhasil disimpan di Node awal");
    }
    
}

void last(){
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *) malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        printf("\n Overflow");
    }
    else{
        printf("Masukkan data: ");
        scanf("%d", &item);
        ptr->data = item;
        if(head == NULL){
            ptr->next = NULL;
            head = ptr;
            printf("Berhasil disimpan dalam node");
        }
        else{
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("Data berhasil disimpan di node akhir");
            
        }
    }   
}

void random(){
    int i, loc, item;
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Overflow!");
    }
    else{
        printf("Masukkan data: ");
        scanf("%d", &item);
        ptr->data = item;
        printf("Insert Location : ");
        scanf("%d", &loc);
        temp = head;
        for (i = 0; i < loc; i++)
        {
            temp = temp->next;
            if (temp==NULL)
            {
                printf("\n Tidak dapat tersimpan!");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("\n NODE berhasil disimpan!");
    }
    
}

void show(){
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("Tidak ada data");
    }else{
        printf("Print data ...");
        while (ptr != NULL)
        {
            printf("%d", ptr->data);
            ptr = ptr->next;
        }
        
    }
    
}

void linkedListMenu(){
    int choice = 0;
    while (choice != 5)
    {
        printf("\n ------- Linked List Menu --------\n\n");
        printf("\n 1. Input value to first node");
        printf("\n 2. Input value to last node");
        printf("\n 3. Input value to random node");
        printf("\n 4. Show data");
        printf("\n 5. Exit");
        printf("\n Insert : ");
        scanf(" %d", &choice);

        switch (choice)
        {
            case 1:
            first();
            break;

            case 2:
            last();
            break;

            case 3:
            random();
            break;

            case 4:
            show();
            break;

            case 5:
            exit(0);
            break;
        
            default:
            printf("Silahkan masukkan pilihanmu");
            break;
        }
    }

}

void StackMenu(){
    init();

        int pil;
        char dt[5];

        do
        {
            printf("1. Push\n");
            printf("2. Pop\n");
            printf("3. Cetak isi array stack\n");
            printf("4. Hapus isi array stack\n");
            printf("5. Keluar\n");
            printf("Pilihan anda? ");
            scanf("%d", &pil);

            switch (pil)
            {
                case 1: if (isFull() != 1)
                {
                    printf("Data yang ingin diinputkan = ");
                    scanf("%s", dt);
                    Push(dt);
                }else{
                    printf("Stack sudah penuh!\n");
                }
                    break;
                case 2: if (isEmpty() != 1)
                {
                    Pop();
                }else{
                    printf("Stack masih kosong!\n");
                }
                    break;
                
                case 3: if (isEmpty() != 1)
                {
                    tampilStack();
                }else{
                    printf("\n masih kosong \n");
                }
                break;

                case 4: ClearStack();
                printf("Data sudah dihapus!\n");
                break;

                default:
                    break;
                }
        } while (pil != 5);
        printf("Keluar dari program\n");
}

void QueueMenu(){
     int choice, data;
    Awal();
    do
    {
        printf("\n");
        printf("1. Enqueue\n"); //masuk satu data
        printf("2. Dequeue\n"); // keluar satu data
        printf("3. Lihat isi antrian\n");
        printf("4. Hapus isi antrian\n");
        printf("5. Exit\n");
        printf("Pilihan anda? ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Data = ");
            scanf("%d", &data);
            Enqueue(data);
            break;
        case 2:
            printf("Data yang keluar: %d", Dequeue());
            break;
        case 3:
            Tampil();
            break;
        case 4:
            ClearQueue();
            break;
        default:
            break;
        }    
    } while (choice != 5);
}

int main(){
    int choice = 0;
    while (choice != 5)
    {
        printf("\n ------- Menu --------\n");
        printf("\n 1. Linked list");
        printf("\n 2. Stack");
        printf("\n 3. Queue");
        printf("\n 4. Exit");
        printf("\n Insert : ");
        scanf(" %d", &choice);

        switch (choice)
        {
            case 1:
            linkedListMenu();
            break;

            case 2:
            StackMenu();
            break;

            case 3:
            QueueMenu();
            break;

            case 4:
            exit(0);
            break;
        
            default:
            printf("Silahkan masukkan pilihanmus");
            break;
        }
    }

}