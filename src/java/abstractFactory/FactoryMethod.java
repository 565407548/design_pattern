package java.abstractFactory;

public class FactoryMethod {
	public static AbstractFactoryCore CreateCore(String type) {
		if (type.equals("AndroidCore")) {
			return new AbstractFactoryAndroidCore();
		} else if (type.equals("U3Core")) {
			return new AbstractFactoryU3Core();
		} else {
			return null;
		}
	}
}
