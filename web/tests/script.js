function test(color, seconds){
document.body.querySelector('div').style.background = color; // сделать фон красным

setTimeout(() => document.body.querySelector('div').style.background = '', parseInt(seconds)*1000); // вернуть назад
}
let them = 'light'
function theme(){
    if(them == 'light'){ 
        document.querySelector('.switch-circle').style.right = '0px';
        document.querySelector('.switch-circle').style.animation = 'to-dark-theme 0.3s linear 1';
        document.body.setAttribute('class', 'dark');
        them = 'dark';
    }
    else {
        document.body.setAttribute('class', 'light');
        them = 'light';
    }
}