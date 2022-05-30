class ParkingSystem {
    private int smallCar;
    private int mediumCar;
    private int bigCar;
    
    public ParkingSystem(int big, int medium, int small) {
        this.smallCar = small;
        this.mediumCar = medium;
        this.bigCar = big;
    }
    
    public boolean addCar(int carType) {
        if(carType == 3 && this.smallCar > 0){
            this.smallCar--;
            return true;
        }
        else if(carType == 2 && this.mediumCar > 0) {
            this.mediumCar--;
            return true;
        } 
        else if(carType == 1 && this.bigCar > 0){
            this.bigCar--;
            return true;
        }
        return false;
    }
}
