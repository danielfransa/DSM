package com.example.sortearnumero

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.TextView
import kotlin.random.Random

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
    }

    fun sortearNumero(view: View){
        var texto = findViewById<TextView>(R.id.TextoResultado)
        var numerosorteado = Random.nextInt( 10,100)

        texto.setText("O numero Sorteado é: $numerosorteado")
    }
}