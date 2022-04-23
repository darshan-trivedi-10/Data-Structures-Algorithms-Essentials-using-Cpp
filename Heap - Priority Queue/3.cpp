#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

class car
{
public:
    string id;
    int x, y;
    car(string id, int x, int y)
    {
        this->id = id;
        this->x = x;
        this->y = y;
    }
    int dist() const
    {
        return x * x + y * y;
    }
};

class carcompare
{
public:
    bool operator()(const car a, const car b)
    {
        // Min -Max Heap
        return a.dist() < b.dist();
    }
};

bool cmp(car a, car b)
{
    return a.dist() < b.dist();
}
void printNearestCars(vector<car> cars, int k)
{
    // Create a max heap of size k
    priority_queue<car, vector<car>, carcompare> max_heap(cars.begin(), cars.begin() + k);
    for (int i = k; i < cars.size(); i++)
    {
        auto car = cars[i];
        if (car.dist() < max_heap.top().dist())
        {
            max_heap.pop(); // Remove the root node largest
            max_heap.push(car);
        }
    }

    // Print all the cars inside the heap they will be smallest
    vector<car> output;
    while (!max_heap.empty())
    {
        // cout << max_heap.top().id << endl;
        output.push_back(max_heap.top());
        max_heap.pop();
    }

    // sort(output.begin(), output.end(), cmp);
    reverse(output.begin(), output.end());
    for (auto it : output)
    {
        cout << it.id << endl;
    }
}

int main()
{
    priority_queue<pair<int, int>> pq;
    int n, k;
    cin >> n >> k;

    string id;
    int x, y;

    vector<car> cars;
    for (int i = 0; i < n; i++)
    {
        cin >> id >> x >> y;
        car a(id, x, y);
        cars.push_back(a);
    }

    printNearestCars(cars, k);
    return 0;
}

/*
input :
5 3 
c1 1 1
c2 2 1
c3 3 2
c4 0 1
c5 2 3

Output : c4
              c1
              c2
*/