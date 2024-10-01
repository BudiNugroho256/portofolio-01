package mansion_caretaker;

public class Cooking implements TaskInterface{

    private String helperType;

    public Cooking(String helperType) {
        this.helperType = helperType;
    }

    @Override
    public void performTask() {
        if (helperType.equals("Human")) {
            System.out.println("A human finished a cooking task!");
        } else {
            System.out.println("A chef robot finished a cooking task!");
        }
    }
}
