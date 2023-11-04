package br.com.fatecararas.f290_dsm_tp2_suggestionbox_ct.config.exceptions;

import javax.servlet.http.HttpServletRequest;

import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.ControllerAdvice;
import org.springframework.web.bind.annotation.ExceptionHandler;

@ControllerAdvice
public class ExcepiotonHandlerConfig {

    @ExceptionHandler({ObjectNotFoundException.class})
    public ResponseEntity<?> notFoundException(ObjectNotFoundException exception, HttpServletRequest request) {
        //TODO: Preencher objeto com resposta da Exception
        var error = new ApiError(System.currentTimeMillis(), 404, exception.getMessage(), "Recurso não localizado", request.getRequestURI());
        return ResponseEntity.status(HttpStatus.NOT_FOUND).body(error);
        
    }
    
}
