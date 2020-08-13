#include <stdio.h>
#include <math.h>

int main() {
  int a, b, c, d;
  double root1, root2;

  printf("  Enter a, b and c  : \n");
  scanf("%d%d%d", &a, &b, &c);

  d = b*b - 4*a*c;

  if (d < 0) { 
    printf(" First root = %.2lf + i%.2lf\n", -b/(double)(2*a), sqrt(-d)/(2*a));
    printf(" Second root = %.2lf - i%.2lf\n", -b/(double)(2*a), sqrt(-d)/(2*a));
  }
  else { 
    root1 = (-b + sqrt(d))/(2*a);
    root2 = (-b - sqrt(d))/(2*a);

    printf(" First root = %.2lf\n", root1);
    printf(" Second root = %.2lf\n", root2);
  }
  return 0;
}