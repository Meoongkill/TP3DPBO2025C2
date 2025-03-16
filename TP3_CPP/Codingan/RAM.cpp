#pragma once
#include "Internal.cpp"
#include <iostream>
#include <string>

using namespace std;

class RAM : public Internal
{
private:
    int KapasitasRAM;
    string DDR;

public:
    RAM()
    {
    }

    RAM(int KapasitasRAM, string DDR, string Nama, string Spesifikasi, string MerkINTERNAL) : Internal(Nama, Spesifikasi, MerkINTERNAL)
    {
        this->KapasitasRAM = KapasitasRAM;
        this->DDR = DDR;
    }

    // Setter
    void setKapasitasRAM(int KapasitasRAM)
    {
        this->KapasitasRAM = KapasitasRAM;
    }

    void setDDR(string DDR)
    {
        this->DDR = DDR;
    }

    // Getter
    int getKapasitasRAM()
    {
        return KapasitasRAM;
    }

    string getDDR()
    {
        return DDR;
    }

    ~RAM()
    {
    }
};
