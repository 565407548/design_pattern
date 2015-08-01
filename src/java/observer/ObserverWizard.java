package java.observer;

public class ObserverWizard {
	private IObserver mObserver;
	private IObserverFilter mObserverFilter;

	public ObserverWizard(IObserver observer, IObserverFilter filter) {
		mObserver = observer;
		mObserverFilter = filter;
	}

	public IObserver getObserver() {
		return mObserver;
	}

	public IObserverFilter getObserverFilter() {
		return mObserverFilter;
	}
}
