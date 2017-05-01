package sample;

import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.stage.Stage;

public class Main extends Application {

   /* @Override
    public void start(Stage primaryStage) throws Exception{
        Parent root = FXMLLoader.load(getClass().getResource("sample1.fxml"));
        primaryStage.setTitle("UI");
        primaryStage.setScene(new Scene(root, 1100, 550));
        primaryStage.show();
    }*/



     //Autorization
   /* @Override
    public void start(Stage primaryStage) throws Exception{
        Parent root = FXMLLoader.load(getClass().getResource("sample2.fxml"));
        primaryStage.setTitle("UI");
        primaryStage.setScene(new Scene(root, 500, 470));
        primaryStage.show();
    }*/



    @Override
    public void start(Stage primaryStage) throws Exception{
        Parent root = FXMLLoader.load(getClass().getResource("sample3.fxml"));
        primaryStage.setTitle("UI");
        primaryStage.setScene(new Scene(root, 500, 470));
        primaryStage.show();
    }




    public static void main(String[] args) {
        launch(args);
    }
}
