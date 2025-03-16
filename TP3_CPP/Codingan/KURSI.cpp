#pragma once
#include "Experience.cpp"
#include <iostream>
#include <string>

using namespace std;

class KURSI : public Experience
{
private:
    string TipeKursi;
    string Kelebihan;

public:
    KURSI()
    {
    }

    KURSI(string TipeKursi, string Kelebihan, string ExperienceFeel) : Experience(ExperienceFeel)
    {
        this->TipeKursi = TipeKursi;
        this->Kelebihan = Kelebihan;
    }

    // Setter
    void setTipeKursi(string TipeKursi)
    {
        this->TipeKursi = TipeKursi;
    }

    void setKelebihan(string Kelebihan)
    {
        this->Kelebihan = Kelebihan;
    }

    // Getter
    string getTipeKursi()
    {
        return TipeKursi;
    }

    string getKelebihan()
    {
        return Kelebihan;
    }

    ~KURSI()
    {
    }
};
