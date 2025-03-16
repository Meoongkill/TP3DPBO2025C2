#include <bits/stdc++.h>
#include "UnifiedComputer.cpp"

using namespace std;

int main()
{
    // CPU
    CPU cpu1(8, 3.6, "Intel Core i9-9900K", "8 Core 16 Threads", "Intel");

    // RAM
    RAM ram1(16, "DDR4", "Corsair Vengeance LPX", "16GB (2x8GB) DDR4 DRAM 3200MHz C16", "Corsair");
    RAM ram2(16, "DDR4", "Corsair Vengeance LPX", "16GB (2x8GB) DDR4 DRAM 3200MHz C16", "Corsair");

    // Harddrive
    HARDDRIVE harddrive1(1000, "SSD", "Samsung 970 EVO", "1TB NVMe M.2 Internal SSD", "Samsung");
    HARDDRIVE harddrive2(2000, "HDD", "Seagate Barracuda", "2TB Internal Hard Drive HDD 3.5 Inch", "Seagate");

    // Monitor
    MONITOR monitor1("1920x1080", 24, "HDMI", "Asus");

    // Mouse
    MOUSE mouse1("Wireless", 1600, "Wireless", "Logitech");

    // Keyboard
    KEYBOARD keyboard1("Mechanical", "Black", "USB", "Razer");

    // Kursi
    KURSI kursi1("Gaming", "Lumbar Support", "Comfortable");

    // Membuat List RAM
    vector<RAM> listRAM;
    listRAM.push_back(ram1);
    listRAM.push_back(ram2);

    // Membuat List Harddrive
    vector<HARDDRIVE> listHarddrive;
    listHarddrive.push_back(harddrive1);
    listHarddrive.push_back(harddrive2);

    // Membuat Objek Komputer yang sudah disatukan secara lengkap
    UnifiedComputer computer1("Stella Artois", cpu1, listRAM, listHarddrive, monitor1, mouse1, keyboard1, kursi1);

    // Bakalan ngeluarin Output
    computer1.OutputKeluaran();
    return 0;
}