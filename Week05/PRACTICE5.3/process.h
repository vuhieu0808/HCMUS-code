#pragma once

const float ESP = __FLT_EPSILON__;

struct Student {
    std::string id, name;
    float math, literature;
    
    float getGPA(void) const {
        return (math + literature) / 2.f;
    }

    bool operator < (const Student& other) const {
        return (*this).getGPA() + ESP < other.getGPA();
    }
};

void inputN(int& N);
void inputST(Student &st);
float ABS(float x, float y);
int compare(float x, float y);