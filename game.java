import javafx.application.Application;
import javafx.scene.*;
import javafx.scene.paint.Color;
import javafx.scene.shape.Box;
import javafx.stage.Stage;

public class Game3D extends Application {
    @Override
    public void start(Stage stage) {
        Box box = new Box(100,100,100);
        Group root = new Group(box);
        Scene scene = new Scene(root, 600, 600, true);
        scene.setFill(Color.BLACK);

        PerspectiveCamera cam = new PerspectiveCamera(true);
        cam.setTranslateZ(-500);
        scene.setCamera(cam);

        stage.setScene(scene);
        stage.setTitle("Java 3D Game");
        stage.show();
    }

    public static void main(String[] args) {
        launch();
    }
}
