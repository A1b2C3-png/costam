
// odleglosc miedzy punktami(obliczamy przez pitagorasa)
#include <cmath>
#include "geometry.h"

double distance(point A, point B)
{
     return sqrt((B.x - A.x) * (B.x - A.x) + (B.y - A.y) * (B.y - A.y));
}



//tu sprawdzamy czy podane punkty (A , B ,C) tworza trojkat ,pole ktorego !=0


bool is_triangle(point A, point B, point C)
{
    double area = 0.5 * fabs(A.x * (B.y - C.y) + B.x * (C.y - A.y) + C.x * (A.y - B.y));
    return area > 0;
}


//obliczmy pole trojkata

double area_triangle(point A, point B , point C)
{
        return 0.5 * fabs(A.x * (B.y - C.y) + B.x * (C.y - A.y) + C.x * (A.y - B.y));
}


// obliczamy pole wielokąta wypukłego o n-kątach za pomoca wzoru shoelace'a

double area_polygon(point P[], int n)

{
    double area;
  for (int i = 0 ; i < n ; i++ )
  {
   int j = (i + 1) % n;
   area += (P[i].x * P[j].y) - (P[i].y *P[j].x);
  }
  
  return 0.5* fabs(area);

}


//czy ponkt D nalezy do trojkata ABC

bool is_inside(point A, point B, point C, point D)
{
  double total = area_triangle(A , B , C);
  double area1 = area_triangle(D , B , C);
  double area2 = area_triangle(A , D , C);
  double area3 = area_triangle(A , B , D);
  
   return fabs((area1 + area2 + area3)- total) < 1e-9;
}
