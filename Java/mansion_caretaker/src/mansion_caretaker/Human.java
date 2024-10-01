package mansion_caretaker;

public class Human extends Helper{

	public Human(int stamina) {
		super(stamina);
		// TODO Auto-generated constructor stub
	}

	@Override
	public String getHelperType() {
		// TODO Auto-generated method stub
		return "Human";
	}

	@Override
	public void doTask(TaskInterface task) {
		// TODO Auto-generated method stub
        if (stamina > 0) {
            task.performTask();
            reduceStamina(1);
        } else {
            System.out.println("This human helper has no stamina left.");
        }
	}
	
}
