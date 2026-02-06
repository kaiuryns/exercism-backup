class SqueakyClean {
    static String clean(String identifier) {
        String word = "";
        for (int i = 0; i < identifier.length(); i++) {
            switch (identifier.charAt(i)) {
                case ' ':
                    word += '_';
                    break;
                case '4':
                    word += 'a';
                    break;
                case '3':
                    word += 'e';
                    break;
                case '0':
                    word += 'o';
                    break;
                case '1':
                    word += 'l';
                    break;
                case '7':
                    word += 't';
                    break;
                case '-':
                    i++;
                    word += Character.toUpperCase(identifier.charAt(i));
                    break;
                default:
                    if (Character.isLetter(identifier.charAt(i))){
                        word += identifier.charAt(i);
                    }
                    break;
            }
        }
        return word;
    }
}
