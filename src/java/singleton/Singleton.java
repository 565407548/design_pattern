package java.singleton;
public class Singleton {
	public static class Singleton0 {
		private static class Singleton4Holder {
			public static final Singleton0 sInstance = new Singleton0();
		}

		private Singleton0() {
		}

		public static Singleton0 getInstance() {
			return Singleton4Holder.sInstance;
		}
	}

	/**
	 * @author zcj
	 * 
	 */
	public static class Singleton1 {
		private static Singleton1 sInstance = new Singleton1();

		private Singleton1() {
		}

		public static Singleton1 getInstance() {
			return sInstance;
		}
	}

	public enum Singleton4 {
		INSTANCE;
		public void whateverMethod() {

		}
	}

	public static class Singleton2 {
		private static Singleton2 sInstance;

		private Singleton2() {
		}

		public static Singleton2 getInstance() {
			if (sInstance == null) {
				synchronized (sInstance) {
					if (sInstance == null) {
						sInstance = new Singleton2();
					}
				}
			}
			return sInstance;
		}
	}

	public static class Singleton3 {
		private static Singleton3 sInstance;

		private Singleton3() {
		}

		public synchronized static Singleton3 getInstance() {
			if (sInstance == null) {
				sInstance = new Singleton3();
			}
			return sInstance;
		}
	}
}
