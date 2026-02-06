class ReverseString {

    String reverse(String inputString) {
        StringBuilder rev = new StringBuilder(); 
        for (char c : inputString.toCharArray()) {
            rev.insert(0, c);
        }
        return rev.toString();
    }
}
