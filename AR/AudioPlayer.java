import javax.sound.sampled.*;

public class AudioPlayer {
    private Clip clip;
    private boolean isPaused = false;
    private long clipTimePosition;

    // Method to load and play an audio clip
    public void loadAndPlay(String filePath) {
        try {
            AudioInputStream audioInputStream = AudioSystem.getAudioInputStream(getClass().getResource(filePath));
            clip = AudioSystem.getClip();
            clip.open(audioInputStream);
            clip.start();
        } catch (Exception ex) {
            ex.printStackTrace();
        }
    }

    // Method to stop playing the audio clip
    public void stop() {
        if (clip != null && clip.isRunning()) {
            clip.stop();
            clip.close();
        }
    }

    // Method to pause the audio clip
    public void pause() {
        if (clip != null && clip.isRunning()) {
            isPaused = true;
            clipTimePosition = clip.getMicrosecondPosition();
            clip.stop();
        }
    }

    // Method to resume the paused audio clip
    public void resume() {
        if (clip != null && isPaused) {
            clip.setMicrosecondPosition(clipTimePosition);
            clip.start();
            isPaused = false;
        }
    }

    // Example usage
    public static void main(String[] args) {
        AudioPlayer player = new AudioPlayer();
        player.loadAndPlay("file_example_WAV_1MG.wav");

        // Example: stop the audio clip after 5 seconds
        try {
            Thread.sleep(5000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        player.stop();

        // Example: pause and then resume the audio clip
        player.loadAndPlay("file_example_WAV_1MG.wav");
        player.pause();

        try {
            Thread.sleep(2000); // Pause for 2 seconds
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        player.resume();
    }
}
