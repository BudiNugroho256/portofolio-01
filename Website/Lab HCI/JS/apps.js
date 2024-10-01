const menu = document.querySelector('#mobileMenu')
const links = document.querySelector('.navbarMenu')

menu.addEventListener('click', function(){
    menu.classList.toggle('is-active');
    links.classList.toggle('active');
});