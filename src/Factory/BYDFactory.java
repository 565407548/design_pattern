package Factory;

public class BYDFactory extends ICarFactory {

	@Override
	public String createEngine() {
		// TODO Auto-generated method stub
		return "BYD Engine";
	}

	@Override
	public String createWheel() {
		// TODO Auto-generated method stub
		return "BYD Wheel";
	}

	@Override
	public String createDoor() {
		// TODO Auto-generated method stub
		return "BYD Door";
	}

}
