package java.observer;

import java.Param;
import java.util.ArrayList;

public class Observable {
	private ArrayList<ObserverWizard> mObserverWizards;

	public Observable() {
		mObserverWizards = new ArrayList<>();
	}

	public void add(ObserverWizard observerWizard) {
		mObserverWizards.add(observerWizard);
	}

	public boolean remove(ObserverWizard observerWizard) {
		return mObserverWizards.remove(observerWizard);
	}

	public void notify(int tag, Param param) {
		for (ObserverWizard observerWizard : mObserverWizards) {
			if (observerWizard.getObserverFilter().accept(tag, param)) {
				observerWizard.getObserver().update(tag, param);
			}
		}
	}
}
