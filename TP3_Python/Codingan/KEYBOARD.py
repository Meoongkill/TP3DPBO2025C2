from External import External

class KEYBOARD(External):
    def __init__(self, tipe_keyboard="", warna="", koneksi="", merk_external=""):
        super().__init__(koneksi, merk_external)
        self.tipe_keyboard = tipe_keyboard
        self.warna = warna

    def set_tipe_keyboard(self, tipe_keyboard):
        self.tipe_keyboard = tipe_keyboard

    def set_warna(self, warna):
        self.warna = warna

    def get_tipe_keyboard(self):
        return self.tipe_keyboard

    def get_warna(self):
        return self.warna