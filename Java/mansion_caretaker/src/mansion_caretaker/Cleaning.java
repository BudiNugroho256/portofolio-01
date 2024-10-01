package mansion_caretaker;

public class Cleaning implements TaskInterface{
	
    private String helperType;

    public Cleaning(String helperType) {
        this.helperType = helperType;
    }

    @Override
    public void performTask() {
        if (helperType.equals("Human")) {
            System.out.println("A human finished a cleaning task!");
        } else {
            System.out.println("A cleaner robot finished a cleaning task!");
        }
    }
	
}
