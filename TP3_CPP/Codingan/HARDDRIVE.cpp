#pragma once
#include "Internal.cpp"
#include <iostream>
#include <string>

using namespace std;

class HARDDRIVE : public Internal
{
private:
    int KapasitasHARD;
    string TipeDrive;

public:
    HARDDRIVE()
    {
    }

    HARDDRIVE(int KapasitasHARD, string TipeDrive, string Nama, string Spesifikasi, string MerkINTERNAL) : Internal(Nama, Spesifikasi, MerkINTERNAL)
    {
        this->TipeDrive = TipeDrive;
        this->KapasitasHARD = KapasitasHARD;
    }

    // Setter
    void setKapasitasHARD(int KapasitasHARD)
    {
        this->KapasitasHARD = KapasitasHARD;
    }

    void setTipeDrive(string TipeDrive)
    {
        this->TipeDrive = TipeDrive;
    }

    // Getter
    int getKapasitasHARD()
    {
        return KapasitasHARD;
    }

    string getTipeDrive()
    {
        return TipeDrive;
    }

    ~HARDDRIVE()
    {
    }
};
