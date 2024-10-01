package simplepatreon;

public class Work {
    private String workType;
    private String genreName;
    private String workTitle;
    private String subscriptionLevel;
    private String workID;
    
	public Work(String workType, String genreName, String workTitle, String subscriptionLevel) {
		super();
		this.workType = workType;
		this.genreName = genreName;
		this.workTitle = workTitle;
		this.subscriptionLevel = subscriptionLevel;
		this.workID = generateWorkID();
	}    
	
    public String getWorkType() {
		return workType;
	}

	public void setWorkType(String workType) {
		this.workType = workType;
	}

	public String getGenreName() {
		return genreName;
	}

	public void setGenreName(String genreName) {
		this.genreName = genreName;
	}

	public String getWorkTitle() {
		return workTitle;
	}

	public void setWorkTitle(String workTitle) {
		this.workTitle = workTitle;
	}

	public String getSubscriptionLevel() {
		return subscriptionLevel;
	}

	public void setSubscriptionLevel(String subscriptionLevel) {
		this.subscriptionLevel = subscriptionLevel;
	}

	public String getWorkID() {
		return workID;
	}

	public void setWorkID(String workID) {
		this.workID = workID;
	}

	private String generateWorkID() {
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < 9; i++) {
            sb.append((int) (Math.random() * 10));
        }
        return sb.toString();
    }
}
