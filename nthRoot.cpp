double NthRoot(int n, int m) {
  double low = 1.0;
  double high = (double)m;
  double mid; 
  double tolerance = 1e-6; 
  while (high - low > tolerance) {
    mid = (low + high) / 2.0;
    double rootValue = pow(mid, n);
    
    if (rootValue == m) {
      return mid;
    } else if (rootValue > m) {
      high = mid;
    } else {
      low = mid;
    }
  }
  
  return -1.0;
}