#include <stdio.h> 
double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);
 
int main(void) {
  	int a, b, c, d, e;
  	double r, s, t, u, v;
  	//function calling (a-k)

    functionM(); // Pass

    a = functionM(); // Pass
    b = functionN(a, b); // Pass
    r = functionO(r,a,s,b); // Pass
    s = functionP(a,b,c,d,e); // Error parameters more than function parameters
    u = functionM(); // Pass
    c = d + functionN(r,s); // Pass
    t = s * functionO(r, a, r, a); // Pass
    a = v + functionP(r, s, t, t); // Type error double to int
    functionP(functionN(a, a), s, t, t+r); // Type error double to int
    v = functionP(functionN(a, a), s, t, t+r); // Type error double to int
}

