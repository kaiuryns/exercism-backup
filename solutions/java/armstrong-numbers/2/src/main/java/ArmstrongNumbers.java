class ArmstrongNumbers {

    private int pow(int base, int exp) {
        int r = 1;
        while (exp-- > 0) r *= base;
        return r;
    }
    
    boolean isArmstrongNumber(int numberToCheck) {
        String values = String.valueOf(numberToCheck);
        int len = values.length();
        int result = 0;
        
        for (char d : values.toCharArray()) {
            int digit = d - '0';
            result += pow(digit, len);
        }
        return result == numberToCheck;
    }

}
