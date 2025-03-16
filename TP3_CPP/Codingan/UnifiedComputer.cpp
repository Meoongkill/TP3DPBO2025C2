#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Internal.cpp"
#include "External.cpp"
#include "Experience.cpp"
#include "KEYBOARD.cpp"
#include "MOUSE.cpp"
#include "MONITOR.cpp"
#include "RAM.cpp"
#include "HARDDRIVE.cpp"
#include "CPU.cpp"
#include "KURSI.cpp"

using namespace std;

class UnifiedComputer
{
private:
    string Nama;
    CPU Cpu;
    vector<RAM> ListRAM;
    vector<HARDDRIVE> Harddrive;
    MONITOR Monitor;
    MOUSE Mouse;
    KEYBOARD Keyboard;
    KURSI Kursi;

public:
    UnifiedComputer()
    {
    }

    UnifiedComputer(string Nama, CPU Cpu, vector<RAM> ListRAM, vector<HARDDRIVE> Harddrive, MONITOR Monitor, MOUSE Mouse, KEYBOARD Keyboard, KURSI Kursi)
    {
        this->Nama = Nama;
        this->Cpu = Cpu;
        this->ListRAM = ListRAM;
        this->Harddrive = Harddrive;
        this->Monitor = Monitor;
        this->Mouse = Mouse;
        this->Keyboard = Keyboard;
        this->Kursi = Kursi;
    }

    // Setter
    void setNama(string Nama)
    {
        this->Nama = Nama;
    }

    void setCpu(CPU Cpu)
    {
        this->Cpu = Cpu;
    }

    void setListRAM(vector<RAM> ListRAM)
    {
        this->ListRAM = ListRAM;
    }

    void setHarddrive(vector<HARDDRIVE> Harddrive)
    {
        this->Harddrive = Harddrive;
    }

    void setMonitor(MONITOR Monitor)
    {
        this->Monitor = Monitor;
    }

    void setMouse(MOUSE Mouse)
    {
        this->Mouse = Mouse;
    }

    void setKeyboard(KEYBOARD Keyboard)
    {
        this->Keyboard = Keyboard;
    }

    void setKursi(KURSI Kursi)
    {
        this->Kursi = Kursi;
    }

    // Getter
    string getNama()
    {
        return Nama;
    }

    CPU getCpu()
    {
        return Cpu;
    }

    vector<RAM> getListRAM()
    {
        return ListRAM;
    }

    vector<HARDDRIVE> getHarddrive()
    {
        return Harddrive;
    }

    MONITOR getMonitor()
    {
        return Monitor;
    }

    MOUSE getMouse()
    {
        return Mouse;
    }

    KEYBOARD getKeyboard()
    {
        return Keyboard;
    }

    KURSI getKursi()
    {
        return Kursi;
    }

    // Buat ngeluarin output ke layar
    void OutputKeluaran()
    {
        // Informasi General
        cout << "Berikut Informasi Komputer Lengkap dari Acin Komputer : " << endl;
        cout << "Nama Computer         : " << this->getNama() << std::endl;
        cout << "\n"
             << endl;

        // Langsung CPU
        cout << ">>>>>> CPU <<<<<<" << endl;
        cout << "Spesifikasi CPU       : " << endl;
        cout << "Nama CPU              : " << this->getCpu().getNama() << endl;
        cout << "Spesifikasi CPU       : " << this->getCpu().getSpesifikasi() << endl;
        cout << "Merk CPU              : " << this->getCpu().getMerkINTERNAL() << endl;
        cout << "Jumlah Core           : " << this->getCpu().getJumlahCore() << endl;
        cout << "Kecepatan CPU         : "
             << this->getCpu().getKecepatanGHZ() << " GHz" << endl;

        cout << "\n"
             << endl;

        // Kita lanjut ke RAM
        cout << ">>>>>> RAM <<<<<<" << endl;
        cout << "Spesifikasi RAM : " << endl;
        for (int i = 0; i < this->getListRAM().size(); i++)
        {
            cout << "Nama RAM             : " << this->getListRAM()[i].getNama() << endl;
            cout << "Spesifikasi RAM      : " << this->getListRAM()[i].getSpesifikasi() << endl;
            cout << "Merk RAM             : " << this->getListRAM()[i].getMerkINTERNAL() << endl;
            cout << "Kapasitas RAM        : " << this->getListRAM()[i].getKapasitasRAM() << " GB" << endl;
            cout << "DDR                  : "
                 << this->getListRAM()[i].getDDR() << std::endl;
            cout << "\n"
                 << endl;
        }

        // Kita lanjut ke Harddrive
        cout << ">>>>>> Harddrive <<<<<<" << endl;
        cout << "Spesifikasi Harddrive     : " << endl;
        for (int i = 0; i < this->getHarddrive().size(); i++)
        {
            cout << "Nama Harddrive        : " << this->getHarddrive()[i].getNama() << endl;
            cout << "Spesifikasi Harddrive : " << this->getHarddrive()[i].getSpesifikasi() << endl;
            cout << "Merk Harddrive        : " << this->getHarddrive()[i].getMerkINTERNAL() << endl;
            cout << "Kapasitas Harddrive   : " << this->getHarddrive()[i].getKapasitasHARD() << " GB" << endl;
            cout << "Tipe Drive            : "
                 << this->getHarddrive()[i].getTipeDrive() << std::endl;
            cout << "\n"
                 << endl;
        }

        // Kita lanjut ke Monitor
        cout << ">>>>>> Monitor <<<<<<" << endl;
        cout << "Spesifikasi Monitor     : " << endl;
        cout << "Resolusi Monitor        : " << this->getMonitor().getResolusi() << endl;
        cout << "Ukuran Monitor          : " << this->getMonitor().getUkuran() << " Inch" << endl;
        cout << "Koneksi Monitor         : " << this->getMonitor().getKoneksi() << endl;
        cout << "Merk Monitor            : "
             << this->getMonitor().getMerkExternal() << std::endl;
        cout << "\n"
             << endl;

        // Kita lanjut ke Mouse
        cout << ">>>>>> Mouse <<<<<<" << endl;
        cout << "Spesifikasi Mouse       : " << endl;
        cout << "Tipe Mouse              : " << this->getMouse().getTipeMouse() << endl;
        cout << "Kecepatan Mouse         : " << this->getMouse().getKecepatan() << " DPI" << endl;
        cout << "Koneksi Mouse           : " << this->getMouse().getKoneksi() << endl;
        cout << "Merk Mouse              : "
             << this->getMouse().getMerkExternal() << std::endl;
        cout << "\n"
             << endl;

        // Kita lanjut ke Keyboard
        cout << ">>>>>> Keyboard <<<<<<" << endl;
        cout << "Spesifikasi Keyboard    : " << endl;
        cout << "Tipe Keyboard           : " << this->getKeyboard().getTipeKeyboard() << endl;
        cout << "Warna Keyboard          : " << this->getKeyboard().getWarna() << endl;
        cout << "Koneksi Keyboard        : " << this->getKeyboard().getKoneksi() << endl;
        cout << "Merk Keyboard           : "
             << this->getKeyboard().getMerkExternal() << std::endl;
        cout << "\n"
             << endl;

        // Kita lanjut ke Kursi
        cout << ">>>>>> Kursi <<<<<<" << endl;
        cout << "Spesifikasi Kursi       : " << endl;
        cout << "Tipe Kursi              : " << this->getKursi().getTipeKursi() << endl;
        cout << "Kelebihan Kursi         : " << this->getKursi().getKelebihan() << endl;
        cout << "Experience Kursi        : "
             << this->getKursi().getExperienceFeel() << std::endl;
        cout << "\n"
             << endl;
    }

    ~UnifiedComputer()
    {
    }
};