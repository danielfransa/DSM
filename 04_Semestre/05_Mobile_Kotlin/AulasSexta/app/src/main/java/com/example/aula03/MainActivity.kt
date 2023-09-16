package com.example.aula03

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import android.widget.EditText
import android.widget.TextView

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val precoAlcoolEditText = findViewById<EditText>(R.id.precoAlcool)
        val precoGasolinaEditText = findViewById<EditText>(R.id.precoGasolina)
        val textoResultado = findViewById<TextView>(R.id.textoResultado)
        val botao = findViewById<Button>(R.id.botao)

        botao.setOnClickListener {
            calcularMelhorCombustivel(precoAlcoolEditText, precoGasolinaEditText, textoResultado)
        }
    }

    fun calcularMelhorCombustivel(precoAlcoolEditText: EditText, precoGasolinaEditText: EditText, textoResultado: TextView) {
        val precoAlcoolText = precoAlcoolEditText.text.toString()
        val precoGasolinaText = precoGasolinaEditText.text.toString()

        val precoAlcool = precoAlcoolText.toDoubleOrNull()
        val precoGasolina = precoGasolinaText.toDoubleOrNull()

        if (precoAlcool == null || precoGasolina == null) {
            textoResultado.text = "Por favor, insira valores válidos para o preço do álcool e da gasolina."
            return
        }

        val resultado = if (precoAlcool / precoGasolina < 0.7) {
            "Álcool é a melhor escolha."
        } else {
            "Gasolina é a melhor escolha."
        }

        textoResultado.text = resultado
    }
}