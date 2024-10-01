package mansion_caretaker;

public abstract class Helper {
	protected int stamina;
	public abstract String getHelperType();
    public abstract void doTask(TaskInterface task);

	public Helper(int stamina) {
		super();
		this.stamina = stamina;
	}

	public int getStamina() {
		return stamina;
	}

	public void setStamina(int stamina) {
		this.stamina = stamina;
	}
	
    public void reduceStamina(int amount) {
        stamina -= amount;
        if (stamina < 0) {
            stamina = 0;
        }
    }
	
}
