package br.com.fatecararas.f290_dsm_tp2_suggestionbox_ct.services;

import java.util.List;
import java.util.Optional;

import org.springframework.stereotype.Service;

import br.com.fatecararas.f290_dsm_tp2_suggestionbox_ct.model.entities.Category;
import br.com.fatecararas.f290_dsm_tp2_suggestionbox_ct.repositories.CategoryRepository;

@Service
public class CategoryService {
    
    private final CategoryRepository repository;

    public CategoryService(CategoryRepository repository) {
        this.repository = repository;
    }

    public Category salvar(Category category) {
        return repository.save(category);
        
    }

    public List<Category> getAll() {
        return repository.findAll();
    }

    public Category getById(Integer id) {
        Optional<Category> optional = repository.findById(id);
        if(optional.isEmpty()) {
            throw new RuntimeException("Categoria não encontrada. ID: "+id);
        }
        return optional.get();
    }

    public void deleteById(Integer id) {
        repository.deleteById(id);
    }

    public Category atualizar(Integer id, Category pCategory) {
        Optional<Category> optCategory = repository.findById(id);

        if(optCategory.isPresent()){
            Category category = optCategory.get();
            category.setDescriptions(pCategory.getDescriptions());
            return repository.save(category);
        }
        
        throw new RuntimeException("Categoria não localizada. ID: "+ id);
    }

}
