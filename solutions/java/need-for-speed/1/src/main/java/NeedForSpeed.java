class NeedForSpeed {

    private final int speed;
    private final int batteryDrain;
    private int distance = 0;
    private int battery = 100;
    
    NeedForSpeed(int speed, int batteryDrain) {
        this.speed = speed;
        this.batteryDrain = batteryDrain;
    }

    public boolean batteryDrained() {
        
        if (battery - batteryDrain < 0) return true;
        return false;
    }

    public int distanceDriven() {
        return distance;
    }

    public void drive() {
        if (batteryDrained()) return;
        distance += speed;
        battery -= batteryDrain;
    }

    public static NeedForSpeed nitro() {
        return new NeedForSpeed(50, 4);
    }
}

class RaceTrack {

    private final int distance;
    
    RaceTrack(int distance) {
        this.distance = distance;
    }

    public boolean canFinishRace(NeedForSpeed car) {
        while (!car.batteryDrained()) car.drive();
        if (distance <= car.distanceDriven()) return true;
        return false;
    }
}
