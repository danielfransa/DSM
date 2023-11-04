
<?php
session_start();

require 'processos.php';
require 'conexao.php';  

?>
 
<!DOCTYPE html>
<html lang="pt_BR">
<head>
    <meta charset="UTF-8">
    <title>Welcome</title>
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.css">
    <script src="https://cdnjs.cloudflare.com/ajax/libs/bootstrap/5.2.2/js/bootstrap.min.js" integrity="sha512-5BqtYqlWfJemW5+v+TZUs22uigI8tXeVah5S/1Z6qBLVO7gakAOtkOzUtgq6dsIo5c0NJdmGPs0H9I+2OHUHVQ==" crossorigin="anonymous" referrerpolicy="no-referrer"></script>
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.2.0/css/all.min.css" integrity="sha512-xh6O/CkQoPOWDdYTDqeRdPCVd1SpvCA9XXcUnZS2FmJNp1coAFzvtCN9BmamE+4aHK8yyUHUSCcJHgXloTyT2A==" crossorigin="anonymous" referrerpolicy="no-referrer" />
    <style type="text/css">
        body{ font: 14px sans-serif; text-align: center; }
    </style>
</head>
<body>
    <div class="page-header">
        <h1>Olá, <b>
        <br>
        </b>--- Bem-Vindo ao site ---</h1>
    </div>
    <p>
        
        <a href="cadastro.php" class="btn btn-primary">Cadastro Pessoas</a>
        <br><br>
        <?php if($result->num_rows > 0): ?> 
            <table class="table">
                <thead>
                    <tr>
                        <th scope="col">Id</th>
                        <th scope="col">Nome</th>
                        <th scope="col">Curso</th>
                        <th scope="col">Ações</th>
                    </tr>
                </thead>
                <tbody>
                    <?php while($row = $result->fetch_assoc()): ?>
                        <tr>
                            <?php echo "
                                
                                <td>".$row["id"]."</td>
                                <td>".$row["nome"]."</td>
                                <td>".$row["curso"]."</td>";
                            ?>
                            <td>
                                <a href="mostrar_dados.php?id=<?=$row["id"]?>"><i class="fas fa-eye chek-icon"></i></a> 
                                <a href=""><i class="fas fa-edit edit-icon"></i></a>    
                                <a href=""><i class="fas fa-times delete-icon"></i></a> 
                            </td>
                        </tr>
                    <?php endwhile; ?>
                </tbody>
            </table>
        <?php else: ?>
            <p>Sem Cadastros Realizados</p>
        <?php endif; ?>

        <br> 
        
        <a href="logout.php" class="btn btn-danger">Sair da conta</a>
    </p>
</body>
</html>