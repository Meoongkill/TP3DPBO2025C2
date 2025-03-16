#pragma once
#include <iostream>
#include <string>

using namespace std;

class Experience
{
private:
    string ExperienceFeel;

public:
    Experience()
    {
    }

    Experience(string ExperienceFeel)
    {
        this->ExperienceFeel = ExperienceFeel;
    }

    // Setter
    void setExperienceFeel(string ExperienceFeel)
    {
        this->ExperienceFeel = ExperienceFeel;
    }

    // Getter
    string getExperienceFeel()
    {
        return ExperienceFeel;
    }

    ~Experience()
    {
    }
};
