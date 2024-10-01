package aiterniumshop;

import java.util.ArrayList;
import java.util.Scanner;

public class Main {
	Scanner scan = new Scanner(System.in);
	ArrayList<Item> itemList = new ArrayList<>();

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		new Main();
	}
	
	public Main() {
		int choice;
		
		while(true) {
            System.out.println("AIternium Shop Management");
            System.out.println("=======================");
            System.out.println("1. Add new Item");
            System.out.println("2. View item List");
            System.out.println("3. Remove item from the List");
            System.out.println("4. Exit");
            System.out.print(">> ");
            choice = scan.nextInt();
            scan.nextLine();
            
            if(choice == 1) {
            	addItem();
            }else if(choice == 2) {
            	viewItem();
            }else if(choice == 3) {
            	removeItem();
            }else if(choice == 4) {
            	System.out.println("Thank you for using the program");
            	System.exit(0);
            }
		}
		
	}
	
	public void addItem(){
		int itemChoice;
		String name;
		String rarity;
		String type;
		int level;
		int price;
		int point;
		
		while(true) {
	    	System.out.println("Choose Category");
	    	System.out.println("=======================");
	    	System.out.println("1. Add new Weapon");
	    	System.out.println("2. Add new Armor");
	    	System.out.println("3. Back");
	    	System.out.print(">> ");
	    	itemChoice = scan.nextInt();
	    	scan.nextLine();
	    	
	    	if(itemChoice == 1) {
	    		type = "Weapon";
	    		System.out.print("Input the Weapon Name [Minimum 3 words, Maximum 25 words] : ");
	    		name = scan.nextLine();
	    		while(name.length() < 3 || name.length() > 25) {
		    		System.out.print("Input the Weapon Name [Minimum 3 words, Maximum 25 words] : ");
		    		name = scan.nextLine();
				}
	    		
	    		System.out.print("Input the Weapon Rarity [Common|Rare|Epic|Legendary] : ");
	    		rarity = scan.nextLine();
	    		while(!rarity.matches("Common|Rare|Epic|Legendary")){
		    		System.out.print("Input the Weapon Rarity [Common|Rare|Epic|Legendary] : ");
		    		rarity = scan.nextLine();
	    		}
	    		
	    		System.out.print("Input the Weapon Level [Minimum 1, Maximum 1000] : ");
	    		level = scan.nextInt();
	    		scan.nextLine();
	    		while(level < 1 || level > 1000) {
		    		System.out.print("Input the Weapon Level [Minimum 1, Maximum 1000] : ");
		    		level = scan.nextInt();
		    		scan.nextLine();
	    		}
	    		
	    		System.out.print("Input the Weapon Price [Minimum 1000, Maximum 9999999] : ");
	    		price = scan.nextInt();
	    		scan.nextLine();
	    		while(price < 1000 || price > 9999999) {
		    		System.out.print("Input the Weapon Price [Minimum 1000, Maximum 9999999] : ");
		    		price = scan.nextInt();
		    		scan.nextLine();
	    		}
	    		
	    		System.out.print("Input the Attack Point [Minimum 1, Maximum 9999] : ");
	    		point = scan.nextInt();
	    		scan.nextLine();
	    		while(point < 1 || point > 9999) {
		    		System.out.print("Input the Attack Point [Minimum 1, Maximum 9999] : ");
		    		point = scan.nextInt();
		    		scan.nextLine();
	    		}
				Weapon weapon = new Weapon(name, rarity, type, level, price, point);
				itemList.add(weapon);
				
				System.out.println("New Item has been succesfully added!!");
				System.out.println("Press Enter to continue..");
				scan.nextLine();
	    		
	    	}else if(itemChoice == 2) {
	    		type = "Armor";
	    		System.out.print("Input the Armor Name [Minimum 3 words, Maximum 25 words] : ");
	    		name = scan.nextLine();
	    		while(name.length() < 3 || name.length() > 25) {
		    		System.out.print("Input the Armor Name [Minimum 3 words, Maximum 25 words] : ");
		    		name = scan.nextLine();
				}
	    		
	    		System.out.print("Input the Armor Rarity [Common|Rare|Epic|Legendary] : ");
	    		rarity = scan.nextLine();
	    		while(!rarity.matches("Common|Rare|Epic|Legendary")){
		    		System.out.print("Input the Armor Rarity [Common|Rare|Epic|Legendary] : ");
		    		rarity = scan.nextLine();
	    		}
	    		
	    		System.out.print("Input the Armor Level [Minimum 1, Maximum 1000] : ");
	    		level = scan.nextInt();
	    		scan.nextLine();
	    		while(level < 1 || level > 1000) {
		    		System.out.print("Input the Armor Level [Minimum 1, Maximum 1000] : ");
		    		level = scan.nextInt();
		    		scan.nextLine();
	    		}
	    		
	    		System.out.print("Input the Armor Price [Minimum 1000, Maximum 9999999] : ");
	    		price = scan.nextInt();
	    		scan.nextLine();
	    		while(price < 1000 || price > 9999999) {
		    		System.out.print("Input the Armor Price [Minimum 1000, Maximum 9999999] : ");
		    		price = scan.nextInt();
		    		scan.nextLine();
	    		}
	    		
	    		System.out.print("Input the Defense Point [Minimum 1, Maximum 9999] : ");
	    		point = scan.nextInt();
	    		scan.nextLine();
	    		while(point < 1 || point > 9999) {
		    		System.out.print("Input the Defense Point [Minimum 1, Maximum 9999] : ");
		    		point = scan.nextInt();
		    		scan.nextLine();
	    		}
				Armor armor = new Armor(name, rarity, type, level, price, point);
				itemList.add(armor);
				
				System.out.println("New Item has been succesfully added!!");
				System.out.println("Press Enter to continue..");
				scan.nextLine();
	    		
	    	}else if(itemChoice == 3) {
	    		break;
	    	}
		}
	}
	
	public void viewItem() {
		if (itemList.toArray().length > 0){
			System.out.printf("%-3s|%-20s|%-6s|%-10s|%-12s|%-13s|%-6s", 
		            "No", "Item Name", "Level", "Rarity", "Item Type", "att/deff pts", "Price" +
		            "\n==========================================================================================\n");
            Integer number = 1;
            for (int i = 0; i < itemList.toArray().length; i++) {
                System.out.println(String.format("%-3d|%s",number, itemList.get(i)));
                number++;
            }
            System.out.println("");
			System.out.println("Press Enter to continue..");
			scan.nextLine();
        }else {
            System.out.println("There's no item Available, add some first!");
			System.out.println("Press Enter to continue..");
			scan.nextLine();
        }
	}
	
	public void removeItem() {
		if (itemList.toArray().length > 0){
			System.out.printf("%-3s|%-20s|%-6s|%-10s|%-12s|%-13s|%-6s", 
		            "No", "Item Name", "Level", "Rarity", "Item Type", "att/deff pts", "Price" +
		            "\n==========================================================================================\n");
            Integer number = 1;
            for (int i = 0; i < itemList.toArray().length; i++) {
                System.out.println(String.format("%-3d|%s",number, itemList.get(i)));
                number++;
            }
            
            for (int i = 0; i < itemList.toArray().length; i++) {
                System.out.print("Input the number equipment to delete[1-" + itemList.size() + "] : ");
                int deletenumber =  scan.nextInt();
                scan.nextLine();
                deletenumber =  deletenumber-1;
                itemList.remove(deletenumber);
                System.out.println("Item Successfully Deleted!");
				System.out.println("Press Enter to continue..");
				scan.nextLine();
            }
        }else {
            System.out.println("There's no item Available, add some first!");
			System.out.println("Press Enter to continue..");
			scan.nextLine();
        }
	}

}
