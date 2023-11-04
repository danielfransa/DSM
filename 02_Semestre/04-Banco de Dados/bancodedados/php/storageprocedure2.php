<!DOCTYPE html>
<html lang="pt-br">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Procedures</title>
</head>

<body>
    <?php
        //inportando o arquivo de conexão
        include 'conexao.php';

            $sql = "Select c.*, r.nome as nomerepr from cliente c, representante r where c.idrepresentante = r.id";

            $result = mysqli_query($conexao, $sql);
            print "<h2>Resultado</h2>";
            print "<br>";
            while($linha = mysqli_fetch_assoc($result)){
                print $linha["id"] . " - " . $linha["nomerepr"] . " - " . $linha["nome"];
                print "<br>";
            }
        
    ?>

</body>

</html>