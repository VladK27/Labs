let rotates = new Object;
rotates = {
    1 : "img/spaceship.png",
    2 : "img/ufo.png",
    3 : "img/asteroid.png"
}


let first = 1;
let second = 2;
let third = 3;
function rotate(){
    document.getElementById('div1').setAttribute('src', rotates[first]);
    document.getElementById('div2').setAttribute('src', rotates[second]);
    document.getElementById('div3').setAttribute('src', rotates[third]);
    if (first == 3) first = 1;
    else first++;
    if (second == 3) second = 1;
    else second++;
    if (third == 3) third = 1;
    else third++;
}
function start(){
    setInterval(() => rotate(), 300);
}