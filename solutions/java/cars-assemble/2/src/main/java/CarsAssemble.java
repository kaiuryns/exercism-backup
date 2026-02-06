public class CarsAssemble {

    public static final int CARS_PER_HOUR = 221;
    double cars = 0;

    public double productionRatePerHour(int speed) {
        if (speed <= 0) return 0.0;
        double successRate = 1.0;
        
        if (speed >= 5) successRate -= 0.1;
        if (speed >= 9) successRate -= 0.1;
        if (speed >= 10) successRate -= 0.03;

        return (CARS_PER_HOUR * speed) * successRate;
    }

    public int workingItemsPerMinute(int speed) {
        return (int) (productionRatePerHour(speed) / 60);
    }

}
