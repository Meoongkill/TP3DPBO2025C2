from CPU import CPU
from RAM import RAM
from HARDDRIVE import HARDDRIVE
from MONITOR import MONITOR
from MOUSE import MOUSE
from KEYBOARD import KEYBOARD
from KURSI import KURSI
from UnifiedComputer import UnifiedComputer

if __name__ == "__main__":
    cpu1 = CPU(8, 3.6, "Intel Core i9-9900K", "8 Core 16 Threads", "Intel")
    ram1 = RAM(16, "DDR4", "Corsair Vengeance LPX", "16GB (2x8GB) DDR4 DRAM 3200MHz C16", "Corsair")
    ram2 = RAM(16, "DDR4", "Corsair Vengeance LPX", "16GB (2x8GB) DDR4 DRAM 3200MHz C16", "Corsair")
    harddrive1 = HARDDRIVE(1000, "SSD", "Samsung 970 EVO", "1TB NVMe M.2 Internal SSD", "Samsung")
    harddrive2 = HARDDRIVE(2000, "HDD", "Seagate Barracuda", "2TB Internal Hard Drive HDD 3.5 Inch", "Seagate")
    monitor1 = MONITOR("1920x1080", 24, "HDMI", "Asus")
    mouse1 = MOUSE("Wireless", 1600, "Wireless", "Logitech")
    keyboard1 = KEYBOARD("Mechanical", "Black", "USB", "Razer")
    kursi1 = KURSI("Gaming", "Lumbar Support", "Comfortable")

    list_ram = [ram1, ram2]
    list_harddrive = [harddrive1, harddrive2]

    computer1 = UnifiedComputer("Stella Artois", cpu1, list_ram, list_harddrive, monitor1, mouse1, keyboard1, kursi1)
    computer1.output_keluaran()