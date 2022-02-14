# SEARCHING(Sequential Searching & Binary Searching)

[SEARCHING](https://github.com/MeiLing19/ALGORITMA-DAN-STRUKTUR-DATA-ASSIGNMENT/tree/main/SEARCHING)
- Searching adalah pencarian data dengan cara menelusuri data-data tersebut. Tempat pencarian data dapat berupa array dalam memori(pencarian internal), bisa juga pada file pada external storage(pencarian external).
- Ada dua macam teknik searching yaitu :

 1. [Sequential Searching](https://github.com/MeiLing19/ALGORITMA-DAN-STRUKTUR-DATA-ASSIGNMENT/tree/main/SEARCHING/SEQUENTIAL%20SEARCHING)
    <br>↳ suatu teknik pencarian data dalam array (1 dimensi) yang akan menelusuri semua elemen-elemen array dari awal sampai akhir, dimana data-data tidak perlu diurutkan terlebih dahulu. Pencarian berurutan menggunakan prinsip sebagai berikut : data yang ada dibandingkan satu per satu secara berurutan dengan yang dicari sampai data tersebut ditemukan atau tidak ditemukan. </br>
    
 2. [Binary Search](https://github.com/MeiLing19/ALGORITMA-DAN-STRUKTUR-DATA-ASSIGNMENT/tree/main/SEARCHING/BINARY%20SEARCHING)
    <br>↳  suatu teknik pencarian data dalam array (1 dimensi) yang akan menelusuri semua elemen-elemen array dari awal sampai akhir, dimana data-data perlu diurutkan terlebih dahulu. Pencarian menggunakan prinsip sebagai berikut : </br>
    1. Mula-mula diambil posisi awal 0 dan posisi akhir = N-1, kemudian dicari posisi data tengah dengan rumus (posisi awal + posisi akhir)/2.
Kemudian data yang dicari dibandingkan dengan data tengah.
    2. Jika lebih kecil, proses dilakukan kembali tetapi posisi akhir dianggap sama dengan posisi tengah –1.
    3. Jika lebih besar, proses dilakukan kembali tetapi posisi awal dianggap sama dengan posisi tengah +1. Jika data sama, berarti ketemu.
