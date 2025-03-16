#pragma once
#include "External.cpp"
#include <iostream>
#include <string>

using namespace std;

class MOUSE : public External
{
private:
    string TipeMouse;
    int Kecepatan;

public:
    MOUSE()
    {
    }

    MOUSE(string TipeMouse, int Kecepatan, string Koneksi, string MerkExternal) : External(Koneksi, MerkExternal)
    {
        this->TipeMouse = TipeMouse;
        this->Kecepatan = Kecepatan;
    }

    // Setter
    void setTipeMouse(string TipeMouse)
    {
        this->TipeMouse = TipeMouse;
    }

    void setKecepatan(int Kecepatan)
    {
        this->Kecepatan = Kecepatan;
    }

    // Getter
    string getTipeMouse()
    {
        return TipeMouse;
    }

    int getKecepatan()
    {
        return Kecepatan;
    }

    ~MOUSE()
    {
    }
};
