package com.example.ha_hai.hocnativecode;
import android.os.Bundle;
import android.support.annotation.Nullable;
import android.support.v7.app.AppCompatActivity;
import android.widget.TextView;

import org.opencv.android.OpenCVLoader;

public class MainActivity extends AppCompatActivity {

  //used to load the 'native-lib' library on application startup
    static {
        System.loadLibrary("native-lib");
        System.loadLibrary("opencv_java3");
  }

    @Override
    protected void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        //example of a call to a native method
        TextView tv = findViewById(R.id.sample_text);
        tv.setText(stringFromJNI());

        if (!OpenCVLoader.initDebug()) {
            tv.setText(tv.getText() + "\n OpenCVLoader.initDebug(), not working.");
        } else {
            tv.setText(tv.getText() + "\n OpenCVLoader.initDebug(), WORKING.");
        }
    }


    /**
     * A native method that is implemented by the 'native-lib' native labrary
     * which is package with this application
     */
    public native String stringFromJNI();
}