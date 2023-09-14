package br.com.fatecararas.f290_dsm_tp2_suggestionbox_ct.config.exceptions;

import lombok.AllArgsConstructor;
import lombok.Builder;
import lombok.Data;
import lombok.NoArgsConstructor;

@Data
@AllArgsConstructor
@NoArgsConstructor
@Builder
public class ApiError {

    private long timestamp;
    private Integer status;
    private String error;
    private String massage;
    private String path;
    
    
    
}
