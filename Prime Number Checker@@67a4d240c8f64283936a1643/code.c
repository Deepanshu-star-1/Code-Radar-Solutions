int isPrime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime
    }
    for (int i = 2; i< num; i++) { // Check up to the square root of num
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Is a prime number
}