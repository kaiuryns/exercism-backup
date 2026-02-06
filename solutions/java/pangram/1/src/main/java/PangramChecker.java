public class PangramChecker {
    private String alphabet = "abcdefghijklmnopqrstuvwxyz";
    
    public boolean isPangram(String input) {
        if (input.isEmpty())
            return false;

        boolean have = false;
        String input_l = input.toLowerCase();
        
        for (char a : alphabet.toCharArray()) {
            for (char b : input_l.toCharArray()) {
                if (a == b) {
                    have = true;
                    break;
                }
            }
            if (!have)
                return false;
            have = false;
        }
        return true;
    }

}
