package simplepatreon;

import java.util.ArrayList;

public class PatreonUser {
    private String username;
    private ArrayList<Work> works = new ArrayList<>();
    private ArrayList<PatreonUser> supportedCreators = new ArrayList<>();
    private ArrayList<PatreonUser> subscribersBronze = new ArrayList<>();
    private ArrayList<PatreonUser> subscribersSilver = new ArrayList<>();
    private ArrayList<PatreonUser> subscribersGold = new ArrayList<>();
    
	public PatreonUser(String username) {
		super();
		this.username = username;
	}

	public String getUsername() {
		return username;
	}

	public void setUsername(String username) {
		this.username = username;
	}

	public ArrayList<Work> getWorks() {
		return works;
	}

	public void setWorks(ArrayList<Work> works) {
		this.works = works;
	}

	public ArrayList<PatreonUser> getSupportedCreators() {
		return supportedCreators;
	}

	public void setSupportedCreators(ArrayList<PatreonUser> supportedCreators) {
		this.supportedCreators = supportedCreators;
	}

    public ArrayList<PatreonUser> getSubscribersBronze() {
		return subscribersBronze;
	}

	public void setSubscribersBronze(ArrayList<PatreonUser> subscribersBronze) {
		this.subscribersBronze = subscribersBronze;
	}

	public ArrayList<PatreonUser> getSubscribersSilver() {
		return subscribersSilver;
	}

	public void setSubscribersSilver(ArrayList<PatreonUser> subscribersSilver) {
		this.subscribersSilver = subscribersSilver;
	}

	public ArrayList<PatreonUser> getSubscribersGold() {
		return subscribersGold;
	}

	public void setSubscribersGold(ArrayList<PatreonUser> subscribersGold) {
		this.subscribersGold = subscribersGold;
	}

	public void insertNewWork(String type, String genre, String title, String subscriptionLevel) {
        works.add(new Work(type, genre, title, subscriptionLevel));
    }

    
}
