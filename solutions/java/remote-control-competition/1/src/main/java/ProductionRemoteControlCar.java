class ProductionRemoteControlCar implements RemoteControlCar, Comparable<ProductionRemoteControlCar> {
    private int units = 0;
    private int victories = 0;
    
    public void drive() {
        units += 10;
    }

    public int getDistanceTravelled() {
        return units;
    }

    public int getNumberOfVictories() {
        return victories;
    }

    public void setNumberOfVictories(int numberOfVictories) {
        victories = numberOfVictories;
    }

    public int compareTo(ProductionRemoteControlCar other) {
        return Integer.compare(other.victories, this.victories);
    }
}
