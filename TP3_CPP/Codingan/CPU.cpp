#pragma once
#include "Internal.cpp"
#include <iostream>
#include <string>

using namespace std;

class CPU : public Internal
{
private:
    int JumlahCore;
    float KecepatanGHZ;

public:
    CPU()
    {
    }

    CPU(int JumlahCore, float KecepatanGHZ, string Nama, string Spesifikasi, string MerkINTERNAL) : Internal(Nama, Spesifikasi, MerkINTERNAL)
    {
        this->JumlahCore = JumlahCore;
        this->KecepatanGHZ = KecepatanGHZ;
    }

    // Setter
    void setJumlahCore(int JumlahCore)
    {
        this->JumlahCore = JumlahCore;
    }

    void setKecepatanGHZ(float KecepatanGHZ)
    {
        this->KecepatanGHZ = KecepatanGHZ;
    }

    // Getter
    int getJumlahCore()
    {
        return JumlahCore;
    }

    float getKecepatanGHZ()
    {
        return KecepatanGHZ;
    }

    ~CPU()
    {
    }
};
