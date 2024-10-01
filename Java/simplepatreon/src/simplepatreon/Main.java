//Budi Nugroho - 2602102025

package simplepatreon;

import java.util.Scanner;
import java.util.ArrayList;

public class Main {
	
    Scanner scan = new Scanner(System.in);
    ArrayList<PatreonUser> users = new ArrayList<>();

    private static PatreonUser findUser(ArrayList<PatreonUser> users, String username) {
        for (PatreonUser user : users) {
            if (user.getUsername().equals(username)) {
                return user;
            }
        }
        return null;
    }
    
    private static void insertNewWork(PatreonUser user, Scanner scanner) {
        System.out.println("Insert New Work");
        System.out.print("Enter work type (music, video, image): ");
        String workType = scanner.nextLine();
        String genreName = "";

        if (workType.equals("music")) {
            System.out.print("Enter genre name: ");
            genreName = scanner.nextLine();
        } else if (workType.equals("video")) {
            System.out.print("Enter video duration: ");
            genreName = scanner.nextLine();
        } else if (workType.equals("image")) {
            System.out.print("Enter image type (JPEG, PNG): ");
            genreName = scanner.nextLine();
        }

        System.out.print("Enter work title: ");
        String workTitle = scanner.nextLine();
        System.out.print("Enter subscription level (bronze, silver, gold): ");
        String subscriptionLevel = scanner.nextLine();
        
        user.insertNewWork(workType, genreName, workTitle, subscriptionLevel);
    }
    
    private static void supportCreator(PatreonUser user, ArrayList<PatreonUser> users, Scanner scanner) {
        System.out.println("Support a Creator");
        System.out.println("List of Unsubscribed Creator:");
        for (PatreonUser unsubscribedCreator : users) {
            if (!user.getUsername().equals(unsubscribedCreator.getUsername())) {
                System.out.println(unsubscribedCreator.getUsername());
            }
        }
        System.out.print("Enter a Username to support: ");
        String creatorUsername = scanner.nextLine();
        PatreonUser creatorToSupport = findUser(users, creatorUsername);

        if (creatorToSupport == null) {
            System.out.println("Creator not found.");
            return;
        }

        System.out.print("Enter subscription level (bronze, silver, gold): ");
        String subscriptionLevel = scanner.nextLine();

        switch (subscriptionLevel) {
        case "bronze":
            creatorToSupport.getSubscribersBronze().add(user);
            break;
        case "silver":
            creatorToSupport.getSubscribersSilver().add(user);
            break;
        case "gold":
            creatorToSupport.getSubscribersGold().add(user);
            break;
        default:
            System.out.println("Invalid subscription level.");
    }
    }

    public void viewAllSubscribers(PatreonUser user) {
        System.out.println("Bronze Subscribers:");
        for (PatreonUser subscriber : user.getSubscribersBronze()) {
            System.out.println(subscriber.getUsername());
        }
        System.out.println("Silver Subscribers:");
        for (PatreonUser subscriber : user.getSubscribersSilver()) {
            System.out.println(subscriber.getUsername());
        }
        System.out.println("Gold Subscribers:");
        for (PatreonUser subscriber : user.getSubscribersGold()) {
            System.out.println(subscriber.getUsername());
        }
    }
    
    public void viewWorks(PatreonUser user) {
        if (user.getWorks().isEmpty()) {
            System.out.println("No works uploaded yet.");
        } else {
            for (Work work : user.getWorks()) {
                System.out.println(work);
            }
        }
    }
    
    public void viewAccessibleWorks(PatreonUser user) {
        // Display accessible works based on the user's subscription level.
        System.out.println("Accessible Works:");
        for (Work work : user.getWorks()) {
            if (subscriptionLevelEquals(work.getSubscriptionLevel(), user)) {
                System.out.println(work);
            }
        }
    }

    private boolean subscriptionLevelEquals(String level, PatreonUser user) {
        return (level.equals("bronze") && user.getSubscribersBronze().contains(user)) ||
               (level.equals("silver") && user.getSubscribersSilver().contains(user) || user.getSubscribersBronze().contains(user)) ||
               (level.equals("gold") && user.getSubscribersGold().contains(user) || user.getSubscribersSilver().contains(user) || user.getSubscribersBronze().contains(user));
    }
    
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		new Main();
	}
	
	public Main(){
		PatreonUser currentUser = null;
		
		while(true) {
			if(currentUser == null) {
				System.out.println("Main Menu");
				System.out.println("1. Sign Up");
				System.out.println("2. Login");
				System.out.println("3. Exit");
				System.out.print(">> ");
				int num = scan.nextInt();
				scan.nextLine();
				
				if(num == 1) {
					System.out.println("Enter a new Username: ");
					System.out.print(">> ");
					String username = scan.nextLine();
					users.add(new PatreonUser(username));
				}else if(num == 2) {
					System.out.println("List of Username");
					for(PatreonUser user : users) {
						System.out.println(user.getUsername());
					}
					System.out.println("Enter a Username:");
					System.out.print(">> ");
					String login = scan.nextLine();
	                currentUser = findUser(users, login);
	                if(currentUser == null) {
	                	System.out.println("User not Found!");
	                }
				}else if(num == 3) {
					System.out.println("Exiting..");
					System.exit(0);
				}else {
					System.out.println("Please enter valid answer");
				}
			}else {
				System.out.println("User Menu");
				System.out.println("1. Insert new work");
				System.out.println("2. Support a creator");
				System.out.println("3. View all subcribers");
	            System.out.println("4. View your work");
	            System.out.println("5. View accessible work");
	            System.out.println("6. Log out");
	            System.out.print(">> ");
				int num = scan.nextInt();
				scan.nextLine();
				
				if(num == 1) {
					insertNewWork(currentUser, scan);
				}else if(num == 2) {
					supportCreator(currentUser, users, scan);
				}else if(num == 3) {
					viewAllSubscribers(currentUser);
				}else if(num == 4) {
					viewWorks(currentUser);
				}else if(num == 5) {
					viewAccessibleWorks(currentUser);
				}else if(num == 6) {
					currentUser = null;
					System.out.println("Log out..");
				}else {
					System.out.println("Please enter valid answer");
				}

			}

		}

	}
}