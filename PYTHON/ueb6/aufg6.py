print [(a, b, c, d) for a in range(1, 20) for b in range(1, 20) for c in range(1, 20) for d in range(1, 20) if a**3+b**3 == c**3+d**3 and a != c and a != b and b != c and b != d]
