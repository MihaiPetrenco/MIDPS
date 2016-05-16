package magicmike.virtualmusic;

import android.content.Intent;
import android.media.MediaPlayer;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class GameStart extends AppCompatActivity {

    boolean fireStatus = false;
    boolean rainStatus = false;
    boolean waterStatus = false;
    boolean forestStatus = false;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_game_start);

        final MediaPlayer fireSound = MediaPlayer.create(this,R.raw.fire);
        Button fireButton = (Button) this.findViewById(R.id.button9);
        fireButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {

                    if(fireSound.isPlaying()) {
                        fireSound.stop();
                    }
                    fireSound.start();
            }
        });

        final MediaPlayer rainSound = MediaPlayer.create(this,R.raw.rain);
        Button rainButton = (Button) this.findViewById(R.id.button2);
        rainButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                if(rainSound.isPlaying()) {
                    rainSound.stop();
                }
                rainSound.start();
            }
        });

        final MediaPlayer waterSound = MediaPlayer.create(this,R.raw.water);
        Button waterButton = (Button) this.findViewById(R.id.button3);
        waterButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                if(waterSound.isPlaying()) {
                    waterSound.stop();
                }
                waterSound.start();
            }
        });

        final MediaPlayer forestSound = MediaPlayer.create(this,R.raw.forest);
        Button forestButton = (Button) this.findViewById(R.id.button4);
        forestButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                if(forestSound.isPlaying()) {
                    forestSound.stop();
                }
                forestSound.start();
            }
        });
    }
}
