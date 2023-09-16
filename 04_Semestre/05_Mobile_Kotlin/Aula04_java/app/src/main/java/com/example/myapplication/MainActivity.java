package com.example.myapplication;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.ImageView;
import android.widget.TextView;

import java.util.Random;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    public void selecionaPapel(View view){
        this.opcaoSelecionada("papel");
    }

    public void selecionaTesoura(View view){
        this.opcaoSelecionada("tesoura");
    }

    public void selecionaPedra(View view){
        this.opcaoSelecionada("pedra");
    }

    public void  opcaoSelecionada(String escolhaUsuario) {

        ImageView imageResult = findViewById(R.id.imageResult);
        TextView textResult = findViewById(R.id.textResult);

        int numero = new Random().nextInt(3);
        String[] opcoes = {"pedra", "tesoura", "papel"};
        String escolhaApp = opcoes[numero];

        switch (escolhaApp){
            case "pedra":
                imageResult.setImageResource(R.drawable.pedra);
                break;

            case "tesoura":
                imageResult.setImageResource(R.drawable.tesoura);
                break;

            case "papel":
                imageResult.setImageResource(R.drawable.papel);
                break;
        }

        if(
                escolhaApp == "tesoura" && escolhaUsuario == "papel" ||
                        escolhaApp == "papel" && escolhaUsuario == "pedra" ||
                        escolhaApp == "pedra" && escolhaUsuario == "tesoura"
        ){
            textResult.setText("Vecê Perdeu =( ");
        } else if (
                escolhaUsuario == "tesoura" && escolhaApp == "papel" ||
                        escolhaUsuario == "papel" && escolhaApp == "pedra" ||
                        escolhaUsuario == "pedra" && escolhaApp == "tesoura"
        ) {
            textResult.setText("Vecê Ganhou =) ");
        }else {
            textResult.setText("Empate =| ");
        }

    }
}