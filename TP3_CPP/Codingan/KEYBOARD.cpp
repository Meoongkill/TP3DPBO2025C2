#pragma once
#include "External.cpp"
#include <iostream>
#include <string>

using namespace std;

class KEYBOARD : public External
{
private:
    string TipeKeyboard;
    string Warna;

public:
    KEYBOARD()
    {
    }

    KEYBOARD(string TipeKeyboard, string Warna, string Koneksi, string MerkExternal) : External(Koneksi, MerkExternal)
    {
        this->TipeKeyboard = TipeKeyboard;
        this->Warna = Warna;
    }

    // Setter
    void setTipeKeyboard(string TipeKeyboard)
    {
        this->TipeKeyboard = TipeKeyboard;
    }

    void setWarna(string Warna)
    {
        this->Warna = Warna;
    }

    // Getter
    string getTipeKeyboard()
    {
        return TipeKeyboard;
    }

    string getWarna()
    {
        return Warna;
    }

    ~KEYBOARD()
    {
    }
};
