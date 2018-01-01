#ifndef PROJECT_H
#define PROJECT_H

#include <vector>
#include <ostream>


using namespace std;


template<class T> ostream& operator<< (ostream& output, const vector<T>& array)
{
    output << " " << array[0];
    for (size_t i = 1; i < array.size(); i++)
        output << " " << array[i];
    output << " " << endl;

    return output;
};

#endif // PROJECT_H
