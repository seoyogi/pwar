import javafx.application.Application;
import javafx.scene.*;
import javafx.scene.paint.*;
import javafx.scene.shape.Box;
import javafx.stage.Stage;

public class WebCraftJava extends Application {
    public void start(Stage stage) {
        Group root = new Group();

        for(int x=-5;x<5;x++){
            for(int z=-5;z<5;z++){
                Box b = new Box(50,50,50);
                b.setTranslateX(x*50);
                b.setTranslateY(0);
                b.setTranslateZ(z*50);
                b.setMaterial(new PhongMaterial(Color.GREEN));
                root.getChildren().add(b);
            }
        }

        Scene scene = new Scene(root,800,600,true);
        PerspectiveCamera cam = new PerspectiveCamera(true);
        cam.setTranslateZ(-500);
        cam.setTranslateY(-100);
        scene.setCamera(cam);

        stage.setScene(scene);
        stage.setTitle("JavaCraft");
        stage.show();
    }
    public static void main(String[] args){ launch(); }
}
