package ge.vakho.java_dll_consumer.classes;

import com.sun.jna.Library;
import com.sun.jna.Native;
import com.sun.jna.Pointer;

public class Sleeper implements AutoCloseable {

	static {
		System.loadLibrary("SLEEPDLL");
	}

	public interface CLibrary extends Library {

		CLibrary INSTANCE = (CLibrary) Native.load("SLEEPDLL", CLibrary.class);

		Pointer getSleeper();

		long sleepForSecond(Pointer handle);

		long sleepFor(Pointer handle, int seconds);

		void release(Pointer handle);
	}

	private Pointer self;

	public Sleeper() {
		self = CLibrary.INSTANCE.getSleeper();
	}

	public long sleepForSecond() {
		return CLibrary.INSTANCE.sleepForSecond(self);
	}

	public long sleepFor(int seconds) {
		return CLibrary.INSTANCE.sleepFor(self, seconds);
	}

	@Override
	public void close() {
		if (self != null) {
			CLibrary.INSTANCE.release(self);			
		}
	}
}