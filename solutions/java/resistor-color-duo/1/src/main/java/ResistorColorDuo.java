class ResistorColorDuo {

    private final String[] resistors = new String[] { 
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
    
    int value(String[] colors) {
        int c1 = 0, c2 = 0;
        for (int i = 0; i < resistors.length; i++) {
            if (resistors[i].equals(colors[0])) {
                c1 = i;
            }
            if (resistors[i].equals(colors[1])) {
                c2 = i;
            }
        }
        return (c1 * 10) + c2;
    }
}
