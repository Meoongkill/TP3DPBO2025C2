from Internal import Internal
from External import External
from Experience import Experience
from CPU import CPU
from RAM import RAM
from HARDDRIVE import HARDDRIVE
from MONITOR import MONITOR
from MOUSE import MOUSE
from KEYBOARD import KEYBOARD
from KURSI import KURSI

class UnifiedComputer:
    def __init__(self, nama="", cpu=None, list_ram=None, harddrive=None, monitor=None, mouse=None, keyboard=None, kursi=None):
        self.nama = nama
        self.cpu = cpu
        self.list_ram = list_ram if list_ram is not None else []
        self.harddrive = harddrive if harddrive is not None else []
        self.monitor = monitor
        self.mouse = mouse
        self.keyboard = keyboard
        self.kursi = kursi

    def set_nama(self, nama):
        self.nama = nama

    def set_cpu(self, cpu):
        self.cpu = cpu

    def set_list_ram(self, list_ram):
        self.list_ram = list_ram

    def set_harddrive(self, harddrive):
        self.harddrive = harddrive

    def set_monitor(self, monitor):
        self.monitor = monitor

    def set_mouse(self, mouse):
        self.mouse = mouse

    def set_keyboard(self, keyboard):
        self.keyboard = keyboard

    def set_kursi(self, kursi):
        self.kursi = kursi

    def output_keluaran(self):
        print("Berikut Informasi Komputer Lengkap:")
        print(f"Nama Computer: {self.nama}\n")

        print(">>>>>> CPU <<<<<<<")
        print(f"Nama CPU: {self.cpu.get_nama()}")
        print(f"Spesifikasi CPU: {self.cpu.get_spesifikasi()}")
        print(f"Merk CPU: {self.cpu.get_merk_internal()}")
        print(f"Jumlah Core: {self.cpu.get_jumlah_core()}")
        print(f"Kecepatan CPU: {self.cpu.get_kecepatan_ghz()} GHz\n")

        print(">>>>>> RAM <<<<<<<")
        for ram in self.list_ram:
            print(f"Nama RAM: {ram.get_nama()}")
            print(f"Spesifikasi RAM: {ram.get_spesifikasi()}")
            print(f"Merk RAM: {ram.get_merk_internal()}")
            print(f"Kapasitas RAM: {ram.get_kapasitas_ram()} GB")
            print(f"DDR: {ram.get_ddr()}\n")

        print(">>>>>> Harddrive <<<<<<<")
        for drive in self.harddrive:
            print(f"Nama Harddrive: {drive.get_nama()}")
            print(f"Spesifikasi Harddrive: {drive.get_spesifikasi()}")
            print(f"Merk Harddrive: {drive.get_merk_internal()}")
            print(f"Kapasitas Harddrive: {drive.get_kapasitas_hard()} GB")
            print(f"Tipe Drive: {drive.get_tipe_drive()}\n")

        print(">>>>>> Monitor <<<<<<<")
        print(f"Resolusi Monitor: {self.monitor.get_resolusi()}")
        print(f"Ukuran Monitor: {self.monitor.get_ukuran()} Inch")
        print(f"Koneksi Monitor: {self.monitor.get_koneksi()}")
        print(f"Merk Monitor: {self.monitor.get_merk_external()}\n")

        print(">>>>>> Mouse <<<<<<<")
        print(f"Tipe Mouse: {self.mouse.get_tipe_mouse()}")
        print(f"Kecepatan Mouse: {self.mouse.get_kecepatan()} DPI")
        print(f"Koneksi Mouse: {self.mouse.get_koneksi()}")
        print(f"Merk Mouse: {self.mouse.get_merk_external()}\n")

        print(">>>>>> Keyboard <<<<<<<")
        print(f"Tipe Keyboard: {self.keyboard.get_tipe_keyboard()}")
        print(f"Warna Keyboard: {self.keyboard.get_warna()}")
        print(f"Koneksi Keyboard: {self.keyboard.get_koneksi()}")
        print(f"Merk Keyboard: {self.keyboard.get_merk_external()}\n")

        print(">>>>>> Kursi <<<<<<<")
        print(f"Tipe Kursi: {self.kursi.get_tipe_kursi()}")
        print(f"Kelebihan Kursi: {self.kursi.get_kelebihan()}")
        print(f"Experience Kursi: {self.kursi.get_experience_feel()}\n")