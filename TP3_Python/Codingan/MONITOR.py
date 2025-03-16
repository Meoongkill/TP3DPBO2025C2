from External import External

class MONITOR(External):
    def __init__(self, resolusi="", ukuran=0, koneksi="", merk_external=""):
        super().__init__(koneksi, merk_external)
        self.resolusi = resolusi
        self.ukuran = ukuran

    def set_resolusi(self, resolusi):
        self.resolusi = resolusi

    def set_ukuran(self, ukuran):
        self.ukuran = ukuran

    def get_resolusi(self):
        return self.resolusi

    def get_ukuran(self):
        return self.ukuran