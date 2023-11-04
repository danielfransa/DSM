package br.com.fatecararas.f290_dsm_tp2_suggestionbox_ct.api.v1.resources;

import java.net.URI;
import java.util.List;
import java.util.OptionalInt;

import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.PutMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.ResponseStatus;
import org.springframework.web.bind.annotation.RestController;
import org.springframework.web.servlet.support.ServletUriComponentsBuilder;

import br.com.fatecararas.f290_dsm_tp2_suggestionbox_ct.model.entities.Category;
import br.com.fatecararas.f290_dsm_tp2_suggestionbox_ct.services.CategoryService;

@RestController
@RequestMapping("/category")
public class CategoryResource {
    
    private final CategoryService service;

    

    public CategoryResource(CategoryService service) {
        this.service = service;
    }

    //@ResponseStatus(code = HttpStatus.CREATED)
    @PostMapping()
    public ResponseEntity<Category> save(@RequestBody Category category) {
        category.setId(null);
        Category cat = service.salvar(category);

        URI uri = ServletUriComponentsBuilder.fromCurrentRequest().path("/{id}").buildAndExpand(cat.getId()).toUri();

        return ResponseEntity.created(uri).build();
    }

    @GetMapping("/all")
    public ResponseEntity<List<Category>> getAll() {
        return ResponseEntity.ok(service.getAll());
    }

    @GetMapping("/{id}")
    public Category getById(@PathVariable("id") Integer id) {
        return service.getById(id);
    }

    @DeleteMapping("/{id}")
    public void deleteById(@PathVariable("id") Integer id) {
        service.deleteById(id);
    }

    @PutMapping("/{id}")
    public Category update(@PathVariable("id") Integer pId, @RequestBody Category category) {
       return service.atualizar(pId, category);
    }


}
