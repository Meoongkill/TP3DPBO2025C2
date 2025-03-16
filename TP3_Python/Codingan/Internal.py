class Internal:
    def __init__(self, nama="", spesifikasi="", merk_internal=""):
        self.nama = nama
        self.spesifikasi = spesifikasi
        self.merk_internal = merk_internal

    def set_nama(self, nama):
        self.nama = nama

    def set_spesifikasi(self, spesifikasi):
        self.spesifikasi = spesifikasi

    def set_merk_internal(self, merk_internal):
        self.merk_internal = merk_internal

    def get_merk_internal(self):
        return self.merk_internal

    def get_spesifikasi(self):
        return self.spesifikasi

    def get_nama(self):
        return self.nama