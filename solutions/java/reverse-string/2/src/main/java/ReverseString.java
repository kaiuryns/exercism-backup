class ReverseString {

    String reverse(String inputString) {
        StringBuilder rev = new StringBuilder(); 
        for (int i = inputString.length() - 1; i >= 0; i--) {
            rev.append(inputString.charAt(i));
        }
        return rev.toString();
    }
}
