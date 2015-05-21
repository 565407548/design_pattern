package java.factory;

public class Client {
	public static Car buy(String name) {
		ICarFactory factory = null;
		if (name.equals("BWO")) {
			factory = new BWOFactory();
		} else if (name.equals("BYD")) {
			factory = new BYDFactory();
		}
		if (factory != null)
			return factory.createCar(name);
		else
			return null;
	}
}
