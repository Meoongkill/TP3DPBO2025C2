#pragma once
#include "External.cpp"
#include <iostream>
#include <string>

using namespace std;

class MONITOR : public External
{
private:
    string Resolusi;
    int Ukuran;

public:
    MONITOR()
    {
    }

    MONITOR(string Resolusi, int Ukuran, string Koneksi, string MerkExternal) : External(Koneksi, MerkExternal)
    {
        this->Resolusi = Resolusi;
        this->Ukuran = Ukuran;
    }

    // Setter
    void setResolusi(string Resolusi)
    {
        this->Resolusi = Resolusi;
    }

    void setUkuran(int Ukuran)
    {
        this->Ukuran = Ukuran;
    }

    // Getter
    string getResolusi()
    {
        return Resolusi;
    }

    int getUkuran()
    {
        return Ukuran;
    }

    ~MONITOR()
    {
    }
};
