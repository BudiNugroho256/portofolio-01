package mansion_caretaker;

import java.util.ArrayList;
import java.util.Random;
import java.util.Scanner;

public class Main {
	
	Scanner scan = new Scanner(System.in);
	ArrayList<Helper> helpers = new ArrayList<>();
    Random random = new Random();
    int cookingTask = random.nextInt(7) + 2;
    int cleaningTask = 8 - cookingTask;
    int availableMove = 10;

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		new Main();
	}
	
	public Main() {
		int choice = 0;
	    helpers.add(new Human(2));
	    helpers.add(new Human(2));
		
		while(choice != 5 && availableMove > 0 && (cookingTask > 0 || cleaningTask > 0)) {
	    	System.out.println("Remaining moves: " + availableMove);
	    	System.out.println("Cooking task: " + cookingTask);
	    	System.out.println("Cleaning task: " + cleaningTask);
	    	System.out.println("-----------------------------------");
	    	System.out.printf("%-18s %-8s\n", "Helper type", "Stamina");
	    	System.out.println("-----------------------------------");
	    	for (int i = 0; i < helpers.size(); i++) {
	            System.out.printf("%-18s %-8d\n", "class " + helpers.get(i).getHelperType(), helpers.get(i).getStamina());
	        }
	    	System.out.println("-----------------------------------");
	    	System.out.println("1. Buy new robot");
	    	System.out.println("2. Recharge a robot");
	    	System.out.println("3. Perform a cooking task");
	    	System.out.println("4. Perform a cleaning task");
	    	System.out.println("5. Exit");
	    	System.out.print(">> ");
	    	choice = scan.nextInt();
	    	scan.nextLine();
	    	
	    	if(choice == 1) {
	    		buyRobot();
	    	}else if(choice == 2) {
	    		rechargeRobot();
	    	}else if(choice == 3) {
	    		performCooking();
	    	}else if(choice == 4) {
	    		performCleaning();
	    	}else if(choice == 5) {
            	System.out.println("Exiting..");
            	System.exit(0);
	    	}
		}
		
        if (availableMove <= 0) {
            System.out.println("You Lose!");
	    	System.out.println("Remaining moves: " + availableMove);
	    	System.out.println("Cooking task: " + cookingTask);
	    	System.out.println("Cleaning task: " + cleaningTask);
	    	System.out.println("-----------------------------------");
	    	System.out.printf("%-18s %-8s\n", "Helper type", "Stamina");
	    	System.out.println("-----------------------------------");
	    	for (int i = 0; i < helpers.size(); i++) {
	            System.out.printf("%-18s %-8d\n", "class " + helpers.get(i).getHelperType(), helpers.get(i).getStamina());
	        }
	    	System.out.println("-----------------------------------");
        } else {
            System.out.println("You Win!");
	    	System.out.println("Remaining moves: " + availableMove);
	    	System.out.println("Cooking task: " + cookingTask);
	    	System.out.println("Cleaning task: " + cleaningTask);
	    	System.out.println("-----------------------------------");
	    	System.out.printf("%-18s %-8s\n", "Helper type", "Stamina");
	    	System.out.println("-----------------------------------");
	    	for (int i = 0; i < helpers.size(); i++) {
	            System.out.printf("%-18s %-8d\n", "class " + helpers.get(i).getHelperType(), helpers.get(i).getStamina());
	        }
	    	System.out.println("-----------------------------------");
        }
		
	}
	
    public void buyRobot() {
        if (helpers.size() >= 4) {
            System.out.println("You cannot buy more robots!");
            System.out.println("Press enter to continue..");
            scan.nextLine();
            return;
        }

        System.out.println("Choose a robot type: ");
        System.out.println("1. Chef Robot");
        System.out.println("2. Cleaner Robot");
        System.out.print(">> ");
        int choice = scan.nextInt();
        scan.nextLine();

        Helper newRobot = null;
        if (choice == 1) {
            newRobot = new ChefRobot(3);
            helpers.add(newRobot);
            System.out.println("You bought a chef robot!");
            System.out.println("Press enter to continue..");
            scan.nextLine();
        } else if (choice == 2) {
            newRobot = new CleanerRobot(3);
            helpers.add(newRobot);
            System.out.println("You bought a cleaner robot!");
            System.out.println("Press enter to continue..");
            scan.nextLine();
        } else {
            System.out.println("Invalid choice!");
            System.out.println("Press enter to continue..");
            scan.nextLine();
            return;
        }
    
    }
    
    public void rechargeRobot() {
        boolean hasRobot = false;
        
        for (Helper helper : helpers) {
            if (helper instanceof ChefRobot || helper instanceof CleanerRobot) {
                hasRobot = true;
                break;
            }
        }

        if (!hasRobot) {
            System.out.println("You do not have any robots!");
            System.out.println("Press enter to continue..");
            scan.nextLine();
            return;
        }
        
        
    	System.out.println("-----------------------------------");
    	System.out.printf("%-2s %-18s %-8s\n", "No.", "Helper type", "Stamina");
    	System.out.println("-----------------------------------");
        int currentNumber = 1;
    	for (int i = 0; i < helpers.size(); i++) {
            if (helpers.get(i) instanceof ChefRobot || helpers.get(i) instanceof CleanerRobot) {
            	System.out.printf("%-2d %-18s %-8d\n", currentNumber, "class " + helpers.get(i).getHelperType(), helpers.get(i).getStamina());
            	currentNumber++;
            }
        }
    	System.out.println("-----------------------------------");
        System.out.print("Enter robot number to recharge: ");
        int choice = scan.nextInt();
        scan.nextLine();
        
        int selectedRobotIndex = -1;
        currentNumber = 1;
        for (int i = 0; i < helpers.size(); i++) {
            if (helpers.get(i) instanceof ChefRobot || helpers.get(i) instanceof CleanerRobot) {
                if (currentNumber == choice) {
                    selectedRobotIndex = i;
                    break;
                }
                currentNumber++;
            }
        }

        if (selectedRobotIndex == -1) {
            System.out.println("Invalid robot number");
            System.out.println("Press enter to continue..");
            scan.nextLine();
            return;
        }

        Helper selectedRobot = helpers.get(selectedRobotIndex);
        if (selectedRobot.getStamina() == 3) {
            System.out.println("This robot has full stamina");
            System.out.println("Press enter to continue..");
            scan.nextLine();
            return;
        } else {
            selectedRobot.reduceStamina(-1);
            availableMove--;
            System.out.println("This robot is recharged(+1 stamina)");
            System.out.println("Press enter to continue..");
            scan.nextLine();
        }
    }
    
    public void performCooking() {
        if (cookingTask == 0) {
            System.out.println("There are no cooking tasks left!");
            System.out.println("Press enter to continue..");
            scan.nextLine();
            return;
        }

        boolean chefRobotFound = false;
        for (Helper helper : helpers) {
            if (helper instanceof ChefRobot && helper.getStamina() > 0) {
                helper.doTask(new Cooking(helper.getHelperType()));
                cookingTask--;
                availableMove--;
                chefRobotFound = true;
                System.out.println("Press enter to continue..");
                scan.nextLine();
                break;
            }
        }

        if (!chefRobotFound) {
            boolean humanFound = false;
            for (Helper helper : helpers) {
                if (helper instanceof Human && helper.getStamina() > 0) {
                    helper.doTask(new Cooking(helper.getHelperType()));
                    cookingTask--;
                    availableMove--;
                    humanFound = true;
                    System.out.println("Press enter to continue..");
                    scan.nextLine();
                    break;
                }
            }

            if (!humanFound) {
                System.out.println("There are no available helpers to cook!");
                System.out.println("Press enter to continue..");
                scan.nextLine();
            }
        }
    }
    
    public void performCleaning() {
        if (cleaningTask == 0) {
            System.out.println("There are no cleaning tasks left!");
            System.out.println("Press enter to continue..");
            scan.nextLine();
            return;
        }

        boolean cleanerRobotFound = false;
        for (Helper helper : helpers) {
            if (helper instanceof CleanerRobot && helper.getStamina() > 0) {
                helper.doTask(new Cleaning(helper.getHelperType()));
                cleaningTask--;
                availableMove--;
                cleanerRobotFound = true;
                System.out.println("Press enter to continue..");
                scan.nextLine();
                break;
            }
        }

        if (!cleanerRobotFound) {
            boolean humanFound = false;
            for (Helper helper : helpers) {
                if (helper instanceof Human && helper.getStamina() > 0) {
                    helper.doTask(new Cleaning(helper.getHelperType()));
                    cleaningTask--;
                    availableMove--;
                    humanFound = true;
                    System.out.println("Press enter to continue..");
                    scan.nextLine();
                    break;
                }
            }

            if (!humanFound) {
                System.out.println("There are no available helpers to clean!");
                System.out.println("Press enter to continue..");
                scan.nextLine();
            }
        }
    }
}
