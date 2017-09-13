package com.example.blackdandan;

/**
 * description :
 * Created by blackdandan on 2017/9/12.
 */

public class HelloJni {
    public static native String sayHello(String name);


    static {
        System.loadLibrary("HelloJni");
    }

}
