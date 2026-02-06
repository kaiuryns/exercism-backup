class SqueakyClean {
    static String clean(String identifier) {
        
        StringBuilder word = new StringBuilder();
        for (int i = 0; i < identifier.length(); i++) {
            
            switch (identifier.charAt(i)) {
                    
                case ' ':
                    word.append('_');
                    break;
                case '4':
                    word.append('a');
                    break;
                case '3':
                    word.append('e');
                    break;
                case '0':
                    word.append('o');
                    break;
                case '1':
                    word.append('l');
                    break;
                case '7':
                    word.append('t');
                    break;
                case '-':
                    i++;
                    if (i < identifier.length()) {
                        word.append(Character.toUpperCase(identifier.charAt(i)));
                    }
                    break;
                default:
                    if (Character.isLetter(identifier.charAt(i))) {
                        word.append(identifier.charAt(i));
                    }
                    break;
            }
        }
        return word.toString();
    }
}