from Internal import Internal

class RAM(Internal):
    def __init__(self, kapasitas_ram=0, ddr="", nama="", spesifikasi="", merk_internal=""):
        super().__init__(nama, spesifikasi, merk_internal)
        self.kapasitas_ram = kapasitas_ram
        self.ddr = ddr

    def set_kapasitas_ram(self, kapasitas_ram):
        self.kapasitas_ram = kapasitas_ram

    def set_ddr(self, ddr):
        self.ddr = ddr

    def get_kapasitas_ram(self):
        return self.kapasitas_ram

    def get_ddr(self):
        return self.ddr