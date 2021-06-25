package br.com.setis.nativecproject.in;

public class Native {
    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }
    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public native int majorVersion();
    public native int getFibonacci(int position);

    public int getMajorVerion() {
        return majorVersion();
    }
}
