long long moduloMultiplication(long long a, long long b,long long mod) 
{ 
    long long res = 0; 
    a %= mod; 
    while (b) 
    { 
        if (b & 1) 
            res = (res + a) % mod; 
        a = (2 * a) % mod; 
        b >>= 1;  
    } 
    return res; 
} 
int main() 
{ 
    long long a,b,m;
    scanf("%lld%lld%lld", &a, &b, &m);
    printf("%lld", moduloMultiplication(a, b, m)); 
    return 0; 
} 