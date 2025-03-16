from Experience import Experience

class KURSI(Experience):
    def __init__(self, tipe_kursi="", kelebihan="", experience_feel=""):
        super().__init__(experience_feel)
        self.tipe_kursi = tipe_kursi
        self.kelebihan = kelebihan

    def set_tipe_kursi(self, tipe_kursi):
        self.tipe_kursi = tipe_kursi

    def set_kelebihan(self, kelebihan):
        self.kelebihan = kelebihan

    def get_tipe_kursi(self):
        return self.tipe_kursi

    def get_kelebihan(self):
        return self.kelebihan