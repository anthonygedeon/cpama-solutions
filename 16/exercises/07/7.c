struct fraction {
	int numerator;
	int denominator;
};

struct fraction gcd(struct fraction f) {
	while (f.denominator) {
		int tmp = f.denominator;
		f.denominator = f.numerator % f.denominator;
		f.numerator = tmp;
	}
	return (struct fraction){f.numerator, f.denominator};
}

struct fraction add_fractions(struct fraction f1, struct fraction f2) {
    return gcd((struct fraction) {f1.numerator * f2.denominator +
        f2.numerator * f1.denominator, f1.denominator * f2.denominator});
}

struct fraction subtract_fractions(struct fraction f1, struct fraction f2) {
    return gcd((struct fraction) {f1.numerator * f2.denominator -
        f2.numerator * f1.denominator, f1.denominator * f2.denominator});
}

struct fraction multiply_fractions(struct fraction f1, struct fraction f2) {
    return gcd((struct fraction) {f1.numerator * f2.numerator,
        f1.denominator * f2.denominator});
}

struct fraction divide_fractions(struct fraction f1, struct fraction f2) {
    return gcd((struct fraction) {f1.numerator * f2.denominator,
        f1.denominator * f2.numerator});
}

