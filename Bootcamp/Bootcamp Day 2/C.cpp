G = 0;
for (i = 1; i < N; i++)
  for (j = i+1; j <= N; j++) 
    G += gcd(i, j);