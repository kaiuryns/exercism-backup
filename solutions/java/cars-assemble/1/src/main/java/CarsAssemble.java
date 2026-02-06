public class CarsAssemble {

    public static final int CARS_PER_HOUR = 221;
    double cars = 0;

    public double productionRatePerHour(int speed) {
        if (speed == 0) return 0.0;
        double modifier = 1.0;
        
        if (speed >= 5) modifier = 0.9;
        if (speed == 9) modifier = 0.8;
        if (speed >= 10) modifier = 0.77;

        return (CARS_PER_HOUR * speed) * modifier;
    }

    public int workingItemsPerMinute(int speed) {
        return (int) (productionRatePerHour(speed) / 60);
    }

}
