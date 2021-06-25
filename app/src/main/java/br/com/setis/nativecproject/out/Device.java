package br.com.setis.nativecproject.out;

public class Device {
    private int fibonacci;
    private int previous;
    public Device() {
        previous = 0;
        fibonacci = 1;
    }
    public int getNext() {
        int aux = fibonacci;
        fibonacci = fibonacci + previous;
        previous = aux;
        return fibonacci;
    }
    public static int getFibonacciAt(int position) {
        int previous = 0, fibonacci = 1, aux;
        for (int i = 0; i < position; i++) {
            aux = fibonacci;
            fibonacci = fibonacci + previous;
            previous = aux;
        }
        return previous + fibonacci;
    }
}
