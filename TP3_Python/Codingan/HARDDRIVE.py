from Internal import Internal

class HARDDRIVE(Internal):
    def __init__(self, kapasitas_hard=0, tipe_drive="", nama="", spesifikasi="", merk_internal=""):
        super().__init__(nama, spesifikasi, merk_internal)
        self.kapasitas_hard = kapasitas_hard
        self.tipe_drive = tipe_drive

    def set_kapasitas_hard(self, kapasitas_hard):
        self.kapasitas_hard = kapasitas_hard

    def set_tipe_drive(self, tipe_drive):
        self.tipe_drive = tipe_drive

    def get_kapasitas_hard(self):
        return self.kapasitas_hard

    def get_tipe_drive(self):
        return self.tipe_drive