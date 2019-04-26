typedef struct point *Point;

Point createPoint(float x, float y);
float ascissa(Point p);
float ordinata(Point p);
float distanza(Point p1, Point p2);
void sposta(Point p, float dx, float dy);
Point centroide(Point sequenza[], int size);
