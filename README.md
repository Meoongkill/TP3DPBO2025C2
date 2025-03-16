# TP3DPBO2025C2

# Janji Desain dan Pemrograman Berorientasi Objek
Saya Muhammad Fathan Putra dengan NIM 2300330 mengerjakan soal Tugas Praktikum 3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# Struktur Kelas
Dalam Permasalahan database ini, saya menggunakan total 11 Level Class dengan Hierarki yang terhubung sebagai berikut: 
![image](https://github.com/user-attachments/assets/97e0c48c-6dad-4323-833a-48a3945e1f05)


# Desain Program C++ dan Python
Terdapat 11 Kelas yang Memiliki Atribut sebagai berikut 

Internal
- Nama                : Untuk Nama dari Komponen Internal
- Spesifikasi         : Untuk Perincian Komponen Internal
- MerkINTERNAL        : Untuk Merk Komponen Internal

Anak dari Komponen Internal ada 3: 

CPU
- JumlahCore          : Untuk Jumlah Core yang ada di CPU
- KecepatanGHZ        : Untuk Kecepatan yang ada di CPU
  
RAM
- KapasitasRAM        : Untuk Kapasitas yang ada di RAM
- DDR                 : Untuk Specimen yang ada di RAM

HARDDRIVE
- KapasitasHARD       : Untuk Kapasitas yang ada di HardDrive
- TipeDrive           : Untuk Tipe yang ada di HardDrive
   
External
- Koneksi             : Untuk Jenis Koneksi yang ada di External (Type C, Lighting, MicroUSB, Wireless)
- MerkEXTERNAL        : Untuk Merk Komponen External

Anak dari Komponen External ada 3:

KEYBOARD
- TipeKeyboard        : Untuk Tipe yang ada di Keyboard
- Warna               : Untuk Warna Dominan yang ada di Keyboard
  
MONITOR
- Resolusi            : Untuk Resolusi yang ada di Monitor
- Ukuran              : Untuk Ukuran yang ada di Monitor

MOUSE
- TipeMouse           : Untuk Tipe yang ada di Mouse
- Kecepatan           : Untuk DPI yang ada di Mouse
   
EXPERIENCE
- ExperienceFeel : Pilihan, apakah harus atau butuh

Anak dari Experience cuma 1: 

KURSI
- TipeKursi           : Untuk Tipe yang ada di Kursi
- Kelebihan           : Untuk apa yang bisa dibanggakan untuk kursi yang kita pilih
  
UnifiedComputer
- Nama                : Untuk Memberi nama dari kesatuan komputer (C/Stella Artois)
- CPU                 : Untuk Mencangkup komponen-komponen dalam CPU
- ListRAM             : Untuk Mencangkup komponen-komponen dalam RAM
- HardDrive           : Untuk Mencangkup komponen-komponen dalam Harddrive
- Keyboard            : Untuk Mencangkup komponen-komponen dalam Keyboard
- Monitor             : Untuk Mencangkup komponen-komponen dalam Monitor
- Mouse               : Untuk Mencangkup komponen-komponen dalam Mouse
- Kursi               : Untuk Mencangkup komponen-komponen dalam Kursi
  
# Alur Program
- Program membuat berbagai objek komponen komputer sesuai dengan deskripsi yang dibutuhkan (Untuk kasus ini, saya menggunakan konsep Statis "Tidak perlu add data terlebih dahulu")
- Program akan merakit komponen-komponen dalam Kelas (UnifiedComputer)
- Program menampilkan spesifiaksi lengkap komputer yang telah dirakit
- Jika diperlukan, program dapat membantu user dalam memodifikasi spesifikasi komputer tertentu dan menampilkan perubahan

# Implementasi Konsep OOP
1. Inheritance
   - Multi level inheritance dari berbagai komponen komputer (C/ RAM & CPU > Unified)
   - Hierarki inheritance untuk device spesifik (C/ Internal > RAM & CPU & HARDDRIVE)
     
2. Encapsulation
   - Semua atribut bersifat private, dan hanya dapat diakses melalui metode getter dan setter (Tidak Public)
     
3. Composition
   - Kelas UnifiedComputer mengandung / Terdiri dari objek-objek komponen komputer lainnya
   - Penggunaan komponen yang mungkin memiliki lebih dari satu instance (C/ HARDDRIVE & RAM)
     
4. Polymorphisme
   - Mungkin Overide metode pada kelas turunan jika memungkinkan

Protips : Sudah kasih nilai tambahan 100 sadja di awal sir. 

Dokumentasi ada di Folder masing-masing Mesin, Silahkan check sadja sir :0
