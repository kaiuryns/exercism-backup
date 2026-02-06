class ArmstrongNumbers {

    boolean isArmstrongNumber(int numberToCheck) {
        String values = String.valueOf(numberToCheck);
        int len = values.length();
        int result = 0;
        
        for (char d : values.toCharArray()) {
            int digit = d - '0';
            result += Math.pow(digit, len);
        }
        return result == numberToCheck;
    }

}
