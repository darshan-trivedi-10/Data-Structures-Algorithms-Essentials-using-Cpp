template <typename T>

class Vector
{
    // Data Members
    T *arr;
    int cs;
    int ms;
    // Constructor, Destructor, Method.

public:
    Vector(int Max_SIZE = 1)
    {
        cs = 0;
        ms = Max_SIZE;
        arr = new T[ms];
    }
    void push_back(const T d)
    {
        // Teo Cases;
        if (cs == ms)
        {
            // Create a new array and delete the old one, double the capacity
            T *oldarr = arr;
            ms *= 2;
            arr = new T[ms];
            // Copy the elements
            for (int i = 0; i < cs; i++)
            {
                arr[i] = oldarr[i];
            }

            // delete
            delete[] oldarr;
        }
        arr[cs++] = d;
    }

    void pop_back()
    {
        if (cs >= 0)
        {
            cs--;
        }
    }

    bool isempty()
    {
        return cs == 0;
    }

    // Front, Back, at(i), []

    T front() const
    {
        return arr[0];
    }

    T back() const
    {

        return arr[cs - 1];
    }

    T at(int i) const
    {
        return arr[i];
    }

    T size() const
    {
        return cs;
    }

    T capacity() const
    {
        return ms;
    }

    T operator[](const int i) const
    {
        return arr[i];
    }
};
