package java.factory;

/**
 * Abstract Factory: create some related objects 
 * Factory Method: cteate object by subclass
 * @author zcj
 *
 */
public abstract class ICarFactory {
	public abstract String createEngine();

	public abstract String createWheel();

	public abstract String createDoor();

	public Car createCar(String name) {
		return new Car(name, createEngine(), createWheel(), createDoor());
	}
}
