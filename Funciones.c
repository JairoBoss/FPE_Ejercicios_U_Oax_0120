
#define PI 3.1416

float volumenDeEsfera(float radio) {
  return (4 * (PI * radio*radio*radio)) / 3;
}

float volumenDePiramide(float area, float altura) {
  return (area*altura)/3;
}
