#include "std_lib_facilities.h"

// A)
class Vector2d{
public:
    double x;
    double y;
    Vector2d(double x, double y) : x{x}, y{y} {}

    double length() const {
        return sqrt(x*x + y*y);
    }

    Vector2d operator*(double k) const{
        return Vector2d{ this->x * k, this->y * k};
    }
};

Vector2d operator+(const Vector2d & lhs, const Vector2d & rhs){
    return Vector2d{lhs.x + rhs.x, lhs.y + rhs.y};
}


ostream & operator<<(ostream & os, const Vector2d & v){
    return os << "[ " << v.x << ", " << v.y << "]";
}

Vector2d vectorSum(const vector<Vector2d> & vectors){
    Vector2d sumVector{0, 0};
    for (auto v : vectors){
        sumVector = sumVector + v;
    }
    return sumVector;
}

void trackStats(const vector<Vector2d> & track){
    double length = 0;
    double maxSpeed = 0;
    for (auto v : track){
        length += v.length();

        if (v.length() > maxSpeed){
            maxSpeed = v.length(); // km / 10 min
        }
    }
    maxSpeed = maxSpeed * 100; // Convert from km/10 min to m/min
    Vector2d endPos = vectorSum(track);

    cout.precision(3);
    cout << fixed << "Length: " << length << " km, ";
    cout << "max-speed: " << maxSpeed << " m/min,";
    cout << " ended at " << endPos << endl;
}

int main(){
    Vector2d v{3, 4};
    Vector2d w(5, 7);

    Vector2d u = v + w;
    u = u * 2;

    cout << u.x << ", " << u.y << endl;
    cout << u << endl;

    vector<Vector2d> track = {{10000.0, 0.5}, {2.0, 0.0}, {1.0, 1.0}, {-1.0, 2.0}, {-1.0, 0.0}, {-1.0, -1.0}};
    trackStats(track);

    return 0;
}
