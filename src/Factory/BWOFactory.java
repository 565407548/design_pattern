package Factory;

public class BWOFactory extends ICarFactory{

	@Override
	public String createEngine() {
		// TODO Auto-generated method stub
		return "BWO Engine";
	}

	@Override
	public String createWheel() {
		// TODO Auto-generated method stub
		return "BWO Wheel";
	}

	@Override
	public String createDoor() {
		// TODO Auto-generated method stub
		return "BWO Door";
	}

}
