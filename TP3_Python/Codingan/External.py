class External:
    def __init__(self, koneksi="", merk_external=""):
        self.koneksi = koneksi
        self.merk_external = merk_external

    def set_koneksi(self, koneksi):
        self.koneksi = koneksi

    def set_merk_external(self, merk_external):
        self.merk_external = merk_external

    def get_koneksi(self):
        return self.koneksi

    def get_merk_external(self):
        return self.merk_external