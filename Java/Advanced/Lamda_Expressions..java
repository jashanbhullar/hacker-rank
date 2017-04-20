   public static PerformOperation is_odd() {
        return n -> (n & 1) == 1;
    }

    public static PerformOperation is_prime() {
        // O(n^(1/2)) runtime
        return n -> {
            if (n < 2) {
                return false;
            }
            int sqrt = (int) Math.sqrt(n);
            for (int i = 2; i <= sqrt; i++) {
                if (n % i == 0) {
                    return false;
                }
            }
            return true;
        };
    }

    public static PerformOperation is_palindrome() {
        return n -> {
            String original = Integer.toString(n);
            String reversed = new StringBuilder(Integer.toString(n)).reverse().toString();
            return original.equals(reversed);
        };
    }
}
