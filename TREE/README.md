# [TREE](https://github.com/MeiLing19/ALGORITMA-DAN-STRUKTUR-DATA-ASSIGNMENT/tree/main/TREE)

  - Tree(pohon) adalah kumpulan node yang saling terhubung satu sama lain dalam suatu kesatuan yang membentuk layaknya struktur sebuah pohon.
  - Struktur pohon adalah suatu cara merepresentasikan suatu struktur hirarki (one-to-many) secara grafis yang mirip sebuah pohon, walaupun pohon tersebut hanya tampak sebagai kumpulan node-node dari atas ke bawah.
  - Beberapa jenis tree adalah sebagai berikut :
  
1. [Tree Statik]
    <br>↳ isi node-nodenya tetap karena bentuk pohonnya sudah ditentukan.

2. [Tree Dinamik]
   <br>↳ isi nodenya berubah-ubah karena proses penambahan (insert) dan penghapusan (delete)

  - Node root adalah node khusus yang tercipta pertama kalinya. 
    Node root dalam sebuah tree adalah suatu node yang memiliki hierarki tertinggi dan dapat juga memiliki node-node anak, semua node dapat ditelusuri dari node root tersebut. 
    Node subtree adalah node lain di bawah node root saling terhubung satu sama lain.

  - [Terminologi Tree](https://github.com/MeiLing19/ALGORITMA-DAN-STRUKTUR-DATA-ASSIGNMENT/blob/main/TREE/terminologi%20tree.png)

  - Binary tree adalah suatu tree dengan syarat bahwa tiap node hanya boleh memiliki maksimal dua subtree dan kedua subtree tersebut harus tepisah, maksimal memiliki dua child.

  - Operasi-operasi tree : 
1. [Create]
    <br>↳ Membentuk sebuah tree baru yang kosong.
2. [Clear]
   <br>↳ Menghapus semua elemen tree.
3. [Empty]
   <br>↳ Mengetahui apakah tree kosong atau tidak.
4. [Insert]
   <br>↳ Menambah node ke dalam Tree secara rekursif. Jika data yang akan dimasukkan lebih besar daripada elemen root, maka akan diletakkan di node sebelah kanan, sebaliknya jika lebih kecil maka akan diletakkan di node sebelah kiri. Untuk data pertama akan menjadi elemen root.
5. [Find]
   <br>↳ Mencari node di dalam Tree secara rekursif sampai node tersebut ditemukan dengan menggunakan variable bantuan ketemu.
   Syaratnya adalah tree tidak boleh kosong.
6. [Count]
   <br>↳ Menghitung jumlah node dalam tree.
7. [Height]
   <br>↳ Mengetahui kedalaman sebuah tree.
8. [Find Min and Find Max]
   <br>↳ Mencari nilai terkecil dan terbesar pada tree.
9. [Child]
   <br>↳ Mengetahui anak dari sebuah node(jika punya).
10. [Transve]
   <br>↳ Transve adalah operasi kunjungan terhadap node-node dalam pohon dimana masing-masing node akan dikunjungi sekali.
   
   Beberapa jenis transverse pada tree adalah sebagai berikut :

 1. [Pre Order]
    <br>↳ cetak node yang dikunjungi, kunjungi left, kunjungi right (tengah, kiri, kanan)
    
 2. [In Order]
    <br>↳   kunjungi left, cetak node yang dikunjungi, kunjungi right (kiri, tengah, kanan)

 3. [Post Order]
    <br>↳  kunjungi left, kunjungi right, cetak node yang dikunjungi (kiri, kanan, tengah)
