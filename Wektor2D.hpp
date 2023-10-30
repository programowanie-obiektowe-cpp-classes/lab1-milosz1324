class Wektor2D
{
private:
    double x, y;
public:
    Wektor2D()  {
        x = 0.0;
        y = 0.0;
    }
    Wektor2D(double new_x, double new_y) {
        x = new_x;
        y = new_y;
    }
    void setX(double new_x) {
        x = new_x;
    }
    void setY(double new_y) {
        y = new_y;
    }
    double getX() {
        return x;
    }
    double getY() {
        return y;
    }
    Wektor2D operator+ (Wektor2D &nowy) {
        return Wektor2D(x + nowy.x, y + nowy.y);
    }
    double operator* (Wektor2D &nowy) {
        return x * nowy.x +  y * nowy.y;
    }
};
