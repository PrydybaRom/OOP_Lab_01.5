#pragma once
#include <string>
using namespace std;


class Pair {
private:
    int first;
    int second;

public:
    Pair(int first = 0, int second = 1) : first(first), second(second) {}

    int getFirst() const { return first; }
    int getSecond() const { return second; }
    
    void setFirst(int first) { this->first = first; }
    void setSecond(int second) { this->second = second; }

    void Display() const;
    void Read();

    bool operator>(const Pair& other) const {
        return (first > other.first) || (first == other.first && second > other.second);
    }
};