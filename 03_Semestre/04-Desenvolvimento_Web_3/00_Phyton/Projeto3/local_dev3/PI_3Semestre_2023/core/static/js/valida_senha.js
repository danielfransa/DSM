var nomeCompleto = document.getElementById('nome-completo');
var cnpj = document.getElementById('cnpj');
var cep = document.getElementById('cep');
var email = document.getElementById('email');
var num = document.getElementById('num');
var usuario = document.getElementById('usuario');
var senhaInput = document.getElementById('senha');
var confirmarSenhaInput = document.getElementById('confirma-senha');
var submitButton = document.getElementById('submit-button');

confirmarSenhaInput.addEventListener('input', function() {
  if (confirmarSenhaInput.value === senhaInput.value) {
    submitButton.disabled = false;
    senhaInput.style.color = 'green';
    confirmarSenhaInput.style.color = 'green';
  } else {
    submitButton.disabled = true;
    senhaInput.style.color = 'red';
    confirmarSenhaInput.style.color = 'red';
  }
});

submitButton.addEventListener('click', function(event) {
  if (nomeCompleto.hasChildNodes() || cnpj.hasChildNodes() || cep.hasChildNodes() 
  || email.hasChildNodes() || usuario.hasChildNodes() || num.hasChildNodes()){
    submitButton.disabled = true;
  }
  
  if (confirmarSenhaInput.value === senhaInput.value) {
    alert('Usuário Cadastrado!!!');
  }
});