long fib_(long a, long b, int n) {
  return (--n > 0) ? (fib_(b, a + b, n)) : (a);
}

long fib(int n) {
  return fib_(0, 1, n);
}
