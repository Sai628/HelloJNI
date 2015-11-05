package com.sai628.hellojni;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;

import com.chen.hellojni.R;


public class MainActivity extends Activity
{
	static
	{
		System.loadLibrary("hellojni");
	}


	@Override
	protected void onCreate(Bundle savedInstanceState)
	{
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);

		TextView textView = (TextView) findViewById(R.id.textview);
		textView.setText(printJNI("abc"));
	}


	public native String printJNI(String input);

}
