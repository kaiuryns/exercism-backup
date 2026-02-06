class MicroBlog {
    public String truncate(String input) {
        StringBuilder result = new StringBuilder();
        int count = 0;

        for (int i = 0; i < input.length() && count < 5; ) {
            int codePoint = input.codePointAt(i);
            result.appendCodePoint(codePoint);
            i += Character.charCount(codePoint);
            count++;
        }
        return result.toString();
    }
}