package mansion_caretaker;

public class ChefRobot extends Helper{

	public ChefRobot(int stamina) {
		super(stamina);
		// TODO Auto-generated constructor stub
	}

	@Override
	public String getHelperType() {
		// TODO Auto-generated method stub
		return "ChefRobot";
	}

	@Override
	public void doTask(TaskInterface task) {
		// TODO Auto-generated method stub
        if (stamina > 0) {
            task.performTask();
            reduceStamina(1);
        } else {
            System.out.println("This chef robot has no stamina left.");
        }
	}
	
}
