// struktura punkt

struct point
{
    double x;
    double y;
};

// długość odcinka
double distance(point A, point B);

// czy punkty tworzą trójkąt
bool is_triangle(point A, point B, point C);

// pole trójkąta
double area_triangle(point A, point B, point C);

// pole wielokąta wypukłego o n-kątach
double area_polygon(point P[], int n);

// czy punkt D należy do trójkąta ABC
bool is_inside(point A, point C, point D);
