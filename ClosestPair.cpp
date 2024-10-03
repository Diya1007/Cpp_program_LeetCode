#include "utility.h"

using Cord = pair<float, float>;

float Euclidis(const Cord& p1, const Cord& p2) 
{
    return sqrt(pow(p1.first - p2.first, 2) + pow(p1.second - p2.second, 2));
}
bool compareX(const Cord& ax, const Cord& bx)
{
    return (ax.first < bx.first);
}
bool compareY(const Cord& ay, const Cord& by)
{
    return (ay.second < by.second);
}
void CloseStrip(vector<Cord>& strip, float& d, Cord& p1, Cord& p2) 
{
    sort(strip.begin(), strip.end(), compareY);

    for (size_t i = 0; i < strip.size(); ++i) 
    {
        for (size_t j = i + 1; j < strip.size() && (strip[j].second - strip[i].second) < d; ++j) 
        {
            float dist = Euclidis(strip[i], strip[j]);
            if (dist < d) {
                d = dist;
                p1 = strip[i];
                p2 = strip[j];
            }
        }
    }
}

void CloseRecMain(vector<Cord>& cords, size_t start, size_t end, float& d, Cord& p1, Cord& p2)
{
    if (end - start < 3)
    {
        for (size_t i = start; i < end; ++i)
        {
            for (size_t j = i + 1; j <= end; ++j)
            {
                float dist = Euclidis(cords[i], cords[j]);
                if (dist < d) {
                    d = dist;
                    p1 = cords[i];
                    p2 = cords[j];
                }
            }
        }
        return;
    }
    size_t mid = (start + end) / 2;
    float dl = INFINITY, dr = INFINITY;
    Cord l1, l2, r1, r2;

    CloseRecMain(cords, start, mid, dl, l1, l2);
    CloseRecMain(cords, mid + 1, end, dr, r1, r2);

    if (dl < dr) {
        d = dl;
        p1 = l1;
        p2 = l2;
    }
    else {
        d = dr;
        p1 = r1;
        p2 = r2;
    }
    vector<Cord> strip;
    for (size_t i = start; i <= end; ++i) {
        if (abs(cords[i].first - cords[mid].first) < d) {
            strip.push_back(cords[i]);
        }
    }
    CloseStrip(strip, d, p1, p2);
}

void Closest(vector<Cord>& cords) 
{
    sort(cords.begin(), cords.end(), compareX);
    float minDist = INFINITY;
    Cord p1, p2;
    CloseRecMain(cords, 0, cords.size() - 1, minDist, p1, p2);
    cout << "closest pair: " << "(" << p1.first << ", " << p1.second << ") , " << "(" << p2.first << ", " << p2.second << ")\n";
    cout << "Distance:  " << fixed <<setprecision(2) << minDist << '\n';
}

int main()
{
    ifstream file("points.txt");
    if (!file) 
    {
        cerr << "Error opening file\n";
        return 1;
    }
    map<float, float> unique;
    float x, y;
    while (file >> x >> y) 
    {
        if (file.fail()) 
        {
            cerr << "Invalid data\n";
            return 1;
        }
        unique[x] = y;  
    }
    vector<Cord> cords(unique.begin(), unique.end());

    if (cords.size() < 2) 
    {
        cerr << "2points required \n";
        return 1;
    }
    Closest(cords);
}

