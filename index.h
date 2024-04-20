<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>GMG</title>

    <!-- link fuentes google -->
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link href="https://fonts.googleapis.com/css2?family=Praise&family=Roboto:wght@500&display=swap" rel="stylesheet">
    <link href="https://fonts.googleapis.com/css2?family=Bebas+Neue&display=swap" rel="stylesheet">

    <!-- link CSS -->
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.1.1/css/all.min.css">
    <link rel="stylesheet" href="estilo.css"> 
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/animate.css/4.1.1/animate.min.css"/>
    <link href="https://unpkg.com/aos@2.3.1/dist/aos.css" rel="stylesheet">

    <!-- Favicon -->
    <link rel="shortcut icon" href="../media/logoGMG.jpg" type="image/x-icon">

    <!-- link Bootstrap-->
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-9ndCyUaIbzAi2FUVXJi0CjmCapSmO7SnpJef0486qhLnuZ2cdeRhO02iuK6FUUVM" crossorigin="anonymous">

    <!-- titulo-->
    <title>Home</title>
</head>

<body >
  <main>

    <header>
        <!-- Navegador de bootstrap-->
        <nav class="navbar navbar-expand-lg navbar-light bg-white ">
            <div class="container ">
                <a class="navbar-brand logo_logo" href="index.html"><img src="media/logoGMG.jpg" alt="logo GMG"></a>
                <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarNav" aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
                    <span class="navbar-toggler-icon"></span>
                </button>
                <div class="collapse navbar-collapse" id="navbarNav">
                    <ul class="navbar-nav">
                        <li class="nav-item">
                            <a class="nav-link active" aria-current="page" href="index.html">Home</a>
                        </li>
                        <li class="nav-item">
                            <a class="nav-link" href="paginas/lineaModena.html">Línea Modena</a>
                        </li>
                        <li class="nav-item">
                            <a class="nav-link" href="paginas/lineaRotonda.html">Línea Rotonda</a>
                        </li>
                        <li class="nav-item">
                            <a class="nav-link" href="paginas/lineaHerrero.html">Línea Herrero</a>
                        </li>
                        <li class="nav-item"> 
                            <a class="nav-link" href="paginas/lineaPremium.html">Línea Premium</a>
                          </li>
                          <li class="nav-item">
                            <a class="nav-link" href="paginas/mamparas.html">Mamparas de Baño</a>
                          </li>
                        <li class="nav-item"> 
                            <a class="nav-link" href="paginas/barandas.html">Barandas</a>
                        </li>
                        <li class="nav-item">
                            <a class="nav-link" href="paginas/contacto.html">Contacto</a>
                        </li>
                    </ul>
                </div>
            </div>
        </nav>
      
    </header>
    <!-- Comienzo del cuerpo de la pagina -->
    <main>
      
      <!-- Carousel de Bootstrap -->
      <div id="carouselExampleIndicators" class=" container carousel slide" data-bs-ride="carousel">
        <div class="carousel-indicators">
          <button type="button" data-bs-target="#carouselExampleIndicators" data-bs-slide-to="0" class="active" aria-current="true" aria-label="Slide 1"></button>
          <button type="button" data-bs-target="#carouselExampleIndicators" data-bs-slide-to="1" aria-label="Slide 2"></button>
          <button type="button" data-bs-target="#carouselExampleIndicators" data-bs-slide-to="2" aria-label="Slide 3"></button>
          <button type="button" data-bs-target="#carouselExampleIndicators" data-bs-slide-to="3" aria-label="Slide 2"></button>
          <button type="button" data-bs-target="#carouselExampleIndicators" data-bs-slide-to="4" aria-label="Slide 3"></button>
          <button type="button" data-bs-target="#carouselExampleIndicators" data-bs-slide-to="5" aria-label="Slide 2"></button>
          <button type="button" data-bs-target="#carouselExampleIndicators" data-bs-slide-to="6" aria-label="Slide 2"></button>
        </div>
        <div class="carousel-inner">
          <div class="carousel-item active" data-bs-interval="4000">
            <img src="media/carrusel/1.jpg" class="d-block w-100" alt="img1">
          </div>
          <div class="carousel-item" data-bs-interval="4000">
            <img src="media/carrusel/2.jpg" class="d-block w-100" alt="img2">
          </div>
          <div class="carousel-item" data-bs-interval="4000">
            <img src="media/carrusel/3.jpg" class="d-block w-100" alt="img3">
          </div>
          <div class="carousel-item" data-bs-interval="4000">
            <img src="media/carrusel/4.jpg" class="d-block w-100" alt="img4">
          </div>
          <div class="carousel-item" data-bs-interval="4000">
            <img src="media/carrusel/5.jpg" class="d-block w-100" alt="img5">
          </div>
          <div class="carousel-item" data-bs-interval="4000">
            <img src="media/carrusel/6.jpg" class="d-block w-100" alt="img6">
          </div>
          <div class="carousel-item" data-bs-interval="4000">
            <img src="media/carrusel/7.jpg" class="d-block w-100" alt="img7">
          </div>
        </div>
      </div>
      
      <div class="container-1"> 
        <!-- Nombre de la empresa y título principal -->
        
        <h1>GMG Carpintería de Aluminio</h1>
        <h2>Aberturas de calidad</h2>
        
        <!-- boton de contacto o presupuesto -->
        <div class="container">

          <a class = "container button" href="paginas/contacto.html"><button class="btn btn-primary btn-consulta">Haga aquí su consulta</button></a>
        </div>
        
        <!-- Tarjetas de bootstrap -->☺
        
        <section id="galeria" class="container">
          <div class="text-center pt-5">
              <h2>NUESTROS PRODUCTOS</h2>
          </div>
          <div class="row">
              <div class="col-lg-4 col-md-6 col-sm-12">
                <div class="card col " style="width: 17rem; height: 35rem;" >
                  <img src="media/Modena/modena.jpg" class="card-img-top;" alt="Línea Modena">
                  <div class="card-body">
                    <h5 class="card-title">Línea Modena 45° </h5>
                    <p class="card-text">La Línea Módena le brinda al diseñador una gran variedad de combinaciones.</p>
                    <a href="paginas/lineaModena.html" class="btn btn-primary btn-primary-1">Conocer más</a>
                  </div>
                </div>
              </div>
              
              <div class="col-lg-4 col-md-6 col-sm-12">
                <div class="card col" style="width: 17rem; height: 35rem; ">
                  <img src="media/Herrero/Corte-Herrero-1.jpg" class="card-img-top" alt="Línea roma">
                  <div class="card-body">
                    <h5 class="card-title">Línea Herrero </h5>
                    <p class="card-text">Es un sistema mediano de diseño clásico, el más tradicional en el mercado de aberturas adaptable a todas las necesidades.</p>
                    <a href="paginas/lineaHerrero.html" class="btn btn-primary btn-primary-1">Conocer más</a>
                  </div>
                </div>
              </div>
              
              <div class="col-lg-4 col-md-6 col-sm-12">
                <div class="card col" style="width: 17rem; height: 35rem; ">
                  <img src="media/rotonda/rotonda.jpg" class="card-img-top" alt="Línea Rotonda">
                  <div class="card-body">
                    <h5 class="card-title">Línea Rotonda </h5>
                    <p class="card-text">La Serie Rotonda 640 responde a las nuevas tendencias de los profesionales de la arquitectura.</p>
                    <a href="paginas/lineaRotonda.html" class="btn btn-primary btn-primary-1">Conocer más</a>
                  </div>
                </div>
              </div>
              
              <div class="col-lg-4 col-md-6 col-sm-12">
                <div class="card col" style="width: 17rem; height: 35rem; ">
                  <img src="media/premium/0533.jpg" class="card-img-top" alt="Línea roma">
                  <div class="card-body">
                    <h5 class="card-title">Línea Premium</h5>
                    <p class="card-text">La línea Módena le brinda al diseñador una gran variedad de combinaciones.</p>
                    <a href="paginas/lineaPremium.html" class="btn btn-primary btn-primary-1">Conocer más</a>
                  </div>
                </div>
              </div>
              
              <div class="col-lg-4 col-md-6 col-sm-12">
                <div class="card col" style="width: 17rem; height: 35rem; ">
                  <img src="media/Modena/modena.jpg" class="card-img-top" alt="Línea roma">
                  <div class="card-body">
                    <h5 class="card-title">Mamparas de Baño </h5>
                    <p class="card-text">La línea Módena le brinda al diseñador una gran variedad de combinaciones.</p>
                    <a href="paginas/mamparas.html" class="btn btn-primary btn-primary-1">Conocer más</a>
                  </div>
                </div>
              </div>
              
              <div class="col-lg-4 col-md-6 col-sm-12">
                <div class="card col" style="width: 17rem; height: 35rem; ">
                  <img src="media/Modena/modena.jpg" class="card-img-top" alt="Línea roma">
                  <div class="card-body">
                    <h5 class="card-title">Barandas de escaleras y balcones </h5>
                    <p class="card-text">La línea Módena le brinda al diseñador una gran variedad de combinaciones.</p>
                    <a href="paginas/barandas.html" class="btn btn-primary btn-primary-1">Conocer más</a>
                  </div>
                </div>
              </div>
            </div>    
        </section>
                
      </div>

      <!-- Ubicación de Google maps -->
      
      <div class="container col-lg-6 col-md-8 col-sm-12 " >
        <div class="row border 1px solid #4579ac !important">
          <iframe src="https://www.google.com/maps/embed?pb=!1m14!1m12!1m3!1d209.05898675387866!2d-68.89397748803634!3d-33.031611383616394!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!5e0!3m2!1ses!2sar!4v1692933187432!5m2!1ses!2sar" width="600" height="450" style="border:0;" allowfullscreen="" loading="lazy" referrerpolicy="no-referrer-when-downgrade"></iframe>
        </div>
      </div>
    
      
      
    </main>  
    <footer>
      <!-- Redes Sociales -->
      <div class="redesSociales">
        <ul class="social-icons">
            <li><a href="https://www.instagram.com/gmgcarpinteria/" target="_blank"><i class="fa fa-instagram"></i></a></li>
            <li><a href="https://www.facebook.com/gmg.metalurgica" target="_blank"><i class="fa-brands fa-facebook"></i></a></li>
            <li><a href="https://wa.me/+5492616503730" target="_blank"><i class="fa fa-whatsapp"></i></a></li>
        </ul>
      </div>
      <div>
      </div>
      
      <!-- Dirección de la empresa y teléfono -->
      <div class="datosEmpresa">
        <h6>Dirección: Chile 589 Luján de Cuyo - Mendoza </h6>
        <h6>
          <a class="telefono" href="tel:+549-2616-503-730">Contacto: +549-2616-503-730</a>
        </h6>
      </div>  
      
      <!-- Logos de empresas -->
      <div class=" container logos"  > 
        <img class ="logo_imagen" src="media/iconos/adhesil.png" alt="logo adhesil">
        <img class ="logo_imagen" src="media/iconos/alcemar.png" alt="logo alcemar">
        <img class ="logo_imagen" src="media/iconos/aluar.png" alt="logo aluar">
        <img class ="logo_imagen" src="media/iconos/bestchem.png" alt="logo bestchem">
        <img class ="logo_imagen" src="media/iconos/hunter.png" alt="logo hunter">
        <img class ="logo_imagen" src="media/iconos/kalciyan.png" alt="logo kalciyan">
        <img class ="logo_imagen" src="media/iconos/tanit.png" alt="logo tanit">
        <img class ="logo_imagen" src="media/iconos/TDA.png" alt="logo TDA">
        <img class ="logo_imagen" src="media/iconos/vasa.png" alt="logo vasa">
      </div>

      <div class="datosPersonales">
        <p>Desarrollado por: GABRIEL DENITA</p>
        <p>
          <a class="telefono" href="tel:+549-2613-063-895">Contacto: +549-2613-063-895</a>
        </p>
        <a href="https://wa.me/+5492613063895" target="_blank"><i class="fa fa-whatsapp"></i></a>
      </div>
    </footer>
    
    <!-- Scipt de Bootstrap -->
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/js/bootstrap.bundle.min.js" integrity="sha384-ka7Sk0Gln4gmtz2MlQnikT1wXgYsOg+OMhuP+IlRH9sENBO0LRn5q+8nbTov4+1p" crossorigin="anonymous"></script>

  </body>

</html>
