from External import External

class MOUSE(External):
    def __init__(self, tipe_mouse="", kecepatan=0, koneksi="", merk_external=""):
        super().__init__(koneksi, merk_external)
        self.tipe_mouse = tipe_mouse
        self.kecepatan = kecepatan

    def set_tipe_mouse(self, tipe_mouse):
        self.tipe_mouse = tipe_mouse

    def set_kecepatan(self, kecepatan):
        self.kecepatan = kecepatan

    def get_tipe_mouse(self):
        return self.tipe_mouse

    def get_kecepatan(self):
        return self.kecepatan