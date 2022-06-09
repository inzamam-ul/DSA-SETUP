double myPow(double x, int n) {
        long long int nn = n;
        if(n<0) nn = -1 * 1LL * n;
        double result = 1.0;
        while(nn>0){
            if(nn & 1){
                result = (result * x);
            }
            x = (x * x);
            nn >>= 1;
        }
        if(n<0) result = (double)(1.0) / (double)result;

        return result;
    }