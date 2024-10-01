//Budi Nugroho - 2602102025

package simplereminder;

import java.util.Scanner;
import java.util.ArrayList;

public class Main {
	
	public static boolean monthList(String month) {
		String[]monthLists = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
		for(String validMonth : monthLists) {
			if(validMonth.equals(month)) {
				return true;
			}
		}
		return false;
	}
	
	public static void reminderView(ArrayList<String> reminder, Scanner scan) {
		if(reminder.isEmpty()) {
			System.out.println("Reminder Empty!");
			System.out.println("Press Enter to continue...");
			return;
		}
		
		System.out.println("Reminder List");
		System.out.println("=============");
		for(int index = 0;index < reminder.size();index++) {
			System.out.println((index + 1) + ". " + reminder.get(index));
		}
		System.out.print("[Type reminder number to mark as done, or 0 to go back] : ");
		int choice = scan.nextInt();
		scan.nextLine();
		
		if(choice == 0) {
			return;
		}
		while(choice < 1 || choice > reminder.size()) {
			System.out.println("The number is invalid!");
			System.out.print("[Type reminder number to mark as done, or 0 to go back] : ");
			choice = scan.nextInt();

		}
		
		String removeReminder = reminder.remove(choice - 1);
		System.out.println("Reminder succesfully removed!");
		System.out.println("Press enter to continue...");
	}

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		ArrayList<String> reminder = new ArrayList<>();
		
		while(true) {
			System.out.println("Welcome to Reminder App!");
			System.out.println("===================");
			System.out.println("1. Add Reminder");
			System.out.println("2. View Reminder");
			System.out.println("3. Exit");
			System.out.print(">> ");
			int num = scan.nextInt();
			scan.nextLine();
			
			if(num == 1) {
				//Reminder Name
				System.out.print("Input reminder [5 - 25 characters] : ");
				String name = scan.nextLine();
				while(name.length() < 5 || name.length() > 25) {
					System.out.println("Please input reminder name between 5 - 25 characters");
					System.out.print("Input reminder [5 - 25 characters] : ");
					name = scan.nextLine();
				}
				
				//Reminder Month
				System.out.print("Input reminder Month [E.g: January | February | October (Case Sensitive)] : ");
				String month = scan.nextLine();
				while(!monthList(month)) {
					System.out.println("Please input month name in English (Case Sensitive)");
					System.out.print("Input reminder Month [E.g: January | February | October (Case Sensitive)] : ");
					month = scan.nextLine();
					monthList(month);
				}
				
				//Reminder Date
				System.out.print("Input reminder Date[1 - 30]: ");
				String date = scan.nextLine();
				while(!date.matches("[0-9]+") || Integer.parseInt(date) < 1 || Integer.parseInt(date) > 30) {
						if(!date.matches("[0-9]+")) {
							System.out.println("Please input numeric value");
							System.out.print("Input reminder Date[1 - 30]: ");
							date = scan.nextLine();
						}else if(Integer.parseInt(date) < 1 || Integer.parseInt(date) > 30) {
							System.out.println("Please input date value between 1 - 30");
							System.out.print("Input reminder Date[1 - 30]: ");
							date = scan.nextLine();
						}
				}				
				
				String finalReminder = name  + ", " + date + " " + month;
				System.out.println("Reminder added!");
				System.out.println("Press Enter to continue...");
				reminder.add(finalReminder);
//				System.out.println("");
//				System.out.println(finalReminder);
				
			}else if(num == 2) {
				reminderView(reminder, scan);
			}else if(num == 3) {
				System.out.println("Exiting...");
				System.exit(0);
			}else {
				System.out.println("Doesn't Exist!");
			}
		}
		
	}
}
