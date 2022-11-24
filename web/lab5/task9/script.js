let search_end = (string) => (string.lastIndexOf('.html') == (string.length - 5));
let search_beggin = (string) => string.indexOf('http://') == 0;

function check(str, which_checking ){
    which_checking = parseInt(which_checking);
    switch(which_checking){
        case 1: alert(search_beggin(str) ? "Вхождение обнаружено": "Вхождение не обнаружено");break;
        case 2: alert(search_end(str) ? "Вхождение обнаружено": "Вхождение не обнаружено");break;
        case 3:{ alert(search_beggin(str) ? "Вхождение 'http://' обнаружено": `Вхождение 'http://' не обнаружено  I ${search_end(str) ? "Вхождение '.html' обнаружено" : "Вхождение '.html' не обнаружено"}`);
        break;}
    }
}