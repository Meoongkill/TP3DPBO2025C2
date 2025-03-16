#pragma once
#include <iostream>
#include <string>

using namespace std;

class External
{
private:
    string Koneksi;
    string MerkExternal;

public:
    External()
    {
    }

    External(string Koneksi, string MerkExternal)
    {
        this->Koneksi = Koneksi;
        this->MerkExternal = MerkExternal;
    }

    // Setter
    void setKoneksi(string Koneksi)
    {
        this->Koneksi = Koneksi;
    }

    void setMerkExternal(string MerkExternal)
    {
        this->MerkExternal = MerkExternal;
    }

    // Getter
    string getKoneksi()
    {
        return Koneksi;
    }

    string getMerkExternal()
    {
        return MerkExternal;
    }

    ~External()
    {
    }
};
