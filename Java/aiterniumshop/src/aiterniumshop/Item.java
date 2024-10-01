package aiterniumshop;

abstract class Item {
	private String Name;
	private String Rarity;
	private String Type;
	private int Level;
	private int Price;
	private int Point;
	
	public Item(String name, String rarity, String type, int level, int price, int point) {
		super();
		Name = name;
		Rarity = rarity;
		Type = type;
		Level = level;
		Price = price;
		Point = point;
	}
	
	public String getName() {
		return Name;
	}
	public void setName(String name) {
		Name = name;
	}
	public String getRarity() {
		return Rarity;
	}
	public void setRarity(String rarity) {
		Rarity = rarity;
	}
	public String getType() {
		return Type;
	}
	public void setType(String type) {
		Type = type;
	}
	public int getLevel() {
		return Level;
	}
	public void setLevel(int level) {
		Level = level;
	}
	public int getPrice() {
		return Price;
	}
	public void setPrice(int price) {
		Price = price;
	}
	public int getPoint() {
		return Point;
	}
	public void setPoint(int point) {
		Point = point;
	}

	@Override
	public String toString() {
		// TODO Auto-generated method stub
	    return String.format("%-20s|%-6s|%-10s|%-12s|%-13s|%-6s", Name, Level, Rarity, Type, Point, Price); 
	}
	
//	protected static int size() {
//		// TODO Auto-generated method stub
//		return 0;
//	}
//	protected static char[] get(int i) {
//		// TODO Auto-generated method stub
//		return null;
//	}
}
