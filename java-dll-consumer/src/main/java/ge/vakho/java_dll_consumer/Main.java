package ge.vakho.java_dll_consumer;

import ge.vakho.java_dll_consumer.classes.Sleeper;

public class Main {

	public static void main(String[] args) {
		try (Sleeper sleeper = new Sleeper()) {
			System.out.println(sleeper.sleepFor(1) / (double) 1_000_000);
		}
	}
}