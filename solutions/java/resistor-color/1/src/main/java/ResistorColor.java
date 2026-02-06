class ResistorColor {
    int colorCode(String color) {
            String[] c = colors();
        for (int i = 0; i < c.length; i++) {
            if (c[i].equals(color)) {
                return i;
            }
        }
        return -1;
    }

    String[] colors() {
        return new String[] {
        "black", 
        "brown", 
        "red",    
        "orange",
        "yellow", 
        "green",  
        "blue",  
        "violet",
        "grey",
        "white"
        };
    }
}
