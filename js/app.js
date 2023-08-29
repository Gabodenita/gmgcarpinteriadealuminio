
const btnEnvio= document.getElementById('enviarCorreo');

btnEnvio.addEventListener('click',function(e) {
    e.preventDefault();
    const nombre= document.getElementById('nombre').value;
    const email= document.getElementById('email').value;
    const localidad= document.getElementById('localidad').value;
    const mensaje= document.getElementById('mensaje').value;
    window.location.href= `mailto:gabriel.denita@gmail.com?
    subject=envioDesdeFormulario&body=Nombre%3A%20${nombre}%0ACorreo%3A%20${email}
    %0ALocalidad%3A%20${localidad}%0AMensaje%3A%20${mensaje}`
})