package mansion_caretaker;

public class CleanerRobot extends Helper{

	public CleanerRobot(int stamina) {
		super(stamina);
		// TODO Auto-generated constructor stub
	}

	@Override
	public String getHelperType() {
		// TODO Auto-generated method stub
		return "CleanerRobot";
	}

	@Override
	public void doTask(TaskInterface task) {
		// TODO Auto-generated method stub
        if (stamina > 0) {
            task.performTask();
            reduceStamina(1);
        } else {
            System.out.println("This cleaner robot has no stamina left.");
        }
	}
	
}
