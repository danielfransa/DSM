package domain.enums;

public enum TipoPizza {
    CALABRESA(1), QUATRO_QUEIJOS(2), PORTUGUESA(3);

    private Integer id;

    private TipoPizza(Integer id) {
        this.id = id;
    }

    public Integer getId() {
        return id;
    }

    public static TipoPizza getTipo(Integer pId) {
        for (TipoPizza p: TipoPizza.values()) {
            if (pId.equals(p.getId())) {
                return p;
            }
        }
        throw new RuntimeException("Tipo Inválido" + pId);
    }
}
