#pragma once
#include <iostream>
#include <string>

using namespace std;

class Internal
{
private:
    string Nama;
    string Spesifikasi;
    string MerkINTERNAL;

public:
    Internal()
    {
    }

    Internal(string Nama, string Spesifikasi, string MerkINTERNAL)
    {
        this->MerkINTERNAL = MerkINTERNAL;
        this->Spesifikasi = Spesifikasi;
        this->Nama = Nama;
    }

    // Setter
    void setNama(string Nama)
    {
        this->Nama = Nama;
    }

    void setSpesifikasi(string Spesifikasi)
    {
        this->Spesifikasi = Spesifikasi;
    }

    void setMerkINTERNAL(string MerkINTERNAL)
    {
        this->MerkINTERNAL = MerkINTERNAL;
    }

    // Getter
    string getMerkINTERNAL()
    {
        return MerkINTERNAL;
    }

    string getSpesifikasi()
    {
        return Spesifikasi;
    }

    string getNama()
    {
        return Nama;
    }

    ~Internal()
    {
    }
};
