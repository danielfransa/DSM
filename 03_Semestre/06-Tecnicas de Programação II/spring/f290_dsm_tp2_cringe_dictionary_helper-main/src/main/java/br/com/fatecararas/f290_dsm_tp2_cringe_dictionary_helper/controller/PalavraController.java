package br.com.fatecararas.f290_dsm_tp2_cringe_dictionary_helper.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;

import br.com.fatecararas.f290_dsm_tp2_cringe_dictionary_helper.model.Palavra;
import br.com.fatecararas.f290_dsm_tp2_cringe_dictionary_helper.services.PalavraService;

@Controller
@RequestMapping("/dicionario")
public class PalavraController {

    @Autowired
    private PalavraService service;

    @GetMapping
    public String home(Model model){
        model.addAttribute("titulo", "Vergonha Alheia");
        model.addAttribute("palavras", service.obterTodas());
        model.addAttribute("palavra", new Palavra());
        return "dicionario";
    }

    @PostMapping("/salvar")
    public String salva(@ModelAttribute("palavra") Palavra palavra) {
        service.adicionar(palavra);
        return "redirect:/dicionario";
    }
    
    @GetMapping("/excluir/{id}")
    public String excluir(@PathVariable("id") Integer id) {
        service.excluir(id);
        return "redirect:/dicionario";
    }
}
