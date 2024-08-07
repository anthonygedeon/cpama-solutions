#define DISP(f, n) (printf(#f "(%g) = %g\n", (n), (f(n))))
#define DISP2(f, x, y) (printf(#f "(%g, %g) = %g\n", (x), (y), (f((x), (y)))))

int main(void) {
	return 0;
}
