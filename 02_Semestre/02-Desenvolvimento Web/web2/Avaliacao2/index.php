<!DOCTYPE html>
<html lang="pt_BR">
    <head>
        <meta charset="UTF-8">
        <title>Acessar</title>
        <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.css">
        <style type="text/css">
            body{ font: 14px sans-serif; }
            h1{font-size: 58px; font-weight: 900; text-align: center; }
            .wrapper{ margin:auto; width: 350px; padding: 20px; }
        </style>
    </head>
    <body>
        <h1>Site Cadastro Geral</h1>
        <div class="wrapper">
            <h2>Acessar</h2>
            <p>Favor inserir login e senha.</p>
            <form action="valida_senha.php"method="POST">
                <div class="form-group">
                    <label>Username</label>
                    <input type="text" name="username" class="form-control" >
                    <span class="help-block"></span>
                </div>    
                <div class="form-group">
                    <label>Password</label>
                    <input type="text" name="senha" class="form-control">
                    <span class="help-block"></span>
                </div>
                <div class="form-group">
                    <input type="submit" class="btn btn-primary" value="Acessar">
                </div>
            </form>
        </div>    
    </body>
</html>